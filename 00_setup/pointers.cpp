#include<iostream>
using namespace std;

int main(){
    
    // string person = "Abhishek bacchan";
    // string* ptr =  &person;
    // cout<<*ptr;

    string person = "Sumit Sharma";
    string* ptr = &person;

    *ptr = "Shalini";
    cout<<person<<endl;
    return 0;
}