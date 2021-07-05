#include<bits/stdc++.h>
using namespace std;

int main(){
    int pos;
    string mainString;
    char newChar;
    getline(cin,mainString);
    cin>>newChar;
    cin>>pos;
    mainString[(pos-1)]=newChar;
    cout<<mainString;
    return 1;
}