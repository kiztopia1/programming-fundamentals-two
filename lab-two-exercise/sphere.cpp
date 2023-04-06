#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate the surface area of a sphere
float surface_area(float radius) {
    return 4 * M_PI * radius * radius;
}

// Function to calculate the volume of a sphere
float volume(float radius) {
    return (4.0/3.0) * M_PI * radius * radius * radius;
}

int main() {
    float radius;

    // Request input from user
    cout << "Enter the radius of the sphere: ";
    cin >> radius;

    // Calculate area and volume using functions
    float area = surface_area(radius);
    float vol = volume(radius);

    // Output results to user
    cout << "The surface area of the sphere is " << area << " square units." << endl;
    cout << "The volume of the sphere is " << vol << " cubic units." << endl;

    return 0;
}
