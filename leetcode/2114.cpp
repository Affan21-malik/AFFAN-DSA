/*
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxWords = 0;

        for (string s : sentences) {
            int words = 1;

            for (char ch : s) {
                if (ch == ' ')
                    words++;
            }

            maxWords = max(maxWords, words);
        }

        return maxWords;
    }
};
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxWords = 0;

        for (string s : sentences) {
            int words = 1;

            for (char ch : s) {
                if (ch == ' ') {
                    words++;
                }
            }

            maxWords = max(maxWords, words);
        }

        return maxWords;
    }
};

int main() {
    vector<string> sentences = {
        "alice and bob love leetcode",
        "i think so too",
        "this is great thanks very much"
    };

    Solution obj;

    cout << "Maximum number of words = "
         << obj.mostWordsFound(sentences);

    return 0;
}