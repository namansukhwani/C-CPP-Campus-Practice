#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[],int n){
    bool didSwap;
    for(int i=0;i<n;i++){
        didSwap=false;
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                didSwap=true;
            }
        }
        if(didSwap==false){
            break;
        }
    }
}

int main(){
    int n;
    cin >> n;
    cout << endl;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << endl;
    bubbleSort(arr,n);
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    return 1;
}