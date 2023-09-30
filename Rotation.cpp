#include <bits/stdc++.h>
using namespace std;

int is_rotation(string str1, string str2){
    if(str1.length() == str2.length()){
        if(str1 == str2){
            return true;
        }
        int partition = 1;
        for(int i = partition; i< str1.length(); i++){
            string p = str1.substr(0,partition);
            string val = str1.substr(partition, str1.length());
            val = val + p;

            if(val == str2){
                return true;
            }
            partition++;
        }
    }
    return false;
}

int main(){
    string str1, str2;
    cout<< "Enter the first string: ";
    cin>> str1;
    cout<< "Enter the second string: ";
    cin>> str2;
    bool result = is_rotation(str1, str2);
    if(result == false){
        cout<< "The strings are not rotations of each other."<<endl;
    }
    else{
        cout<< "The above string are the rotations of each other."<<endl;
    }


    return 0;
}