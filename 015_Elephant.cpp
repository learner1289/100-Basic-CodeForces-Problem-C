#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    if((x/5)<=1) cout<<1;
    else if(x%5==0) cout<<x/5;
    else if(x%5!=0) cout<<(x/5)+1;
}
