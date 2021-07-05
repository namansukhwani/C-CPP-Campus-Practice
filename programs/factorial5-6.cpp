#include<bits/stdc++.h>
using namespace std;

// int fact(int n){
//     if(n==1 || n==0){
//         return 1;
//     }
//     int i,ans=1;
//     for(i=n;i>0;i--){
//         ans*=i;
//     }
//     return ans;
// }

int fact(int n){
    if(n==1 || n==0){
        return 1;
    }
    return n*fact(n-1);
}

int main(){
    int n;
    cin>>n;
    cout<<fact(n);
    return 0;
}