#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[],int n,int no){
    for(int i=0;i<n;i++){
        if(arr[i]==no){
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    cout << endl;
    int no, arr[n], ans;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    cin >> no;
    ans = linearSearch(arr,n,no);
    if(ans!=-1){
        cout<<"No at index "<<ans;
    } 
    else{
        cout<<"No not there";
    }
    return 1;
}