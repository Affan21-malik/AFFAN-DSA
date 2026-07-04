/*
class MyQueue {
public:
    stack<int> s1;
    stack<int> s2;

    MyQueue() {

    }

    // O(n)
    void push(int x) {

        while (!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }

        s1.push(x);

        while (!s2.empty()) {
            s1.push(s2.top());
            s2.pop();
        }
    }

    // O(1)
    int pop() {
        int ans = s1.top();
        s1.pop();
        return ans;
    }

    // O(1)
    int peek() {
        return s1.top();
    }

    // O(1)
    bool empty() {
        return s1.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 

*/


#include <iostream>
#include <stack>
using namespace std;

class MyQueue {
public:
    stack<int> s1;
    stack<int> s2;

    MyQueue() {

    }

    // Push - O(n)
    void push(int x) {

        while (!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }

        s1.push(x);

        while (!s2.empty()) {
            s1.push(s2.top());
            s2.pop();
        }
    }

    // Pop - O(1)
    int pop() {
        if (s1.empty()) {
            cout << "Queue is Empty" << endl;
            return -1;
        }

        int ans = s1.top();
        s1.pop();
        return ans;
    }

    // Peek - O(1)
    int peek() {
        if (s1.empty()) {
            cout << "Queue is Empty" << endl;
            return -1;
        }

        return s1.top();
    }

    // Empty - O(1)
    bool empty() {
        return s1.empty();
    }
};

int main() {

    MyQueue q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front Element : " << q.peek() << endl;

    cout << "Deleted : " << q.pop() << endl;

    cout << "Front Element : " << q.peek() << endl;

    q.push(40);

    cout << "Queue Elements : ";

    while (!q.empty()) {
        cout << q.pop() << " ";
    }

    cout << endl;

    return 0;
}