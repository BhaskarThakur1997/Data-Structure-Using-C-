#include "bits/stdc++.h"
using namespace std;

int32_t main(){
    int num;
    cin>>num;
    int K;
    cin>>K;
    vector<int> a(num);
    for(auto &i : a){
        cin>>i;
    }
    int zero_count = 0, i = 0, result = 0;
    for(int j=0; j<num; j++){
        if(a[j] == 0)
        zero_count++;
        while(zero_count > K){
            if(a[i] == 0)
            zero_count--;
            i++;
        }
        result = max(result, j-i+1);   
    }
    cout<<result<<endl;
    return 0;
}