#include<bits/stdc++.h>
using namespace std;
int main(){
    int count=0;
    string s;
    string t;
    cin>>s>>t;
    int n=max(s.length(),t.length());
    for(int i=0,j=n-1;i<n;i++,j--){
        if(s[i]!=t[j]) count=1;
    }
    if(count==0) cout<<"YES";
    else cout<<"NO";
}