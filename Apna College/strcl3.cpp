#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    int lowerCount = 0;
    int upperCount = 0;

    for (int i = 0; str[i] != '\0'; i++) {

        
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') 
        {
            lowerCount++;
        }

        
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') 
        {
            upperCount++;
        }
    }

    cout << "Lowercase vowels = " << lowerCount << endl;
    cout << "Uppercase vowels = " << upperCount << endl;

    return 0;
}
