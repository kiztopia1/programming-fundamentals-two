#include <iostream>
using namespace std;

int main() {
    float height_cm, weight_kg, bmi;

    // Request input from user
    cout << "Enter your height in centimeters: ";
    cin >> height_cm;

    cout << "Enter your weight in kilograms: ";
    cin >> weight_kg;

    // Calculate BMI
    bmi = weight_kg / ((height_cm/100.0) * (height_cm/100.0));

    // Classify weight status based on BMI
    if (bmi < 18.5) {
        cout << "underweight" << endl;
    } else if (bmi < 25) {
        cout << "balanced" << endl;
    }else if(bmi < 30 ) {

        cout << "overweight" << endl;
    }else {
        cout << "obesity" << endl;
    }

    return 0;
}
