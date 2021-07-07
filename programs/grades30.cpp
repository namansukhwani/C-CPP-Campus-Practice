#include<bits/stdc++.h>
using namespace std;

int main(){
    int grade;
    cin>>grade;
    if(grade<40){
        cout<<"FAILED";
    }
    else if(grade>=40 && grade<50){
        cout<<"THIRD";
    }
    else if(grade>=50 && grade<60){
        cout<<"SECOND";
    }
    else{
        cout<<"FIRST";
    }
    return 1;
}