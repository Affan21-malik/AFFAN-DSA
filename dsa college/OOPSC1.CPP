// #include <iostream>
// using namespace std;

// class student {
//     private:
//         string name;
//         int age;
//     public:
//         void input();
//         void display();
// };
// // Function definition using scope resolution operator ::
// void student::input() {
//     cout << "Enter name: ";
//     cin >> name;
//     cout << "Enter age: ";
//     cin >> age;
// }

//     void student::display() {
//         cout<< "\nStudent Details"  << endl;
//         cout << "Name: " << name << endl;
//         cout << "Age: " << age << endl;
//     }

//     int main() {
//         student s;
//         s.input();
//         s.display();
//         return 0;
//     }


// // Design program to convert a processor implementation of student record system into an object - oriented approach using class and object. Use scope resolution operator to define the member functions of the class outside the class.


#include <iostream>
using namespace std;

class student {
private:
    int id;
    string name;
    int age;
    float marks;
    char grade;

public:
    void input();
    void display();
};

// Function definition using scope resolution operator ::
void student::input() {
    cout << "Enter Student ID: ";
    cin >> id;

    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter Age: ";
    cin >> age;

    cout << "Enter Marks: ";
    cin >> marks;

    cout << "Enter Grade: ";
    cin >> grade;
}

void student::display() {
    cout << "\nStudent Details" << endl;
    cout << "Student ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Marks: " << marks << endl;
    cout << "Grade: " << grade << endl;
}

int main() {
    student s;
    s.input();
    s.display();
    return 0;
}
