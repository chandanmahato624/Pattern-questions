#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter pattern size : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=i; j<n; j++){
            cout<<" ";
        }
        for(int j=1; j<=n; j++){
            if(j==1 || j==n || i==1 || i==n){
                cout<<"+ ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}