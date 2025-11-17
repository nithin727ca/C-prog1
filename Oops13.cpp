#include <iostream>
using namespace std;

class Demo {
public:
    // Constructor
    Demo() {
        cout << "Constructor called: Object created." << endl;
    }

    // Destructor
    ~Demo() {
        cout << "Destructor called: Object destroyed." << endl;
    }

    void display() {
        cout << "Inside display() function." << endl;
    }
};

int main() {
    cout << "Program started." << endl;
    {
        Demo obj;   // Object created here (constructor runs)
        obj.display();
    }   // Scope ends here → destructor automatically called

    cout << "Program ended." << endl;
    return 0;
}
