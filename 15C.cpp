

#include <iostream>

using namespace std;

void reverseString(const char *str) {
    if(*str == '\0')
        return;
    reverseString(str + 1);
    cout << *str;
}

int main(void) {
    const char *a = "Hello, World!";
    reverseString(a);
    cout << endl;
    return 0;
}
