#include<iostream>
using namespace std;

int main(){
    int n,i=0,j;
    cout<<"Enter the number";
    cin>>n;
    while(i!=n){
        j=0;
        while(j!=n){
            cout<<n<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}