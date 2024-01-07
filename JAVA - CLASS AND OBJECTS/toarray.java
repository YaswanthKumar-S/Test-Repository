import java.util.ArrayList;
import java.util.Scanner;

class toarray {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        ArrayList<Object> a=new ArrayList<>();
        int n=Integer.parseInt(sc.nextLine());
        for(int i=0;i<n;i++) a.add(sc.nextLine());
        String ar[]=new String[a.size()];
        ar=a.toArray(ar);
        for(Object s:ar) System.out.print(s+" ");
        sc.close();
    }
}
