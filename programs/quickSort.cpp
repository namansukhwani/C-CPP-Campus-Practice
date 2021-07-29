#include<bits/stdc++.h>
using namespace std;

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int partition(int arr[],int left,int right){
    int i=left-1,j=left,pivit=arr[right];
    for(j;j<right;j++){
        if(arr[j]<pivit){
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    i++;
    swap(&arr[i],&arr[right]);
    return i;
}

void quickSort(int arr[],int left,int right){
    if(left<right){
        int p=partition(arr,left,right);
        quickSort(arr,p+1,right);
        quickSort(arr,left,p-1);
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
    quickSort(arr,0,n-1);
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    return 1;
}