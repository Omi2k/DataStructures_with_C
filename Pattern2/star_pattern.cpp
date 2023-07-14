#include<iostream>
using namespace std;


int main(){
    int n,i=1,spaces,star,j;
    cout<<"Enter the number : ";
    cin>>n;
    int k = n/2 + 1;
    while(i<=k){

        spaces=1;
        while(spaces<=k-i){
            cout<<" ";
            spaces++;
        }

        star=1;
        while(star<=(i*2-1)){
            cout<<"*";
            star++;
        }
        i++;
        cout<<endl;
    }
    i=n-k;
    while(i>=1){

        spaces = 1;
        while(spaces<=k-i){
            cout<<" ";
            spaces++;
        }
        star= i*2 -1;
        while(star>=1){
            cout<<"*";
            star--;
        }
        i--;
        cout<<endl;
    }

}