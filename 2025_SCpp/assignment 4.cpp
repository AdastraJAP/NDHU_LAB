

/* Lab of programming question 04
Description

Assume that there is a class Foo provided, please create 3 object belong to class Foo with pointer.

All you have to do is declare three object in main function.


Input

none


Output

none
*/

#include <iostream>
using namespace std;


class Foo {
public:
    Foo() {
        cout << "Foo object created!" << endl;
    }
};

int main() {
    
    Foo* obj1 = new Foo();
    Foo* obj2 = new Foo();
    Foo* obj3 = new Foo();

    
    delete obj1;
    delete obj2;
    delete obj3;

    return 0;
}
