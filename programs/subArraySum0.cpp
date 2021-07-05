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

int main()
{
    string inputString;
    getline(cin, inputString);
    vector<int> arr = SplitString(inputString);
    int count=0;
    for(int i=0;i<arr.size()-1;i++){
        int sum=i;
        for(int j=i+1;j<arr.size();j++){
            if((sum+arr[j])==0){
                count+=1;
            };
            if(i==0 && arr[j]==0){
                count+=1;
            }
            sum+=arr[j];
        }
    }
    if(arr[arr.size()-1]==0){
        count+=1;
    }
    if(count==0){
        cout<<"false";
    }
    else{
cout<<count;
    }
    return 0;
}