#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,count=0;
    cin>>a>>b;
    for(int i=0;b>=a;i++){
        a*=3;
        b*=2;
        count++;
    }
    cout<<count;
}
