#include<iostream>
using namespace std;


int main(){
    int n,j,i=1,spaces,k;
    cout<<"Enter the nubmer : ";
    cin>>n;
    while(i<=n){
        spaces=0;
        while(spaces <= n-i){
            cout<<" ";
            spaces++;
        }
        j=1;
        while(j<=i){
            cout<<j+i-1;
            j++;
        }
        k=2*i -1;
        while (k>i){
            k--;
            cout<<k;
        }
        
        cout<<endl;
        i++;
    }

}