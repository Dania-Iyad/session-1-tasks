#include <iostream>
using namespace std;

int main() {

    int n;
    if (cin >> n) {

        int first_digit = n / 1000; 

        if (first_digit % 2 == 0) {
            cout << "even" << endl;
        } else {
            cout << "odd" << endl;
        }
    }

}