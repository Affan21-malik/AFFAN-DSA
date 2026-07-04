#include <iostream>
#include <unordered_map>
#include <queue>
#include <string>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> m;
        queue<int> q;

        for (int i = 0; i < s.size(); i++) {

            // Agar character pehli baar aaya hai
            if (m.find(s[i]) == m.end()) {
                q.push(i);
            }

            // Character ki frequency badhao
            m[s[i]]++;

            // Queue se repeated characters hatao
            while (!q.empty() && m[s[q.front()]] > 1) {
                q.pop();
            }
        }

        // Agar queue empty hai to unique character nahi mila
        if (q.empty())
            return -1;

        return q.front();
    }
};

int main() {
    Solution obj;

    string s;
    cout << "Enter a string: ";
    cin >> s;

    int index = obj.firstUniqChar(s);

    if (index == -1)
        cout << "No unique character found." << endl;
    else
        cout << "First unique character: " << s[index] << endl
             << "Index: " << index << endl;

    return 0;
}
/*
class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> m;
        queue<int> q;
        for(int i=0; i<s.size(); i++){
       if(m.find(s[i])==m.end() ){
        q.push(i);
       }
       m[s[i]]++;

       while(q.size()>0 && m[s[q.front()]]>1){
        q.pop();
       }

        }
        return q.empty() ? -1 :q.front();
    }
};
*/