/*
class MyStack {
public:
    queue<int> q1;
    queue<int> q2;

    MyStack() {

    }

    void push(int x) {   // O(n)

        while (!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }

        q1.push(x);

        while (!q2.empty()) {
            q1.push(q2.front());
            q2.pop();
        }
    }

    int pop() {   // O(1)
        int ans = q1.front();
        q1.pop();
        return ans;
    }

    int top() {   // O(1)
        return q1.front();
    }

    bool empty() {   // O(1)
        return q1.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 
*/


#include <iostream>
#include <queue>
using namespace std;

class MyStack {
public:
    queue<int> q1;
    queue<int> q2;

    MyStack() {

    }

    // O(n)
    void push(int x) {

        while (!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }

        q1.push(x);

        while (!q2.empty()) {
            q1.push(q2.front());
            q2.pop();
        }
    }

    // O(1)
    int pop() {
        int ans = q1.front();
        q1.pop();
        return ans;
    }

    // O(1)
    int top() {
        return q1.front();
    }

    // O(1)
    bool empty() {
        return q1.empty();
    }
};

int main() {

    MyStack st;

    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Top = " << st.top() << endl;

    cout << "Pop = " << st.pop() << endl;

    cout << "Top = " << st.top() << endl;

    st.push(40);

    while (!st.empty()) {
        cout << st.pop() << " ";
    }

    cout << endl;

    return 0;
}
