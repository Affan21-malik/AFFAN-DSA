//Delete Middle Element of Stack

#include <iostream>
#include <stack>
using namespace std;

void solve(stack<int>& s, int k)
{
    if (k == 1)
    {
        s.pop();
        return;
    }

    int temp = s.top();
    s.pop();

    solve(s, k - 1);

    s.push(temp);
}

int main()
{
    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    int k = s.size() / 2 + 1;

    solve(s, k);

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}




/*


DELETE MIDDLE ELEMENT OF STACK — DRY RUN

Given Stack:

        TOP
         ↓
        5
        4
        3
        2
        1

Size = 5

k = size / 2 + 1
  = 5 / 2 + 1
  = 2 + 1
  = 3

So, top se 3rd element delete karna hai.

Top se counting:

5 → 1st
4 → 2nd
3 → 3rd  ← DELETE


STEP 1:

solve(s, 3)

k == 1 ?
3 == 1 → NO

temp = s.top()
temp = 5

s.pop()

Stack:

        4
        3
        2
        1

Now:

solve(s, 2)


STEP 2:

solve(s, 2)

k == 1 ?
2 == 1 → NO

temp = s.top()
temp = 4

s.pop()

Stack:

        3
        2
        1

Now:

solve(s, 1)


STEP 3:

solve(s, 1)

k == 1 ?
1 == 1 → YES

s.pop()

Top element = 3

So, 3 delete ho gaya.

Stack:

        2
        1

return;


NOW RECURSION RETURN HOGA


STEP 4:

solve(s, 2) par wapas aaye.

temp = 4 already saved tha.

s.push(temp)

s.push(4)

Stack:

        4
        2
        1

return;


STEP 5:

solve(s, 3) par wapas aaye.

temp = 5 already saved tha.

s.push(temp)

s.push(5)

Final Stack:

        5
        4
        2
        1


FINAL OUTPUT:

5 4 2 1


IMPORTANT LOGIC:

1. Top element ko temp mein save karo.
2. Usko pop karo.
3. Recursion se middle element tak jao.
4. Middle element par k == 1 hoga.
5. Us element ko pop karke delete karo.
6. Recursion return hote waqt saved elements ko push karo.

Short form:

5 → save → pop
4 → save → pop
3 → pop/delete
4 → push back
5 → push back

Final:

5 4 2 1


*/