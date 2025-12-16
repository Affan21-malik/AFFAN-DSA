//roll and name print krana h a
/*
#include <bits/stdc++.h>
using namespace std;
class student{
    public:
    int roll;
    string name;
    void show(){
        cout<<"roll number is:"<<roll<<endl;
         cout<<"your name is :"<<name<<endl;
    }
};

int main()
{
   student s;
   s.roll=5;
   s.name="XYZ";
   s.show();
  
    return 0;
}*/

//cin krke

#include <bits/stdc++.h>
using namespace std;

class student {
public:
    int roll;
    string name;

    void show() {
        cout << "Roll number is: " << roll << endl;
        cout << "Your name is: " << name << endl;
    }
};

int main() {
    student s;

    cout << "Enter roll number: ";
    cin >> s.roll;

    cout << "Enter name: ";
    cin >> s.name;  

    s.show();

    return 0;
}
