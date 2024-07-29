#include <stdio.h>
#include <iostream>
using namespace std;
#define SIZE 21

int main() {
    int i, j,n;
    cout<<"bitte geben Sie die Anzahl der Zeilen ein "<<endl;
    cin>>n;
    for ( i = n; i >= 1; i--)
    {
        for (j = n-i; j>= 1; j--)
        {
            cout<<" ";
        }
        
        for ( j= 1; j <=i; j++)
        {
            cout<<"* ";
        }
        // for ( j= 1; j <=i+i-1; j++)
        // {
        //     cout<<"*";
        // }
        cout<<endl;
    }
    
    
    return 0;
}