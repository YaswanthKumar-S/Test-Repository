import java.util.HashMap;
import java.util.Scanner;
import java.util.TreeMap;
import java.util.*;

public class tree_map {
 public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
    int n=Integer.parseInt(sc.nextLine());
    HashMap <String,Integer> a=new HashMap<>();
    for(int i=0;i<n;i++){
        a.put(sc.nextLine(),Integer.parseInt(sc.nextLine()));
    }
    int price=Integer.parseInt(sc.nextLine());
    TreeMap<String,Integer> t=new TreeMap<>(a);
    for(Map.Entry<String,Integer> e :t.entrySet())
    {
        if(e.getValue()<=price)
        System.out.println(e.getKey()+" : "+e.getValue());
    }
    sc.close();
 }   
}
