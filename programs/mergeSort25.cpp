#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int left,int mid,int right){
    int i=left,j=mid+1,k=left,b[right+1-left];
    while(i<=mid && j<=right){
        if(arr[i]>arr[j]){
            b[k-left]=arr[j];
            k++;
            j++;
        }
        else{
            b[k-left]=arr[i];
            k++;
            i++;
        }
    }
    if(j>right){
        while(i<=mid){
            b[k-left]=arr[i];
            k++;
            i++;
        }
    }
    else{
        while(j<=right){
            b[k-left]=arr[j];
            k++;
            j++;
        }
    }
    k=left;
    while(k<=right){
        arr[k]=b[k-left];
        k++;
    }
}

void mergeSort(int arr[],int left,int right){
   if(left<right){
       int mid=(left+right)/2;
       mergeSort(arr,left,mid);
       mergeSort(arr,mid+1,right);
       merge(arr,left,mid,right);
   }
   else{
       return;
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
    mergeSort(arr,0,n-1);
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    return 1;
}