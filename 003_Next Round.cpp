#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,count=0;
    cin>>n>>k;
    vector<int>positions(n);
    
    for(int i=0;i<n;i++){
        cin>>positions[i];
    }
    int bound=positions[k-1];
    for(int i=0;i<n;i++){
        if(positions[i]>0 && bound<=positions[i]){
        count++;        
        }
    }
    cout<<count<<endl;
}
