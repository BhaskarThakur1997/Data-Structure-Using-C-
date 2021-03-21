import java.util.*;
public class MatrixMultiplication{
    public static void main(String args[]){
        Scanner scan = new Scanner(System.in);
        int n1 = scan.nextInt();
        int n2 = scan.nextInt();
        int n3 = scan.nextInt();
        int m1[][] = new int[n1][n2];
        int m2[][] = new int[n2][n3];
        System.out.println("enter elements in matrix 1:");
        for(int i=0; i<n1; i++){
            for(int j=0; j<n2; j++){
                m1[i][j] = scan.nextInt();
            }
        }
        System.out.println("enter elements in matrix 2:");
        for(int i=0; i<n2; i++){
            for(int j=0; j<n3; j++){
                m2[i][j] = scan.nextInt();
            }
        }
        int result[][] = new int[n1][n3];
        for(int i=0; i<n1; i++){
            for(int j=0; j<n3; j++){
                result[i][j] = 0;
            }
        }
        for(int i=0; i<n1; i++){
            for(int j=0; j<n3; j++){
                for(int k=0; k<n2; k++){
                    result[i][j] += m1[i][k]*m2[k][j];
                }
            }
        }
        // print matrix
        for(int i=0; i<n1; i++){
            for(int j=0; j<n3; j++){
                System.out.print(result[i][j]+" ");
            }
            System.out.println();
        }
    }
}