#include<iostream>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void increment(int &a){
 a++;
}
int main(){
    int a=2;
    //int *b = &a;
increment(a);
cout<<a<<endl;
    return 0;
}