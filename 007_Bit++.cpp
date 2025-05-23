#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,result=0;
    cin>>n;
    string operation;
    while (n--){
        cin>>operation;

        if(operation== "++X" || operation== "X++") result++;
        else if(operation== "--X" || operation== "X--") result--;
    }
    cout<<result;
}
