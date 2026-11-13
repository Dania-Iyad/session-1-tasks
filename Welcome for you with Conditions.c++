#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int A, B;
    if (cin >> A >> B) {
        if (A >= B) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

}