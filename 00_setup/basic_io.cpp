#include <iostream>
#include <stdio.h>
#include <cstdlib>

using namespace std;

int main()
{
    cout << "---------PROGRAM START-------\n\n";
    double calc(double principle, double roi, double time);
    double principle, roi, time;
    cout << "A simple interest calculator" << endl;
    cout << "Enter Principle Amount: ";
    cin >> principle;
    cout << "\nWhat is the ROI per annum?: ";
    cin >> roi;
    cout << "\nHow much time (in Years): ";
    cin >> time;
    cout << "\nYou will pay Rs. " << calc(principle, roi, time) << " After " << time << " Years\n\n";
    cout << "---------PROGRAM END-------\n\n";

    return 0;
}

double calc(double principle, double roi, double time)
{
    double result = principle * .01 * roi * time;
    return result;
}