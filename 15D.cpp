

#include <iostream>

using namespace std;

int main(void) {
    float a, b, ans;

    cout << "Enter the number 1 and 2: ";
    cin >> a >> b;

    try {
        if(b == 0) {
            throw b;
        } else {
            ans = (a/b);
            cout << ans << endl;
        }
    } catch (float c) {
        cout << "ERROR: Division by " << c << endl;
    }
    return 0;
}
