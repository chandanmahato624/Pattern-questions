#include<iostream>
using namespace std;
void star(int n){
    for(int i=1; i<=n; i++){
        for(int j=i; j<n; j++){
            cout<<"   ";
        }
        for(int j=1; j<=i; j++){
            cout<<" + ";
        }
         for(int j=1; j<i; j++){
            cout<<" + ";
        }
        cout<<endl;
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<"   ";
        }
        for(int j=i; j<n; j++){
            cout<<" + ";
        }
        for(int j=i+1; j<n; j++){
            cout<<" + ";
        }
        cout<<endl;
    }
}
int main(){
    int n,m;
    cout<<"Enter the star size :";
    cin>>n;
    cout<<"Enter the Number of Star :";
    cin>>m;
    int a=1;
    while(m>=a){
        star(n);
        a++;
    }
}