#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,countA=0,countD=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]=='A') countA++;
        else if(s[i]=='D') countD++;
    }
    if(countA>countD) cout<<"Anton";
    else if(countA<countD) cout<<"Danik";
    else if(countA==countD) cout<<"Friendship";
}
