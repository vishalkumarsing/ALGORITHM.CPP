#include<bits/stdc++.h>
using namespace std;

void waveprintmatrix(vector<vector<int>>v){
    int m=v.size();
    int n=v.size();

    for( int startcol=0;startcol<n;startcol++){
        //even column from top to bottom
        if((startcol &1)==0){
            for(int i=0;i<m;i++){
                cout<<v[i][startcol]<<" ";
            }

        }
        else{
            for(int i=m-1;i>=0;i--){
                cout<<v[i][startcol]<<" ";
            }
        }
    }
}
int main(){
    vector<vector<int>>v{
        {1,2,3,4},
        {6,4,2,6},
        {4,8,6,4},

    };
    waveprintmatrix(v);
    return 0;
}
