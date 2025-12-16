//part man lege usko delete krte rhenge jbtk bo usme nhi rhe
#include <bits/stdc++.h>
using namespace std;

string removeOccurrences(string s, string part)
{
    while (s.length() > 0 && s.find(part) < s.length())//s.find jo h ye starting point 
    {
        s.erase(s.find(part), part.length());//part jo h bo find kr rhe h uski
        //length tk erase krega simple or screenshot h ok
    }
    return s;
}

int main()
{
    string s = "abcabcabcabc";
    string part = "abc";

    cout << removeOccurrences(s, part);

    return 0;
}
