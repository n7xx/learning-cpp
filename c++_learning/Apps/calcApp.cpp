#include <iostream>
using namespace std;

int main() {

    cout <<"==============================\n";
    cout <<"\n=====AGE CALCULATOR APP!=====\n";
    cout <<"\n==============================\n";
    int age;
    cin >> age;
    int years = age;
    int months = years * 12;
    int days = months * 30;
    int hours = days * 24;
    int minutes = hours * 60;
    int seconds = minutes * 60;
    cout << "Age in years: " << years << "\n";
    cout << "Age in Months: " << months << "\n";
    cout << "Age in Days: " << days << "\n";
    cout << "Age in Hours: " << hours << "\n";
    cout << "Age in Minutes: " << minutes << "\n";
    cout << "Age in Seconds: " << seconds << "\n";

    return 0;
}