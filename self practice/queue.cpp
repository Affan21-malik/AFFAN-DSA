//Queue using STL (Ready-made)

#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);

    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}


//Queue using Linked List



#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class Queue {
    Node* head;
    Node* tail;

public:
    Queue() {
        head = tail = NULL;
    }

    bool empty() {
        return head == NULL;
    }

    void push(int data) {
        Node* newNode = new Node(data);

        if (empty()) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop() {
        if (empty()) {
            cout << "Queue Empty\n";
            return;
        }

        Node* temp = head;
        head = head->next;
        delete temp;

        if (head == NULL)
            tail = NULL;
    }

    int front() {
        if (empty()) {
            return -1;
        }

        return head->data;
    }
};

int main() {

    Queue q;

    q.push(1);
    q.push(2);
    q.push(3);

    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}

//Queue using STL list


#include <iostream>
#include <list>
using namespace std;

class Queue {
    list<int> ll;

public:
    void push(int val) {
        ll.push_back(val);   // Rear me insert
    }

    void pop() {
        ll.pop_front();      // Front se delete
    }

    int front() {
        return ll.front();
    }

    bool empty() {
        return ll.empty();
    }
};

int main() {

    Queue q;

    q.push(1);
    q.push(2);
    q.push(3);

    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}


//Queue using Vector (Full Code)

#include <iostream>
#include <vector>
using namespace std;

class Queue {
    vector<int> v;

public:
    // Push -> Rear me insert
    void push(int val) {
        v.push_back(val);
    }

    // Pop -> Front se delete
    void pop() {
        if (empty()) {
            cout << "Queue is Empty\n";
            return;
        }

        v.erase(v.begin());   // First element delete
    }

    // Front element
    int front() {
        if (empty()) {
            return -1;
        }

        return v[0];
    }

    // Empty check
    bool empty() {
        return v.size() == 0;
    }
};

int main() {
    Queue q;

    q.push(1);
    q.push(2);
    q.push(3);

    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}