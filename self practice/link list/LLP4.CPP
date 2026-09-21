// DOUBLY LL SEARCH WALA REH RHA H OK


//Insert at Beginning
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val) {
        data = val;
        next = prev = NULL;
    }
};

class DoublyList {
public:
    Node* head;
    Node* tail;

    DoublyList() {
        head = tail = NULL;
    }

    void insert_begin(int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    void print() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " <-> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main() {
    DoublyList dll;
//     dll.insert_begin(1);
//     dll.insert_begin(2);
//     dll.insert_begin(3);
//     dll.print();
}





//Insert at End
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val) {
        data = val;
        next = prev = NULL;
    }
};

class DoublyList {
public:
    Node* head;
    Node* tail;

    DoublyList() {
        head = tail = NULL;
    }

    void insert_end(int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
            head = tail = newNode;
        } else {
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
        }
    }

    void print() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " <-> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main() {

    DoublyList dll;
    dll.insert_end(1);
    dll.insert_end(2);
    dll.insert_end(3);
    dll.print();
}






//Insert at Any Position
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val) {
        data = val;
        next = prev = NULL;
    }
};

class DoublyList {
public:
    Node* head;
    Node* tail;

    DoublyList() {
        head = tail = NULL;
    }

    void insert_end(int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
            head = tail = newNode;
        } else {
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
        }
    }

    void insert_pos(int val, int pos) {
        if (pos == 1) {
            Node* newNode = new Node(val);
            newNode->next = head;
            if (head != NULL) head->prev = newNode;
            head = newNode;
            return;
        }

        Node* temp = head;

        for (int i = 1; i < pos - 1 && temp != NULL; i++) {
            temp = temp->next;
        }

        if (temp == NULL) {
            cout << "Invalid position\n";
            return;
        }

        Node* newNode = new Node(val);

        newNode->next = temp->next;
        newNode->prev = temp;

        if (temp->next != NULL)
            temp->next->prev = newNode;

        temp->next = newNode;
    }

    void print() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " <-> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main() {
    DoublyList dll;
    dll.insert_end(1);
    dll.insert_end(2);
    dll.insert_end(4);

    // dll.insert_pos(3, 3);
    dll.print();
}







//Delete at Beginning
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val) {
        data = val;
        next = prev = NULL;
    }
};

class DoublyList {
public:
    Node* head;
    Node* tail;

    DoublyList() {
        head = tail = NULL;
    }

    void insert_end(int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
            head = tail = newNode;
        } else {
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
        }
    }

    void delete_begin() {
        if (head == NULL) {
            cout << "Empty\n";
            return;
        }

        Node* temp = head;
        head = head->next;

        if (head != NULL)
            head->prev = NULL;
        else
            tail = NULL;

        delete temp;
    }

    void print() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " <-> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main() {
    DoublyList dll;
    dll.insert_end(1);
    dll.insert_end(2);
    dll.insert_end(3);

     // dll.delete_begin();
    dll.print();
}






//Delete at End
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val) {
        data = val;
        next = prev = NULL;
    }
};

class DoublyList {
public:
    Node* head;
    Node* tail;

    DoublyList() {
        head = tail = NULL;
    }

    void insert_end(int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
            head = tail = newNode;
        } else {
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
        }
    }

    void delete_end() {
        if (tail == NULL) {
            cout << "Empty\n";
            return;
        }

        Node* temp = tail;
        tail = tail->prev;

        if (tail != NULL)
            tail->next = NULL;
        else
            head = NULL;

        delete temp;
    }

    void print() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " <-> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main() {
    DoublyList dll;
    dll.insert_end(1);
    dll.insert_end(2);
    dll.insert_end(3);

  //  dll.delete_end();
    dll.print();
}




//Delete at Any Position
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val) {
        data = val;
        next = prev = NULL;
    }
};

class DoublyList {
public:
    Node* head;
    Node* tail;

    DoublyList() {
        head = tail = NULL;
    }

    void insert_end(int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
            head = tail = newNode;
        } else {
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
        }
    }

    void delete_pos(int pos) {
        if (head == NULL) {
            cout << "Empty\n";
            return;
        }

        Node* temp = head;

        if (pos == 1) {
            head = head->next;
            if (head != NULL)
                head->prev = NULL;
            delete temp;
            return;
        }

        for (int i = 1; i < pos && temp != NULL; i++) {
            temp = temp->next;
        }

        if (temp == NULL) {
            cout << "Invalid position\n";
            return;
        }

        if (temp->next != NULL)
            temp->next->prev = temp->prev;

        if (temp->prev != NULL)
            temp->prev->next = temp->next;

        delete temp;
    }

    void print() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " <-> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main() {
    DoublyList dll;
    dll.insert_end(1);
    dll.insert_end(2);
    dll.insert_end(3);

    dll.delete_pos(2);
    dll.print();
}