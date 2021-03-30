

public class StockSpan{
    public static int[] findingSpans(int[] input){
        int[] spans = new int[input.length];
        for(int i=0; i<input.length; i++){
            int span = 1;
            int j = i-1;
            while(j >= 0 && input[j] <= input[j+1]){
                span++;
                j--;
            }
            spans[i] = span;
        }
        return spans;
    }
    public static void main(String args[]){
        int[] input = {6,3,4,5,2};
        System.out.print(findingSpans(input)+" ");
    }
}