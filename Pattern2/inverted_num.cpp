#include<iostream>
using namespace std;

int main(){
    int n,i=1,j;
    cout<<"Enter the number";
    cin>>n;

    while(i<=n){
        j=n-i;
        while(j>0){
            cout<<n-i;
            j--;
        }
        cout<<endl;
        i++;
    }
}