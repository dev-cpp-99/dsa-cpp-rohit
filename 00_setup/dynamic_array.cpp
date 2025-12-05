#include<iostream>
#include<vector>

using namespace std;
int main(){
    // vector<string> cars = {"Volvo","maruti","bmw"};
    string cars[3] = {"volvo","desire","hackback"};
    //    cars.push_back("e-riksha");

    //  for (string car : cars) {
    //     cout << car << "\n";
    // }
    for(int i=0;i<cars->length();i++){
        cout<<cars[i]<<"\t";
    }
    return 0;
}