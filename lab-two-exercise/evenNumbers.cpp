#include <iostream>
using namespace std;

// Function to display all even numbers between 1 and n
void display_even_numbers(int n) {
    cout << "Even numbers between 1 and " << n << " are:" << endl;

    for (int i = 2; i <= n; i += 2) {
        cout << i << " ";
    }

    cout << endl;
}

int main() {
    int n;

    // Request input from user
    cout << "Enter a positive integer: ";
    cin >> n;

    // Call the function to display even numbers
    display_even_numbers(n);

    return 0;
}
