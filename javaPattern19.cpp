#include<iostream>
using namespace std;
void inverted(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<i; j++){
            cout<<" ";
        }
        for(int j=i; j<=n; j++){
            if(i==1 || j==i || j==n){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the patter size : ";
    cin>>n;
    inverted(n);
}