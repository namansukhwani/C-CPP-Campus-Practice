#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int n, int no){
    int left=0,right=n;
    while(true){
        int mid=(left+right)/2;
        if(arr[mid]==no){
            return mid;
            break;
        }
        else if(left==right){
            break;
        }
        else if(no>arr[mid]){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    return -1;
}

int main(){
    int n;
    cin >> n;
    cout << endl;
    int no, arr[n], ans;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << endl;
    cin >> no;
    ans = binarySearch(arr,n - 1, no);
    if(ans!=-1){
        cout<<"No at index "<<ans;
    } 
    else{
        cout<<"No not there";
    }
    return 1;
}
