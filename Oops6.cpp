//returning an object
#include <iostream>
using namespace std;

class Box {
    int length;
    int breadth;
    int height;

public:
    void getData() {
        cout << "Enter length, breadth, and height: ";
        cin >> length >> breadth >> height;
    }

    void display() {
        cout << "Length: " << length
             << ", Breadth: " << breadth
             << ", Height: " << height << endl;
    }

    
    Box add(Box b2) {
        Box temp;
        temp.length = length + b2.length;
        temp.breadth = breadth + b2.breadth;
        temp.height = height + b2.height;
        return temp;  
    }
};

int main() {
    Box b1, b2, b3;

    cout << "Enter dimensions of Box 1:\n";
    b1.getData();

    cout << "\nEnter dimensions of Box 2:\n";
    b2.getData();

   
    b3 = b1.add(b2);

    cout << "Combined Box dimensions are:"<<endl;
    b3.display();

    return 0;
}
