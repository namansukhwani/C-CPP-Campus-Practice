#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    if(a==0){
        return b;
    }
    else if(b==0){
        return a;
    }
    else if(a==b){
        return a;
    }
    if(a>b){
        return gcd(a-b,b);
    };
    return gcd(a,b-a);

}

int main(){
    int a,b;
    cin>>a;
    cin>>b;
    cout<<gcd(a,b);
}
