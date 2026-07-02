#include <iostream>
#include <stack>
using namespace std;

bool isValid(string str)
{
    stack<char> st;

    for (int i = 0; i < str.size(); i++)
    {
        // Agar opening bracket hai to stack me daal do
        if (str[i] == '(' || str[i] == '{' || str[i] == '[')
        {
            st.push(str[i]);
        }
        else // Closing bracket hai
        {
            // Agar stack khali hai to matching opening bracket nahi mila
            if (st.size() == 0)
            {
                return false;
            }

            // Agar top aur current bracket match karte hain
            if ((st.top() == '(' && str[i] == ')') ||
                (st.top() == '{' && str[i] == '}') ||
                (st.top() == '[' && str[i] == ']'))
            {
                st.pop();   // Match ho gaya, opening bracket hata do
            }
            else
            {
                // Match nahi hua
                return false;
            }
        }
    }

    // Agar stack empty hai to valid hai
    return st.size() == 0;
}

int main()
{
    string str;

    cout << "Enter brackets: ";
    cin >> str;

    if (isValid(str))
    {
        cout << "Valid Parentheses";
    }
    else
    {
        cout << "Invalid Parentheses";
    }

    return 0;
}

/* 
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (int i = 0; i < s.size(); i++) {

            // Opening bracket
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                st.push(s[i]);
            }
            // Closing bracket
            else {

                // Stack empty hai
                if (st.empty()) {
                    return false;
                }

                // Matching brackets
                if ((st.top() == '(' && s[i] == ')') ||
                    (st.top() == '{' && s[i] == '}') ||
                    (st.top() == '[' && s[i] == ']')) {

                    st.pop();
                }
                else {
                    return false;
                }
            }
        }

        return st.empty();
    }
};

*/


/*
st.size() == 0   // false
st.empty()       // false
*/