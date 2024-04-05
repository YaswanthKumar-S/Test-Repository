import java.io.*;
import java.net.ServerSocket;
import java.net.Socket;
import java.util.Scanner;
class RemoteCommandServer {
public static void main(String[] args) throws IOException {
Scanner scanner = new Scanner(System.in);
System.out.print("Enter the Port Address: ");
int port = Integer.parseInt(scanner.nextLine());
try (ServerSocket serverSocket = new ServerSocket(port)) {
System.out.println("Server is Ready To Receive a Command.");
System.out.println("Waiting...");
// Wait and accept a connection
try (Socket clientSocket = serverSocket.accept()) {
if (clientSocket.isConnected()) {
System.out.println("Client Socket is Connected Successfully.");
} InputStream in = clientSocket.getInputStream();
OutputStream out = clientSocket.getOutputStream();
BufferedReader reader = new BufferedReader(new InputStreamReader(in));
PrintWriter writer = new PrintWriter(out, true);
String cmd = reader.readLine();
System.out.println("Received command: " + cmd);
ProcessBuilder processBuilder = new ProcessBuilder(cmd.split("\\s+"));
Process process = processBuilder.start();
// Read the command output and send it back to the client
try (BufferedReader commandOutput = new BufferedReader(new
InputStreamReader(process.getInputStream()))) {
String outputLine;
while ((outputLine = commandOutput.readLine()) != null) {
writer.println(outputLine);
} } } } }}
