#include<iostream>
using namespace std;
void larrow(int n){
    for(int i=1; i<=n; i++){
        for(int j=i; j<=n; j++){
            cout<<"+ ";
        }
        cout<<endl;
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<"+ ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the pattern size : ";
    cin>>n;
    larrow(n);
}