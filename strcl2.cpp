// full name show krdega ye
/*#include <bits/stdc++.h>
using namespace std;

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);
    cout << "You Entered: " << str << endl;
    return 0;
}*/

//full name print and give characters

/*#include <bits/stdc++.h>
using namespace std;

int main() {
    char f_name [20];
    char l_name[20];
    char full_name[50];
    cout << "Enter your first name: ";
    cin >> f_name;
    cout << "Enter your last name: ";
    cin >> l_name;
    cout <<"Hi" << f_name << "! Your first name has" << strlen(f_name)<<" characters." << endl;;
    strcpy(full_name, f_name);
    strcat (full_name, " ");
    strcat(full_name, l_name);
    cout<<"Your full name is: "<< full_name << endl;
    if (( strcmp (f_name,l_name))==0)
    cout << "Both strings are equal." << endl;
    else
    cout << "strings are not equal." << endl;
    return 0;
}*/

// esma kitne small a arhe h btayega bo



#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a') {
            count++;
        }
    }

    cout << "Frequency of small 'a' = " << count;

    return 0;
}


