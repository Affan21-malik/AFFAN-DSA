#include <iostream>
#include <string>
using namespace std;

class Teacher {
private:
    double salary;

public:
    // Non-Parameterized Constructor
    Teacher() {
        dept = "Computer Science";
    }

    // Parameterized Constructor
    Teacher(string n, string d, string s, double sal) {
        name = n;
        dept = d;
        subject = s;
        salary = sal;
    }

    string name;
    string dept;
    string subject;

    void changeDept(string newDept) {
        dept = newDept;
    }

    void getInfo() {
        cout << "Name : " << name << endl;
        cout << "Subject : " << subject << endl;
    }
};

int main() {

    Teacher t1("Shradha", "ComputerScience", "C++", 25000);

    t1.getInfo();

    return 0;
}


/*

#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    double cgpa;

    // Parameterized Constructor
    Student(string name, double cgpa) {
        this->name = name;
        this->cgpa = cgpa;
    }

    void getInfo() {
        cout << "name : " << name << endl;
        cout << "cgpa : " << cgpa << endl;
    }
};

int main() {

    Student s1("rahul kumar", 8.9);

    // Copy Constructor
    Student s2(s1);

    s2.getInfo();

    return 0;
}

*/

/*
#include <iostream>
#include <string>
using namespace std;

class Teacher {
private:
    double salary;

public:
    string name;
    string dept;
    string subject;

    // Non-Parameterized Constructor
    Teacher() {
        dept = "Computer Science";
    }

    // Parameterized Constructor esko piche wale parameterized sa bhi kr sakte h ok
    Teacher(string name, string dept, string subject, double salary) {
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }

    void changeDept(string newDept) {
        dept = newDept;
    }

    void getInfo() {
        cout << "name : " << name << endl;
        cout << "subject : " << subject << endl;
    }
};

int main() {

    Teacher t1("Shradha", "ComputerScience", "C++", 25000);

    // t1.getInfo();

    Teacher t2(t1);   // Copy Constructor

    t2.getInfo();

    return 0;
}

*/