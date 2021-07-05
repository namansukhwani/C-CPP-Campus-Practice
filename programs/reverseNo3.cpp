#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ll n,reverse=0,rem;
    cin>>n;
    while (n!=0)
    {
        rem=n%10;
        reverse=reverse*10+rem;
        n/=10;
    }
    cout<<reverse;
    return 0;
}