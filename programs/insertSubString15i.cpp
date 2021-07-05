#include<bits/stdc++.h>
using namespace std;

int main(){
    int pos;
    string mainString,subString;
    getline(cin,mainString);
    getline(cin,subString);
    cin>>pos;
    mainString.insert(mainString.end()-(mainString.size()-pos+1),subString.begin(),subString.end());
    cout<<mainString;
    return 1;
}