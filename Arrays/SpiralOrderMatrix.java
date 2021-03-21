import java.util.*;

public class SpiralOrderMatrix {
    public static void main(String args[]){
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int m = scan.nextInt();
        int[] arr[] = new int[n][m];
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                arr[i][j] = scan.nextInt();
            }
        }
        System.out.println("elements in array:");
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                System.out.print(arr[i][j]+" ");
            }
            System.out.println();
        }
    
    //spiral order print
    int row_start = 0; int row_end = n-1; int column_start = 0; int column_end = m-1;

    while(row_start <= row_end && column_start <= column_end){
       
        // for row_start
        for(int col=column_start; col<=column_end; col++){
            System.out.print(arr[row_start][col]+" ");
        }
        row_start++;
       
        //for column_end
        for(int row=row_start; row<=row_end; row++){
            System.out.print(arr[row][column_end]+" ");
        }
        column_end--;
       
        //for row_end
        for(int col=column_end; col>=column_start; col--){
            System.out.print(arr[row_end][col]+" ");
        }
        row_end--;
       
        //for colum_start
        for(int row=row_end; row>=row_start; row--){
            System.out.print(arr[row][column_start]+" ");
        }
        column_start++;
    }
}
}