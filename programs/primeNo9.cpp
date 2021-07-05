#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n<=1){
        cout<<"NO";
    }
    else{
        bool flag=true;
        for(int i=2;i<=n/2;i++){
            if(n%i==0){
                cout<<"NO";
                flag=false;
                break;
            }
        }
        if(flag)
            cout<<"YES";
    }
    return 0;
}
