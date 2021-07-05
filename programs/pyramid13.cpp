#include <bits/stdc++.h>
using namespace std;

void p1(int n)
{
    int rowLength = n * 2 - 1;
    for (int i = 1; i <= n; i++)
    {
        int dashSize = (rowLength - (2 * i - 1)) / 2;
        for (int j = 0; j < dashSize; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < i; k++)
        {
            cout << i << " ";
        }
        for (int l = 0; l < dashSize - 1; l++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void p2(int n){
     int no=1,rowLength = n * 2 - 1;
    for (int i = 1; i <= n; i++)
    {
        int dashSize = (rowLength - (2 * i - 1)) / 2;
        for (int j = 0; j < dashSize; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < i; k++)
        {
            cout <<no<<" ";
            no++;
        }
        for (int l = 0; l < dashSize - 1; l++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void p3(int n){
    int rowLength = n * 2 - 1;
    for (int i = 1; i <= n; i++)
    {
        int dashSize = (rowLength - (2 * i - 1)) / 2;
        for (int j = 0; j < dashSize; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < i; k++)
        {
            cout <<"* ";
        }
        for (int l = 0; l < dashSize - 1; l++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    p1(n);
    cout<<endl<<endl;
    p2(n);
    cout<<endl<<endl;
    p3(n);
    return 0;
}