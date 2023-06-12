#include<bits/stdc++.h>
using namespace std;

int main(){
    string arr[8]={"vishal","muskan","himanshu","madhav","abhishek","ritesh","divyam","priya"};
    int n=8;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int i=0;i<n-1;i++){
    
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            
            }

        }
        
        
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
