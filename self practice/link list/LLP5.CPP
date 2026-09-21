//CIRCULAR LL SEARCH WALA REH RHA H OR DELETE OR INSERT AT ANY POSITION WALA BHI 

// Insert at Head (Circular LL)
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

class CircularList {
    Node* head;
    Node* tail;

public:
    CircularList() {
        head = tail = NULL;
    }

    void insertAtHead(int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
            head = tail = newNode;
            tail->next = head;
        } else {
            newNode->next = head;
            head = newNode;
            tail->next = head;
        }
    }

    void print() {
        if (head == NULL) return;

        Node* temp = head;
        do {
            cout << temp->data << " -> ";
            temp = temp->next;
        } while (temp != head);

        cout << endl;
    }
};

int main() {
    CircularList cl;

    // cl.insertAtHead(1);
    // cl.insertAtHead(2);
    // cl.insertAtHead(3);

    cl.print();
}






//✅ 2. Insert at Tail

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

class CircularList {
    Node* head;
    Node* tail;

public:
    CircularList() {
        head = tail = NULL;
    }

    void insertAtTail(int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
            head = tail = newNode;
            tail->next = head;
        } else {
            tail->next = newNode;
            newNode->next = head;
            tail = newNode;
        }
    }

    void print() {
        if (head == NULL) return;

        Node* temp = head;
        do {
            cout << temp->data << " -> ";
            temp = temp->next;
        } while (temp != head);

        cout << endl;
    }
};

int main() {
    CircularList cl;

    cl.insertAtTail(1);
    cl.insertAtTail(2);
    cl.insertAtTail(3);

    cl.print();
}






//  ✅ 3. Delete at Head


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

class CircularList {
    Node* head;
    Node* tail;

public:
    CircularList() {
        head = tail = NULL;
    }

    void insertAtTail(int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
            head = tail = newNode;
            tail->next = head;
        } else {
            tail->next = newNode;
            newNode->next = head;
            tail = newNode;
        }
    }

    void deleteAtHead() {
        if (head == NULL) return;

        if (head == tail) {
            delete head;
            head = tail = NULL;
        } else {
            Node* temp = head;
            head = head->next;
            tail->next = head;
            delete temp;
        }
    }

    void print() {
        if (head == NULL) return;

        Node* temp = head;
        do {
            cout << temp->data << " -> ";
            temp = temp->next;
        } while (temp != head);

        cout << endl;
    }
};

int main() {
    CircularList cl;

    cl.insertAtTail(1);
    cl.insertAtTail(2);
    cl.insertAtTail(3);

   // cl.deleteAtHead();

    cl.print();
}





// ✅ 4. Delete at Tail

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

class CircularList {
    Node* head;
    Node* tail;

public:
    CircularList() {
        head = tail = NULL;
    }

    void insertAtTail(int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
            head = tail = newNode;
            tail->next = head;
        } else {
            tail->next = newNode;
            newNode->next = head;
            tail = newNode;
        }
    }

    void deleteAtTail() {
        if (head == NULL) return;

        if (head == tail) {
            delete head;
            head = tail = NULL;
        } else {
            Node* temp = tail;
            Node* prev = head;

            while (prev->next != tail) {
                prev = prev->next;
            }

            tail = prev;
            tail->next = head;
            delete temp;
        }
    }

    void print() {
        if (head == NULL) return;

        Node* temp = head;
        do {
            cout << temp->data << " -> ";
            temp = temp->next;
        } while (temp != head);

        cout << endl;
    }
};

int main() {
    CircularList cl;

    cl.insertAtTail(1);
    cl.insertAtTail(2);
    cl.insertAtTail(3);

    cl.deleteAtTail();

    cl.print();
}







// Multiply Two Polynomials
#include<iostream>
using namespace std;

int main(){
    int p1[3] = {1,2,3};
    int p2[2] = {4,5};
    int res[5] = {0};

    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            res[i+j] += p1[i] * p2[j];
        }
    }

    for(int i=0;i<4;i++){
        cout << res[i] << " ";
    }

    return 0;
}