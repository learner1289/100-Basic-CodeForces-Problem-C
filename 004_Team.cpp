#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,count=0;
    cin>>n;
    while(n--){
        vector<int>ability(3);
        int inner_count=0;

        for(int i=0;i<3;i++){
            cin>>ability[i];
            if(ability[i]==1){
                inner_count++;
            }
        }
        if(inner_count>=2){
                count++;
            }
    }
    cout<<count;
}
