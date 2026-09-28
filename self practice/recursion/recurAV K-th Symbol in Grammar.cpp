#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:

    int solve(int N, int K)
    {
        if (N == 1 && K == 1)
            return 0;

        int mid = pow(2, N - 1) / 2; // 2 ki power n-1 divided by 2

        if (K <= mid)
        {
            return solve(N - 1, K);
        }
        else
        {
            return !solve(N - 1, K - mid);
        }
    }

    int kthGrammar(int N, int K)
    {
        return solve(N, K);
    }
};

int main()
{
    Solution obj;

    int N, K;

    cout << "Enter N: ";
    cin >> N;

    cout << "Enter K: ";
    cin >> K;

    cout << "Answer: " << obj.kthGrammar(N, K) << endl;

    return 0;
}

// bina kth function bnaye ok 
/*


#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:

    int solve(int N, int K)
    {
        if (N == 1 && K == 1)
            return 0;

        int mid = pow(2, N - 1) / 2;// n-1 ham recusrion sa kr rhe to sort krna pdhta hai esliye kr rhe hai but hme asi k bhi km krna tha to mid nikala k liye dikkat arhi thi esiye ok 

        if (K <= mid)
        {
            return solve(N - 1, K); // k less then rhega to ye solve krega or video m acha smjhaya hai 
        }
        else
        {
            return !solve(N - 1, K - mid); ye return krega n-1 ki value but k jo ham bo compliment hai to jb answer ajaga to uska compliment hi k bnjaga 
        }
    }
};

int main()
{
    Solution obj;

    int N, K;

    cout << "Enter N: ";
    cin >> N;

    cout << "Enter K: ";
    cin >> K;

    cout << "Answer: " << obj.solve(N, K) << endl;

    return 0;
}


*/