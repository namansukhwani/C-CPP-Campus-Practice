#include<bits/stdc++.h>
using namespace std;

// void swap(int a,int b){
//     int temp;
//     temp=a;
//     a=b;
//     b=temp;
//     cout<<"a="<<a<<endl<<"b="<<b;
// }

// void swap(int a,int b){
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     cout<<"a="<<a<<endl<<"b="<<b;
// }

void swap(int* a,int* b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    cout<<"a="<<*a<<endl<<"b="<<*b;
}

int main(){
    int a,b;
    cin>>a>>b;
    swap(&a,&b);
    return 0;
}