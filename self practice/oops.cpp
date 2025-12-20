#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class teacher{
    private:
    double salary ;
    public:
    string name;
    string dept ;
    string subject;
    void changedept(string newdept){
        dept = newdept;
    }
    void setsalary(double s){
        salary =s;
    }
    double getsalary(){
        return salary;
    }
};

int main()
{
   teacher t1;
   t1.name="affan";
   t1.subject="c++";
   t1.dept="computer science ";
   t1.setsalary(25000);
   cout<<t1.name<<endl;
   cout<<t1.getsalary()<<endl;

    return 0;
}

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

//access modifier ha private public protected