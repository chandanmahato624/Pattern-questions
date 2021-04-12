#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the pattern size : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=i; j<n; j++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            if(j==1 || j==i || i==n){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}