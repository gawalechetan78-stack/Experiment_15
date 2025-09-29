

#include <iostream>
#include <limits>

using namespace std;

int main(void)
{
    int age;

    cout << "Enter your age: ";

    try
    {
        if (!(cin >> age) || cin.peek()!= '\n')
        {
            throw runtime_error("Invalid input");
        }
        if (age < 18)
        {
            throw age;
        }
        else
        {
            cout << "You are eligible to vote" << endl;
        }
    }
    catch (int a)
    {
        cout << "You are NOT allowed to vote" << endl;
    }
    catch (const runtime_error &e)
    {
        cout << e.what() << endl;
    }
    return 0;
}
