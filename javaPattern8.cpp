#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Pattern size : ";
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=i; j<=n-1; j++){
            cout<<"  ";
        }
        for(int j=0; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0; 
}