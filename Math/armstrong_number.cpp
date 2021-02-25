/* Armstrong Number */
/* check if a given number is armstrong number or not */

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int num;
    cin>>num;
    int sum = 0;
    int original_number = num;
    while(num>0){
        int last_digit=num % 10;
        sum+= pow(last_digit,3);
        num=num/10;
    }
    if(sum == original_number){
        cout<<"Armstrong Number"<<endl;
    }
    else{
        cout<<"Not Armstrong Number"<<endl;
    }
    return 0;
}