#include<iostream>
using namespace std;
float arro(int n){
    for(int i=1; i<=n;i++){
        for(int j=1; j<i; j++){
            cout<<"   ";
        }
        for(int j=i; j<=n; j++){
            cout<<" + ";
        }
         for(int j=i; j<n; j++){
            cout<<" + ";
        }
        for(int j=1; j<i*2; j++){
            cout<<"   ";
        }
        for(int j=i; j<=n; j++){
            cout<<" + ";
        }
         for(int j=i; j<n; j++){
            cout<<" + ";
        }
        cout<<endl;
    }
}
int main(){
    int n,m;
    cout<<"Entar the first number :";
    cin>>n;
    cout<<"Loop time :";
    cin>>m;
    int a=1;
    while(a<=m){
    arro(n);
    a++;
    }
}