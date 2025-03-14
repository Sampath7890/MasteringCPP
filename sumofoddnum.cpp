#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter how many odd numbers do you want: ";
    cin>>n;
    int oddSum=0;
    for(int i=1; i<n; i++){
        if(i%2 != 0){
            oddSum += i;
        }
    }
    cout<<"The sum of first "<<n<<" odd numbers is "<<oddSum<<endl;
    return 0;
}
