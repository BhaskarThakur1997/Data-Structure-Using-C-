/*
First Repeating element
Problem Description
Given an integer array A of size N, find the first repeating element in it.
We need to find the element that occurs more than once and whose index of first occurrence is smallest.
If there is no repeating element, return -1.
*/
import java.util.Scanner;

public class FirstRepeatingElement {
public static void main(String args[]){
    Scanner scan = new Scanner(System.in);
    int n = scan.nextInt();
    int arr[] = new int[n];
    for(int i=0;i<n; i++){
        arr[i] = scan.nextInt();
    }
    int idx[] = new int[n];
    for(int i=0; i<n; i++){
        idx[i] = -1;
    }
    int min_idx = Integer.MAX_VALUE;
    for(int i=0; i<n; i++){
        if(idx[arr[i]] != -1){
            min_idx = Math.min(min_idx, idx[arr[i]]);
        }else{
            idx[arr[i]] = i;
        }
    }
    if(min_idx == Integer.MAX_VALUE){
        System.out.println("-1");
    }else{
        System.out.println(min_idx+1);
    }
}    
}
