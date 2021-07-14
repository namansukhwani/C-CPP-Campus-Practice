#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int left, int right, int no)
{
    int mid = (left + right) / 2;
    if (arr[mid] == no){
        return mid;
    }
    else if (left == right){
        return -1;
    }
    else if (no > arr[mid]){
        return binarySearch(arr, mid + 1, right, no);
    }
    return binarySearch(arr,left,mid-1,no);
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
    ans = binarySearch(arr, 0, n - 1, no);
    if(ans!=-1){
        cout<<"No at index "<<ans;
    } 
    else{
        cout<<"No not there";
    }
    return 1;
}
