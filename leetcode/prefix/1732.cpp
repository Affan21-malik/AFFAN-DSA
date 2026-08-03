/*
class Solution {
public:
    int largestAltitude(vector<int>& gain) {

        int currentAltitude = 0;
        int maxAltitude = 0;

        for (int i = 0; i < gain.size(); i++) {

            currentAltitude += gain[i];

            maxAltitude = max(maxAltitude, currentAltitude);
        }

        return maxAltitude;
    }
};

*/





/*
class Solution {
public:
    int largestAltitude(vector<int>& gain) {

        vector<int> prefix(gain.size() + 1);

        prefix[0] = 0;

        for (int i = 1; i <= gain.size(); i++) {
            prefix[i] = prefix[i - 1] + gain[i - 1];
        }

        int maxAltitude = prefix[0];

        for (int i = 1; i < prefix.size(); i++) {
            maxAltitude = max(maxAltitude, prefix[i]);
        }

        return maxAltitude;
    }
};

*/