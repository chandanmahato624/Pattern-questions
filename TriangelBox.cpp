#include<iostream>
using namespace std;
void trbox(int n){
    for(int i=1; i<=n; i++){
        for(int j=i; j<=n; j++){
            cout<<" + ";
        }
        for(int j=1; j<i*2-1; j++){
            cout<<"   ";
        }
        for(int j=i; j<=n; j++){
            cout<<" + ";
        }
        cout<<endl;
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<" + ";
        }
        for(int j=i; j<n*2-i; j++ ){
            cout<<"   ";
        }
        for(int j=1; j<=i; j++){
            cout<<" + ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Entar the number :";
    cin>>n;
    trbox(n);
}