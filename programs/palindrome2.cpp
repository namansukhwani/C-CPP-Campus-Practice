#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin,str);
    string temp=str;
    reverse(temp.begin(),temp.end());
    if(temp==str){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    };
    return 0;
}