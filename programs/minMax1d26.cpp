#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    cout << endl;
    int arr[n],max=INT_MIN,min=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"MAX: "<<max<<endl;
    cout<<"MIN: "<<min;
    return 1;
}