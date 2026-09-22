
#include <iostream>
using namespace std;

class Teacher {
private:
    string name;
    string dept;
    string subject;
    double salary;

    // Member Function
    void changeDept(string newDept) {
        dept = newDept;
    }
};

int main() {
    Teacher t1;

    // t1.name = "Shradha";
    // t1.subject = "C++";
    // t1.dept = "Computer Science";
    // t1.salary = 25000;

    return 0;
}

//Encapsulation


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

    // Member Function
    void changeDept(string newDept) {
        dept = newDept;
    }

    // Setter
    void setSalary(double s) {
        salary = s;
    }

    // Getter
    double getSalary() {
        return salary;
    }
};

int main() {
    Teacher t1;

    t1.name = "Shradha";
    t1.subject = "C++";
    t1.dept = "Computer Science";

    t1.setSalary(25000);

    cout << "Name: " << t1.name << endl;
    cout << "Subject: " << t1.subject << endl;
    cout << "Department: " << t1.dept << endl;
    cout << "Salary: " << t1.getSalary() << endl;

    return 0;
}
*/



/*
#include <iostream>
#include <string>
using namespace std;

class Account {
private:
    double balance;
    string password;   // Data Hiding

public:
    string accountId;
    string username;

    // Setter
    void setBalance(double b) {
        balance = b;
    }

    void setPassword(string p) {
        password = p;
    }

    // Getter
    double getBalance() {
        return balance;
    }

    bool checkPassword(string p) {
        return password == p;
    }
};

int main() {
    Account a1;

    a1.accountId = "ACC101";
    a1.username = "Affan";

    a1.setBalance(50000);
    a1.setPassword("Affan123");

    cout << "Account ID: " << a1.accountId << endl;
    cout << "Username: " << a1.username << endl;
    cout << "Balance: " << a1.getBalance() << endl;

    if (a1.checkPassword("Affan123")) {
        cout << "Password Correct" << endl;
    } else {
        cout << "Wrong Password" << endl;
    }

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
    // Default Constructor
    Teacher() {
        dept = "Computer Science";
    }

    string name;
    string dept;
    string subject;

    void changeDept(string newDept) {
        dept = newDept;
    }

    // Setter
    void setSalary(double s) {
        salary = s;
    }

    // Getter
    double getSalary() {
        return salary;
    }
};

int main() {
    Teacher t1;

    cout << t1.dept << endl;

    return 0;
}

*/




//encapsulation
/*
#include <bits/stdc++.h>
using namespace std;

class Account {
private:   // 🔒 private data
    string password;
    double balance;

public:    // 🌍 public data
    string username;
    string accountId;

    // password set/show
    void setPassword(string p) {
        password = p;
    }
    void showPassword() {
        cout << "Password (private, via function): " << password << endl;
    }

    // balance set/show
    void setBalance(double b) {
        balance = b;
    }
    void showBalance() {
        cout << "Balance (private, via function): " << balance << endl;
    }
};

int main() {
    Account acc;

    // ✅ public members – direct show
    acc.username = "Affan";
    acc.accountId = "AC123";

    cout << "Username (public): " << acc.username << endl;
    cout << "Account ID (public): " << acc.accountId << endl;


    // ✅ private members – function ke through
    acc.setPassword("032abes459");
    acc.setBalance(5000.75);

    acc.showPassword();
    acc.showBalance();

    return 0;
}

*/

