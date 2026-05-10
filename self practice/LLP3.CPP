// THIS FOR EXAM LL 
// -->INSERT AT BEGINNING
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

    // Insert at beginning
    void insert_begin(int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
            head = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
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

    // l.insert_begin(10);
    // l.insert_begin(20);
    // l.insert_begin(30);

     //  l.printList();

    return 0;
}







//INSERT AT END
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
        head = tail = NULL;
    }

    // Insert at end
    void insert_end(int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
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

    // l.insert_end(10);
    // l.insert_end(20);
    // l.insert_end(30);

    // l.printList();

    return 0;
}





//DELETE FROM BEGINNING
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

    void insert_begin(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }

    // Delete from beginning
    void delete_begin() {
        if (head == NULL) {
            cout << "List is empty\n";
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

    // l.insert_begin(10);
    // l.insert_begin(20);
    // l.insert_begin(30);

    // l.delete_begin();

   // l.printList();

    return 0;
}





//DELETE FROM END
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
        head = tail = NULL;
    }

    void insert_end(int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    // Delete from end
    void delete_end() {
        if (head == NULL) {
            cout << "List is empty\n";
            return;
        }

        if (head->next == NULL) {
            delete head;
            head = tail = NULL;
            return;
        }

        Node* temp = head;

        while (temp->next != tail) {
            temp = temp->next;
        }

        delete tail;
        temp->next = NULL;
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

    // l.insert_end(10);
    // l.insert_end(20);
    // l.insert_end(30);

    // l.delete_end();

    // l.printList();

    return 0;
}





//Insert at Any Position (Singly Linked List)
#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};

class List{
    node* head;

public:
    List(){
        head = NULL;
    }

    // 🔹 Insert at any position
    void insert_pos(int val, int pos){

        if(pos <= 0){
            cout << "Invalid position\n";
            return;
        }

        node* newNode = new node(val);

        // Case 1: Insert at beginning
        if(pos == 1){
            newNode->next = head;
            head = newNode;
            return;
        }

        node* temp = head;

        // Traverse to (pos-1)th node
        for(int i = 1; i < pos-1; i++){
            if(temp == NULL){
                cout << "Position out of bounds\n";
                return;
            }
            temp = temp->next;
        }

        if(temp == NULL){
            cout << "Position out of bounds\n";
            return;
        }

        // Insert node
        newNode->next = temp->next;
        temp->next = newNode;
    }

    // 🔹 Print list
    void print(){
        node* temp = head;
        while(temp != NULL){
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main(){

    List l;

    // Initial list banana
    l.insert_pos(10,1);
    l.insert_pos(20,2);
    l.insert_pos(30,3);

    // Insert at position 2
    l.insert_pos(15,2);

    l.print();

    return 0;
}



//Delete at Any Position (Singly Linked List)
#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};

class List{
    node* head;

public:
    List(){
        head = NULL;
    }

    // 🔹 Insert (list banane ke liye use karenge)
    void insert_pos(int val, int pos){

        node* newNode = new node(val);

        if(pos == 1){
            newNode->next = head;
            head = newNode;
            return;
        }

        node* temp = head;

        for(int i = 1; i < pos-1; i++){
            if(temp == NULL){
                return;
            }
            temp = temp->next;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }

    // 🔹 Delete at any position
    void delete_pos(int pos){

        if(head == NULL){
            cout << "List is empty\n";
            return;
        }

        if(pos <= 0){
            cout << "Invalid position\n";
            return;
        }

        // Case 1: Delete first node
        if(pos == 1){
            node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        node* temp = head;

        // Traverse to (pos-1)th node
        for(int i = 1; i < pos-1; i++){
            if(temp->next == NULL){
                cout << "Position out of bounds\n";
                return;
            }
            temp = temp->next;
        }

        if(temp->next == NULL){
            cout << "Position out of bounds\n";
            return;
        }

        // Delete node
        node* delNode = temp->next;
        temp->next = delNode->next;
        delete delNode;
    }

    // 🔹 Print list
    void print(){
        node* temp = head;
        while(temp != NULL){
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main(){

    List l;

    // List create
    l.insert_pos(10,1);
    l.insert_pos(20,2);
    l.insert_pos(30,3);
    l.insert_pos(40,4);

    // Delete position 2
    l.delete_pos(2);

    l.print();

    return 0;
}







//