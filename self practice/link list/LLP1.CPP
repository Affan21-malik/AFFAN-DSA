//Full Linked List Code (push_front)
#include <iostream>
using namespace std;

// Node class
class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

// List class
class List {
public:
    Node* head;
    Node* tail;

    // Constructor
    List() {
        head = NULL;
        tail = NULL;
    }

    // Insert at front
    void push_front(int val) {
        Node* newNode = new Node(val);

        // Agar list empty hai
        if (head == NULL) {
            head = tail = newNode;
            return;
        }

        // Agar list empty nahi hai
        newNode->next = head;
        head = newNode;
    }

    // Print list
    void printList() {
        Node* temp = head;

        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

// Main function
int main() {
    List ll;

   // ll.push_front(1);
   // ll.push_front(2);
   // ll.push_front(3);

    ll.printList();

    return 0;
}
//PUSH BACK 
#include <iostream>
using namespace std;

// Node class
class Node {
public:
    int data;
    Node* next;

    // Constructor
    Node(int val) {
        data = val;
        next = NULL;
    }
};

// List class
class List {
public:
    Node* head;
    Node* tail;

    // Constructor
    List() {
        head = NULL;
        tail = NULL;
    }

    // Insert at end
    void push_back(int val) {
        Node* newNode = new Node(val);

        // If list is empty
        if (head == NULL) {
            head = tail = newNode;
        }
        else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    // Print list
    void printList() {
        Node* temp = head;

        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

// Main function
int main() {
    List l;

   // l.push_back(10);
   // l.push_back(20);
   // l.push_back(30);

    l.printList();

    return 0;
}
// POP FRONT 
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

class List {
public:
    Node* head;

    List() {
        head = NULL;
    }

    // pop_front
    void pop_front() {
        if (head == NULL) {
            cout << "LL is empty\n";
            return;
        }

        Node* temp = head;
        head = head->next;
        delete temp;
    }

    void printList() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main() {
    List l;
    //l.pop_front();
    l.printList();

    return 0;
}
// POP BACK
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

class List {
public:
    Node* head;
    Node* tail;

    List() {
        head = NULL;
        tail = NULL;
    }

    // pop_back
    void pop_back() {
        if (head == NULL) {
            cout << "LL is empty\n";
            return;
        }

        // single node
        if (head->next == NULL) {
            delete head;
            head = tail = NULL;
            return;
        }

        Node* temp = head;

        while (temp->next != tail) {
            temp = temp->next;
        }

        temp->next = NULL;
        delete tail;
        tail = temp;
    }

    void printList() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main() {
    List l;
    l.pop_back();
    l.printList();

    return 0;
}
/*
INSERT 


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

class List {
public:
    Node* head;

    List() {
        head = NULL;
    }

    // push_front (required)
    void push_front(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }

    // insert (safe version - tumhara wala)
    void insert(int val, int pos) {
        if (pos < 0) {
            cout << "invalid pos\n";
            return;
        }

        if (pos == 0) {
            push_front(val);
            return;
        }

        Node* temp = head;

        for (int i = 0; i < pos - 1; i++) {
            if (temp == NULL) {
                cout << "invalid pos\n";
                return;
            }
            temp = temp->next;
        }

        Node* newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;
    }

    void printLL() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main() {
    List l;

    // initial list
    l.push_front(30);
    l.push_front(20);
    l.push_front(10);

    cout << "Before: ";
    l.printLL();

    l.insert(15, 1);   // valid
    l.insert(50, 10);  // invalid test

    cout << "After: ";
    l.printLL();

    return 0;
}
*/