#include<bits/stdc++.h>


using namespace std;
int main(){
    int arr[]={5,6,3,4,5};
    int n=5;
    
    for(int ele:arr){
        cout<<ele<<" ";
    }
    cout<<endl;

    for(int i=0;i<n-1;i++){
        int min=INT_MAX;//greatest element
        int mindx=-1;//index any thing -1;
        for(int j=i;j<n;j++){
            if(arr[j]<min){

                min=arr[j];
                mindx=j;// index of j
            }
        }
        swap(arr[i],arr[mindx]);//swapping 0 and 1 index
    }
    for(int ele:arr){
        cout<<ele<<" "; 
    }


    
}
