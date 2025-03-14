#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
   int sum = 0;
    for(int i = 3 ; i<=n ; i+=3){
        if(i%3==0){
            sum += i;
        }
    }
    cout<<sum<<endl;
    return 0;
}
