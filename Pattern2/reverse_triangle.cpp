#include<iostream>
using namespace std;

int main(){
    int n ,i=1,spaces,stars;
    cout<< "Enter the number : ";
    cin>>n;

    while(i<=n){
        spaces=1;
        while(spaces<=n-i){
            cout<<" ";
            spaces++;
        }
        stars=1;
        while(stars<=i){
            cout<<"*";
            stars++;
        }
        cout<<endl;
        i++;
    }
}