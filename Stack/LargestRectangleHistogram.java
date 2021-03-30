import java.util.*;

public class LargestRectangleHistogram{
    public static int largestRectangleArea(int[] heights){
        Stack<Integer> st = new Stack<>();
        if(heights == null || heights.length == 0)
        return 0;
        int maxArea = 0;
        int i = 0;
        while(i < heights.length){
            if(st.empty() || heights[st.peek()] <= heights[i])
            st.push(i++);
            else{
                int top = st.pop();
                maxArea = Math.max(maxArea, heights[top] * (st.empty()? i:i-st.peek()-1));
            }
        }
        while(!st.empty()){
            int top = st.pop();
            maxArea = Math.max(maxArea, heights[top] * (st.empty()? i:i-st.peek()-1));
        }
        return maxArea;
    }
    public static void main(String args[]){
        Scanner scan = new Scanner(System.in);
        int t =  scan.nextInt();
        while(t-->0){
            int n = scan.nextInt();
            int[] heights = new int[n];
            for(int i=0; i<n; i++)
            heights[i] = scan.nextInt();

            System.out.println(largestRectangleArea(heights));
        }
    }
}