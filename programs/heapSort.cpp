#include<bits/stdc++.h>
using namespace std;

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void maxHepify(int arr[],int n,int i){
    int left=2*i+1,right=2*i+2,max=i;
    if(left<n && arr[left]>arr[max]){
        max=left;        
    }
    if(right<n && arr[right]>arr[max]){
        max=right;
    }
    if(max!=i){
        swap(&arr[i],&arr[max]);
        maxHepify(arr,n,max);
    }
}

void buildMaxHeap(int arr[],int n){
    for(int i=(n-1)/2;i>=0;i--){
        maxHepify(arr,n,i);
    }
}

void heapSort(int arr[],int n){
    buildMaxHeap(arr,n);
    for(int i=n-1;i>0;i--){
        swap(&arr[0],&arr[i]);
        maxHepify(arr,i,0);
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
    heapSort(arr,n);
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    return 1;
}