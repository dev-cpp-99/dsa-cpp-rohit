#include<iostream>
using namespace std;

int main(){
    struct person
    {
        /* data */
        string name;
        string email;
        int age;
        bool status;
    } p1,p2;
    p1.name = "Rohit kumar kashyap";
    p1.email = "rohitdevofficial@gmail.com";
    p1.age =29;
    p1.status=true;
cout << "--- Person Data ---" << endl;
    cout << "Name: " << p1.name << endl;
    cout << "Email: " << p1.email << endl;
    cout << "Age: " << p1.age << endl;
    // status prints 1 for true, 0 for false
    cout << "Status: " << p1.status << endl; 
    cout << "-------------------" << endl;
    p1.name = "Vansh";
    cout << "Name: " << p1.name << endl;
    cout << "Name of second person: " << p2.name << endl;

    
    return 0 ;

}