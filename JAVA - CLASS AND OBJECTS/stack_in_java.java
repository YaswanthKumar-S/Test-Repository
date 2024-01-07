import java.util.*;
public class stack_in_java {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        Stack<Integer> a=new Stack<>();
        for(int i=0;i<n;i++) a.add(sc.nextInt());
        int target=sc.nextInt();
        int index=a.search(target);
        if(index!=1) System.out.println(index);
        else System.out.println(index);
        sc.close();
    }
}
