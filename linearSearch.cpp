# include <iostream>
using namespace std;

bool LSearch(int arr[], int size, int key){
    for(int i=0; i<size; i++){
        if(arr[i] == key){
            return 1;
        }
        
    }
    return 0;

}

int main(){
    int arr[100];
    int size;
    cin >> size;
    for(int i=0; i< size; i++){
        cin>> arr[i];
    }
    int key;
    cin>>key;
    bool found = LSearch(arr, size, key);
    if(found){
        cout<<"Present"<<endl;
    }
    else{
        cout<<"Absent"<<endl;
    }
}