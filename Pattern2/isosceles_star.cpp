#include<iostream>
using namespace std;

int main(){
    int n,i=1,j,k,spaces;
    cout<<"Enter the number : ";
    cin>> n;

    while(i<=n){
        spaces=0;
        while(spaces <= n-i){
            cout<<" ";
            spaces++;
        }
        j=1;
        while(j <= (i*2-1) ){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
}