
#include <iostream>

using namespace std;

int add(int n) {
    if (n <= 0) {
        return 0;
    } else {
        return n + add(n - 1);
    }
}

int main(void) {
    int a = add(100);
    cout << a << endl;
    return 0;
}
