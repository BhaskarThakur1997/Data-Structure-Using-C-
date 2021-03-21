public class TransposeMatrix{
    public static void main(String aargs[]){
        int arr[][] ={{1,2,3},{4,5,6},{7,8,9}};
        for(int i=0; i<3; i++){
            for(int j=i; j<3; j++){
                //swap
                int temp = arr[i][j];
                arr[i][j] = arr[j][i];
                arr[j][i] = temp;
            }
        }
        //print
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                System.out.print(arr[i][j]+" "); 
            }
            System.out.println()
        }
    }
}