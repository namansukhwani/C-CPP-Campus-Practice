#include<bits/stdc++.h>
using namespace std;

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min=INT_MAX,pos=i;
        for(int j=i;j<n;j++){
            if(arr[j]<min){
                min=arr[j];
                pos=j;
            }
        }
        swap(&arr[i],&arr[pos]);
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
    selectionSort(arr,n);
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    return 1;
}