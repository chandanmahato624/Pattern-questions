#include<iostream>
using namespace std;
float RightLine(int n){
    for(int i=1; i<=n; i++){
        for(int j=i; j<n; j++){
            cout<<"   ";
        }
        cout<<" + ";
        cout<<endl;
    }
}
float LeftLine(int n){
    for(int i=1; i<n; i++){
        for(int j=1; j<=i; j++){
            cout<<"   ";
        }
        cout<<" + ";
        cout<<endl;
    }
}
int main(){
    int n,m;
    cout<<"Enter the Size :";
    cin>>n;
    cout<<"Enter the Line size :";
    cin>>m;
    int a=1;
    while(a<=m){
    RightLine(n);
    LeftLine(n);
    a++;
    }
}