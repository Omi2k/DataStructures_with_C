#include<iostream>
using namespace std;

int main(){
    int i=1,n,j,k,spaces;
    cout<<"Enter the number";
    cin>>n;
    while(i<=n){
        spaces=0;
        while(spaces <= n-i){
            cout<<" ";
            spaces++;
        }
        j=1;
        while(j<=i){
            cout<<j;
            j++;
        }
        k=1;
        while(k<i){
            cout<<i-k;
            k++;
        }
        i++;
        cout<<endl;
    }
}