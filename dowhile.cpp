#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter how many times uh want to print:";
    cin>>n;
    int i=1;
    do{
        cout<<i<<endl;
        i++;
    } while(i <= n);
    return 0;
}
