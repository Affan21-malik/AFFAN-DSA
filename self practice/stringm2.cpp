/*
imp rules 
C++ String Constructors (Easy Series for Exam)
1. Normal string initialization
string s1 = "hello";

2. Copy constructor
string s2(s1);

3. Substring from index
string s3(s1, 2);


4. Substring with index and length
string s4(s1, 1, 3);

5. First n characters from text
string s5("Dipika", 3);

6. Repeated character string
string s6(5, 'a');


7. Single character string (Correct way)
string s7(1, 'x');

8. Empty string
string s8;
string s9 = "";

(string, number) → number = index

(string, number, number) → index + length

("text", number) → number = length

(number, 'char') → character repeat
*/
/*
#include <iostream>
#include<string>
using namespace std;
int main()
{
    string str = {“Welcome Home”};
    cout << str[6]<<endl; //Displays character at  index 6. No Bound Checking
	cout << str.at(6); //Displays character at 6th  index
		return 0;
}
OUTPUT
e
e

*/


/*OUTPUT
Welcome Home

*/
#include <iostream>
#include<string>
using namespace std;
int main()
{
    string str = {"Welcome Home"};
    for(char c:str)
		{
			 cout<<c;
    }
		return 0;
}
