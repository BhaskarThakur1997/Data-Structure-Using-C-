import java.util.*;

public class SearchMatrix{
    public static void main(String args[]){
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int m = scan.nextInt();
        int mat[][] = new int[n][m];
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                mat[i][j] = scan.nextInt();
            }
        }
        int target = scan.nextInt();
        int row = 0, col = m-1;
        boolean found = false;
        while(row<n && col>=0){
            if(mat[row][col]==target){
                found = true;
            }
            if(mat[row][col]>target){
                col--;
            }else{
                row++;
            }
        }
        if(found){
            System.out.println("element found");
        }else{
            System.out.println("element does not found");
        }
    }
}