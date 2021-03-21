/* Array Max till i */
import java.util.*;
public class Max{
public static void main(String args[]){
    Scanner scan = new Scanner(System.in);
    int n = scan.nextInt();
    int arr[] = new int[n];
    for(int i=0; i<n; i++){
        arr[i] = scan.nextInt();
    }
    int max_arr = Integer.MIN_VALUE;
    for(int i=0; i<n; i++){
        max_arr = Math.max(max_arr, arr[i]);
    }
    System.out.print(max_arr+" ");
}
}