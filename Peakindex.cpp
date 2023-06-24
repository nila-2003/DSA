#include <iostream>
using namespace std;
int peakIndex(int arr[],int size){
    int s=0, e= size-1;
    int mid= s+(e-s)/2;
    while(s<e){
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid= s+(e-s)/2;
    }
    return s;
}
int main(){
    int array[6]= {0,3,4,5,2,1};
    cout<<"Peak element index is: "<<peakIndex(array,6)<<endl;
    return 0;
}