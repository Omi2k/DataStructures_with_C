#include<iostream>
using namespace std;

int main(){
    int i, n, j,p;
    cout<<"Enter the Number : ";
    cin>>n;
    i=n;
    while(i>0){
        j=1;
        p=n-i + 1;
        while(j<=p){
            char ch = 'A' + i + j-2;
            j++;
            cout<<ch<<" ";
        }
        cout<<endl;
        i--;
    }
}