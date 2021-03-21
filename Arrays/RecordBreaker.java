import java.util.*;
public class RecordBreaker {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int a[] = new int[n+1];
        a[n] = -1;
        for(int i=0; i<n; i++){
            a[i] = scan.nextInt();
        }
        if(n==1){
            System.out.println("1");
        }
        int ans = 0;
        int max_num = -1;
        for(int i=0; i<n; i++){
            if(a[i] > max_num && a[i] > a[i+1]){
                ans++;
            }
            max_num = Math.max(max_num, a[i]);
        }
        System.out.println(ans);
    }
}
