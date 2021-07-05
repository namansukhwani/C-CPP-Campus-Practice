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

int main()
{
    string inputString;
    getline(cin,inputString);
    vector<int> arr=SplitString(inputString);
    vector<int> ans={arr[arr.size()-1]};
    vector<int> splitedVector(arr.begin(),arr.end()-1);
    ans.insert(ans.end(),splitedVector.begin(),splitedVector.end());
    PrintVector(ans);
    return 0;
}
