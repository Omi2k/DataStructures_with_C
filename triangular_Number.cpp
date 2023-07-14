#include<iostream>
using namespace std;


int main(){
    int n,i=1,j;
    cout<<"Enter the number of amount : ";
    cin>> n;

    while(i<=n){
        j=1;
        while(j<=i){
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }
}