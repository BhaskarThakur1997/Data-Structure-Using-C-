/* fndings primes in Range [1:n] without using sieve of eratosthene */

#include <iostream>

using namespace std;

bool check_prime(int n){
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            return false;
        }  
    }
    return true;
}
 void get_primes(int n){
     for(int i=2; i<=n; i++){
         if(check_prime(i)){
             cout<<i<<" ";
         }
     }
 }
int main(){
    int n;
    cin>>n;
    get_primes(n);
    return 0;
}