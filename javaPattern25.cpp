#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the pattern size : ";
    cin>>n; 
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(j==n-i+1 || j==i){
                cout<<"+ ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}