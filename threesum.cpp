#include "bits/stdc++.h"
using namespace std;

int32_t main(){
    int num;
    cin>>num;
    int target;
    cin>>target;
    vector<int> arr(num);
    bool result = false;
    for(auto &i : arr){
        cin>>i;
    }
    sort(arr.begin(), arr.end());
    for(int i=0; i<num; i++){
        int low = i+1;
        int high = num-1;
        while(low < high){
            int current = arr[i] + arr[low] + arr[high];
            if(current == target){
                result = true;
            }
            if(current < target){
                low++;
            }
            else{
                high--;
            }
        }
    }
    if(result)
    cout<<true;
    else
    cout<<false;
}