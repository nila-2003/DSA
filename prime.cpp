#include <iostream>
using namespace std;

int main(){
    int n;
    cout<< "Enter the value of n: ";
    cin>> n;
    bool isPrime = 1;
    for(int i = 2; i < n; i++){
        if(n%i == 0){
            isPrime = 0;
            break;
        }
        else{
            isPrime = 1;
        }
    }
    if(isPrime == 1){
        cout << n <<" is a Prime Number"<< endl;
    }
    else{
        cout<< n << " is not a prime number"<< endl;
    }
    return 0;
}