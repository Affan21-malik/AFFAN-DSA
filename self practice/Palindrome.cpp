#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    int temp = n;
    int rev = 0;

    while (n > 0)
    {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }

    if (rev == temp)
        cout << "Palindrome Number";
    else
        cout << "Not a Palindrome Number";

    return 0;
}