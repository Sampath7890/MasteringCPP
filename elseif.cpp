#include<iostream>
using namespace std;
int main (){
    int marks;
    cout<<"enter your marks:";
    cin>>marks;
    if (marks >= 90){
        cout<<"your grade is A ";
    } else if (marks  >= 80 && marks < 70 ){
        cout<<"your grade is B";
    } else {
        cout<<"your grade is C";
    }
    return 0;
}