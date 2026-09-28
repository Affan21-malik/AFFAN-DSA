#include <iostream>
#include <deque>
using namespace std;

int main() {

    deque<int> dq;

    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(3);

    // Queue ban jayegi
    // Front -> 1 2 3 <- Rear

    dq.push_front(4);

    // Front -> 4 1 2 3 <- Rear

    cout << "Front = " << dq.front() << endl;
    cout << "Back = " << dq.back() << endl;

    dq.pop_back();

    // Front -> 4 1 2 <- Rear

    cout << "After pop_back()" << endl;
    cout << "Front = " << dq.front() << endl;
    cout << "Back = " << dq.back() << endl;

    dq.pop_front();

    // Front -> 1 2 <- Rear

    cout << "After pop_front()" << endl;
    cout << "Front = " << dq.front() << endl;
    cout << "Back = " << dq.back() << endl;

    cout << "Size = " << dq.size() << endl;

    if (dq.empty())
        cout << "Deque Empty";
    else
        cout << "Deque Not Empty";

    return 0;
}






#include <iostream>
#include <deque>
using namespace std;

int main() {

    deque<int> dq;

    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(3);

    dq.push_front(4);

    cout << dq.front() << " " << dq.back() << endl;

    dq.pop_back();

    return 0;
}



#include <iostream>
#include <deque>
using namespace std;

int main() {

    deque<int> dq;

    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(3);

    dq.push_front(4);

    while (!dq.empty()) {
        cout << dq.front() << " ";
        dq.pop_front();
    }

    cout << endl;

    return 0;
}

//Agar reverse print karna ho (back se)#include <iostream>
#include <deque>
using namespace std;

int main() {

    deque<int> dq;

    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(3);

    dq.push_front(4);

    while (!dq.empty()) {
        cout << dq.back() << " ";
        dq.pop_back();
    }

    cout << endl;

    return 0;
}

//Deque using Vector
#include <iostream>
#include <vector>
using namespace std;

class Deque {
    vector<int> v;

public:
    void push_front(int val) {
        v.insert(v.begin(), val);
    }

    void push_back(int val) {
        v.push_back(val);
    }

    void pop_front() {
        if (!empty())
            v.erase(v.begin());
    }

    void pop_back() {
        if (!empty())
            v.pop_back();
    }

    int front() {
        return v.front();
    }

    int back() {
        return v.back();
    }

    bool empty() {
        return v.empty();
    }
};

int main() {
    Deque dq;

    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(3);
    dq.push_front(4);

    while (!dq.empty()) {
        cout << dq.front() << " ";
        dq.pop_front();
    }

    return 0;
}


//Deque using Linked List


#include <iostream>
#include <list>
using namespace std;

class Deque {
    list<int> l;

public:
    void push_front(int val) {
        l.push_front(val);
    }

    void push_back(int val) {
        l.push_back(val);
    }

    void pop_front() {
        l.pop_front();
    }

    void pop_back() {
        l.pop_back();
    }

    int front() {
        return l.front();
    }

    int back() {
        return l.back();
    }

    bool empty() {
        return l.empty();
    }
};

int main() {
    Deque dq;

    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(3);
    dq.push_front(4);

    while (!dq.empty()) {
        cout << dq.front() << " ";
        dq.pop_front();
    }

    return 0;
} 