#include<bits/stdc++.h>
using namespace std;

void PrintVector(int v[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}

int fibo(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    };
    return fibo(n-1)+fibo(n-2);  
};

int main(){
    int n;
    cin>>n;
    // int ans[n];
    // ans[0]=0;
    // ans[1]=1;
    // for(int i=2;i<n;i++){
    //     ans[i]=ans[i-1]+ans[i-2];
    // }
    // PrintVector(ans,n);
    for(int i=0;i<n;i++){
        cout<<fibo(i)<<" ";
    }
    return 0;
}