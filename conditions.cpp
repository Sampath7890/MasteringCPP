#include<iostream>
using namespace std;
int  main(){
    int age;
    cout<<"Enter your age:";
    cin>>age;
    if(age>=18){
        cout<<"you are eligible for votting";
    } else{
        cout<<"you are not eligible for voting";
    }
    return 0;
}