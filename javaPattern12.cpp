#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the pattern size : ";
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            if(j==i || j==0 || i==0){
                cout<<"+ ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}
