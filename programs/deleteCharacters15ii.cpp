#include<bits/stdc++.h>
using namespace std;

int main(){
    int pos;
    string mainString;
    getline(cin,mainString);
    cin>>pos;
    mainString.erase(mainString.end()-(mainString.size()-pos+1),mainString.end());
    cout<<mainString;
    return 1;
}