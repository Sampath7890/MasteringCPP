#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter how many rows uh want:";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            cout<<j;
        }
        cout<<endl;
    }
}
