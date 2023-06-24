#include <iostream>
using namespace std;

int FirstOcc(int arr[],int size,int key){
    int s=0,e=size-1;
    int mid= s+ (e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            e= mid-1;

        }
        else if(arr[mid]<key){
            s= mid+1;

        }
        else if(arr[mid]>key){
            e=mid-1;

        }
        mid = s+ (e-s)/2;
    }
    return ans;
}
int lastOcc(int arr[],int size,int key){
    int s=0,e=size-1;
    int mid= s+ (e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            s= mid+1;

        }
        else if(arr[mid]<key){
            s= mid+1;

        }
        else if(arr[mid]>key){
            e=mid-1;

        }
        mid = s+ (e-s)/2;
    }
    return ans;
}
int main(){
    int even[9]={1,2,3,3,3,3,3,3,5};
    cout<<"First occurence of 3 is at "<<FirstOcc(even,9,3)<<endl;
    cout<<"Last occurence of 3 is at "<<lastOcc(even,9,3)<<endl;
    int No_of_occ=(lastOcc(even,9,3) -FirstOcc(even,9,3))+1;
    cout<<"Number of occurences: "<<No_of_occ<<endl;
    return 0;
}
