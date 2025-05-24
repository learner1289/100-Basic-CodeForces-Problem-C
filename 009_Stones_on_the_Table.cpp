#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,count=0;
    cin>>n;
    string colors;
    cin>>colors;
    for(int i=0;i<colors.length()-1;i++){
        if(colors[i]==colors[i+1]) count++;
    }
    cout<<count;
}
