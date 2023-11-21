/*
    E. Operator-Overloading :

        E1. Support following operators to be overloaded for Complex numbers :

            c. pre and post decrement.
*/

#include <iostream>
using namespace std;

class Counter {
private:
    int count;

public:
    Counter() : count(0) {}

    // Overloading pre-decrement operator
    Counter operator -- () {
        Counter temp;
        temp.count = --count;
        return temp;
    }

    // Overloading post-decrement operator
    Counter operator -- (int) {
        Counter temp;
        temp.count = count--;
        return temp;
    }

    void display() {
        cout << "Count: " << count << endl;
    }
};

int main() {
    Counter c1, c2;

    // Pre-decrement
    cout << "Pre-decrement:" << endl;
    c1.display();  // Initial value

    --c1;         // Decrement
    c1.display();  // New value

    // Post-decrement
    cout << "\nPost-decrement:" << endl;
    c2.display();  // Initial value
    
    c2--;         // Decrement
    c2.display();  // New value

    return 0;
}

/*  OUTPUT

    Pre-decrement:
    Count: 0
    Count: -1

    Post-decrement:
    Count: 0
    Count: -1
*/