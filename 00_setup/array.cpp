#include<iostream>
#include<stdio.h>

using namespace std;
int main(){
    string cars[3] = {"volvo","desire","hackback"};
    //cars[3] = "Maruti";
    // string name = "Rohit singh";
    // cout<<"\nThe length of name is :"<<name.length();
    // cout<<"\nThe length of array is :"<<cars->length();
    for(string car: cars){
        cout<<car<<endl;
    }
    return 0;
}