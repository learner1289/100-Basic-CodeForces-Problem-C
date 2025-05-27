#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,count=0;
    cin>>n;
    int decision;
    for(int i =0;i<n;i++){
        cin>>decision;
        if(decision==1){
            cout<<"HARD";
            count=1;
            break;
        }
    }
    if(count==0) cout<<"EASY";
}
