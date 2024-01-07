import java.util.ArrayDeque;
import java.util.Iterator;
import java.util.Scanner;

public class ArrayDeque_in_java {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        ArrayDeque<Object> a=new ArrayDeque<>();
        for(int i=0;i<5;i++) a.add(sc.nextInt());
        sc.close();
        a.removeLast();
        Iterator<Object> it=a.iterator();
        while(it.hasNext()) System.out.print(it.next()+" ");
    }
}
