#include <bits/stdc++.h>

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
                temp = "";
            }
        }
        else
        {
            temp.push_back(s[i]);
        }
    }
    if (temp.length() != 0)
    {
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

int findPairs(vector<int> v,int n){
    int i,ans=0;
    for(i=0;i<v.size()-1;i++){
        for(int j=i+1;j<v.size();j++){
            if((v[i]+v[j])==n){
                ans+=1;
            }
        }
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    cin.ignore(256, '\n');
    string inputString;
    getline(cin, inputString);
    vector<int> arr = SplitString(inputString);
    cout<<findPairs(arr,n);
}   