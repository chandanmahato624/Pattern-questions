#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size :";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<" + ";
        }
        cout<<endl;
    }
    for(int i=1; i<n; i++){
        for(int j=n; j>i; j--){
            cout<<" + ";
        }
        cout<<endl;
    }
}