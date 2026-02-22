//static vs dynamic allocation 
//compile time or ye run time hoti h 
// ye stack memory ke ander hoti h or ye heap memory k 
// ex int arr[5],vector<int>vec;


// size and capacity pta lgai ha esma

/*#include <iostream>
#include <vector>
using namespace std ;
int main()
{
  vector<int>vec;
  
  vec.push_back(25);
  vec.push_back(45);
  vec.push_back(55);
  cout<<" size = "<<vec.size()<<endl;
  cout<<" capacity="<<vec.capacity()<<endl;
    return 0;
}*/


// imp question ye 3 type sa kr sakte h ok 
/*#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int>& nums) {
    int ans = 0;
    
    for(int i = 0; i < nums.size(); i++) {
        ans = ans ^ nums[i];
    }
    
    return ans;
}

int main() {
    vector<int> nums = {2, 2, 1};
    
    cout << "Single Number is: " << singleNumber(nums);
    
    return 0;
}*/
/*
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;

        // Range-based for loop
        for(int val : nums) {
            ans = ans ^ val;
        }

        return ans;
    }
};

int main() {
    vector<int> nums = {4, 1, 2, 1, 2};

    Solution obj;
    int result = obj.singleNumber(nums);

    cout << "Single Number is: " << result << endl;

    return 0;
}
*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {4, 1, 2, 1, 2};
    
    int ans = 0;

    // XOR logic
    for(int val : nums) {
        ans = ans ^ val;
    }

    cout << "Single Number is: " << ans << endl;

    return 0;
}
// reverse in vector
/*
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40, 50};

    cout << "Vector in reverse order: ";

    for(int i = v.size() - 1; i >= 0; i--) {
        cout << v[i] << " ";
    }

    return 0;
}
*/
// linear search in vector 
/*
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40, 50};
    int key;

    cout << "Enter element to search: ";
    cin >> key;

    for(int i = 0; i < v.size(); i++) {
        if(v[i] == key) {
            cout << "Element found at index: " << i;
            return 0;   // mil gaya to program yahi khatam
        }
    }

    cout << "Element not found";

    return 0;
}
*/

