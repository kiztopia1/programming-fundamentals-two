#include <iostream>
using namespace std;

int main() {
    float income, net;

    // Request input from user
    cout << "Enter your Income ";
    cin >> income;


    // Classify income based on amount and find tax
    if (income <= 1600) {
        net = income;
    } else if (income <= 1650) {
        net = income -(income * 0.1);
    }else if(income <= 3200 ) {

        net = income -(income * 0.15);
    }else if (income <= 5250) {
        net = income -(income * 0.2);
    }else if (income <= 7800) {
        net = income -(income * 0.25);
    }
    else if (income <= 10900) {
        net = income -(income * 0.3);
    }else{
        net = income -(income * 0.35);
    };
    cout << net << " is you net salary.";

    return 0;
}
