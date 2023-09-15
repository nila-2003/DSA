# include <iostream>
using namespace std;

int main(){ 
    int n = 10;
    cout<< "Enter the value of n: ";
    int a = 0, b = 1;
    cout<< a << '\n' << b << endl;

    cin>> n;
    for(int i=1; i<=n; i++){
        int next_number = a + b;
        cout<< next_number << endl;
        a = b;
        b = next_number;
    }
    return 0;
}