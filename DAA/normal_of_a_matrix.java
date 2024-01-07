//import java.util.*;
class mai{
    static int Normal(int matrix[][], int N)
    {
        // Initializing sum
        int s = 0;
        for (int j = 0; j < N; j++)
            for (int k = 0; k < N; k++)
                s += Math.pow(matrix[j][k],2);
        return (int)Math.sqrt(s);
    }
    public static void main(String[] args)
    {
 
        int matrix[][] = {
            { 1,1,1,1,1 }, { 2,2,2,2,2 },
            { 3,3,3,3,3 }, { 4,4,4,4,4 },
            { 5,5,5,5,5 },
        };

        System.out.println("Normal of the Matrix is: "
                           + Normal(matrix, 5));
    }
}