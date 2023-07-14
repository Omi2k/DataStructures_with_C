#include<iostream>
using namespace std;

int main(){
    int n,i=1,space,num;
    cout<<"Enter the number : ";
    cin>>n;
    while(i<=n){
        space=0;
        while(space <= n-i){
            cout<<" ";
            space++;
        }
        num=1;
        while(num <= i){
            cout<<num;
            num++;
        }
        cout<<endl;
        i++;
    }


}