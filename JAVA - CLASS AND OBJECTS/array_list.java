import java.util.*;
public class array_list {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        ArrayList<String> x=new ArrayList<>();
        String a=sc.nextLine();
        x.add(a);
        while(true)
        {
            String input=sc.nextLine();
            if(input.isEmpty()) break;
            x.add(input);  
        }
        System.out.println(x);
        sc.close();
    }
    
}