#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter the number of right side star :";
    cin>>m;
    cout<<"Enter the number of dowen side star :";
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<" + ";
        }
        cout<<endl;
    }
    return 0;
}