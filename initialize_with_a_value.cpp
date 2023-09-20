// How to initialize an array with a single value
# include <iostream>
using namespace std;

int main(){
    int arr[100];
    fill_n(arr,100,1); // initializes the array with 1
    for(int i =0; i<10; i++){
        cout<< arr[i]<<endl;
    }
    
    return 0;


}