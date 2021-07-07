#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int pos, int n, int x)
{
    if (arr[pos] == x)
    {
        return pos;
    }
    else if (pos == n)
    {
        return -1;
    }
    return linearSearch(arr, pos + 1, n, x);
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
    ans = linearSearch(arr, 0, n - 1,no);
    if(ans!=-1){
        cout<<"No at index "<<ans;
    } 
    else{
        cout<<"No not there";
    }
    return 1;
}