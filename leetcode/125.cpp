/*
class Solution {
public:
    bool isPalindrome(string s) {
        int left =0;
        int right = s.size()-1;
        while(left<right){
            if( !isalnum(s[left])){
                left++;

            }
             else if( !isalnum(s[right])){
                right--;
             }
             else if(tolower(s[left])!=tolower(s[right])){
                return false ;
             }
             else{
                left++;
                right--;
             }
             
                
            
        }
        return true;
    }
};
*/
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isPalindrome(string s) {
    int left = 0;
    int right = s.size() - 1;

    while (left < right) {

        // Left side non-alphanumeric ho to skip karo
        if (!isalnum(s[left])) {
            left++;
        }

        // Right side non-alphanumeric ho to skip karo
        else if (!isalnum(s[right])) {
            right--;
        }

        // Characters compare karo (case-insensitive)
        else if (tolower(s[left]) != tolower(s[right])) {
            return false;
        }

        // Agar same hain to pointers move karo
        else {
            left++;
            right--;
        }
    }

    return true;
}

int main() {
    string s;

    cout << "Enter a string: ";
    getline(cin, s);

    if (isPalindrome(s)) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not Palindrome" << endl;
    }

    return 0;
}