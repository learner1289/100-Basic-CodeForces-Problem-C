#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,groups=0;
    cin>>n;
    string prev;
    string curr;
    for (int i=0;i<n;i++){
        cin>>curr;
        if(i==0 || curr!=prev) groups++;
        prev=curr;    
    }   
    cout<<groups;
}
