#include<bits/stdc++.h>
using namespace std;
int main(){
    int row=0,col=0;
    vector<vector<int>>matrix(5,vector<int>(5,0));
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>matrix[i][j];
            if(matrix[i][j]==1){
                row=i+1;
                col=j+1;
                break;
            }
        }
    }
    int result=(abs(3-row)+abs(3-col));
    cout<<result<<endl;
}
