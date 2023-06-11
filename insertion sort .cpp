#include<iostream>
using namespace std;

int main(){
    int arr[]={3,6,2,4,5,6};
    int n=6;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int i=1;i<n;i++ ){
        int j=i;
        while(j>=1 && arr[j]<arr[j-1]){//j index or j  se pahele wala index check yes
            swap(arr[j],arr[j-1]);//swap the value
            j--;//index also minus---;
        }
           
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
