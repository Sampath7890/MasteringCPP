#include<iostream>
using namespace std;
int main(){
    char ch;
cout<<"enter a character:";
cin>>ch;
if (ch>='a' && ch<='z'){
    cout<<"your entered character is in lower case";
} else {
    cout<<"your entered character is in upper case";
}
    return 0;
}