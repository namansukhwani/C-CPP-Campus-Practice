#include<bits/stdc++.h>
using namespace std;

vector<int> SplitString(string s)
{   
    vector<int> v;
    string temp = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            if (temp.length() != 0)
            {
                v.push_back(stoi(temp));
                temp="";
            }
        }
        else
        {
            temp.push_back(s[i]);
        }
    }
    if(temp.length() != 0){
        v.push_back(stoi(temp));
    }

    return v;
}

void PrintVector(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}


int main(){
    string inputStr;
    getline(cin,inputStr);
    vector<int> ans,arr=SplitString(inputStr);
    for(int i=0;i<arr.size();i++){
        if(find(ans.begin(),ans.end(),arr[i])!=ans.end()){
            continue;
        }
        else{
            ans.push_back(arr[i]);
        }
    }
    PrintVector(ans);
    return 0;
}