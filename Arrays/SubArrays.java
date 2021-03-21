/* sum of all subarrays */

import java.util.*;

public class SubArrays{
    public static void main(String args[]){
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int arr[] = new int[n];
        for(int i=0; i<n; i++){
            arr[i] = scan.nextInt();
        }
       // starting index
       int max_sum = Integer.MIN_VALUE;
       for(int i=0; i<n; i++){
           // ending index
           for(int j=i; j<n; j++){
               // middle element
               int sum=0;
               for(int k=i; k<=j; k++){
                   sum +=arr[k];
                   //System.out.print(arr[k]+" ");
               }
               max_sum = Math.max(max_sum,sum);
           }
       }
       System.out.print(max_sum+" ");
       
    }
}