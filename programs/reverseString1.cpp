#include <bits/stdc++.h>

using namespace std;

void reverseString(string &s){
    string temp="";
    for(int i=s.length();i>=0;i--){
        temp.push_back(s[i]);
    }
    s=temp;
}

int main(){
    string s;
    getline(cin,s);
    // reverse(s.begin(),s.end());
    reverseString(s);
    cout<<s;
    return 0;
}