#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Entar the number :";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=i; j<n; j++){
            cout<<" ";
        }
        for(int j=1; j<=i*2-1; j++){
            if(j%2==0){
                cout<<"-";
            }else{
                cout<<"+";
            }
        }
        cout<<endl;
    }
}