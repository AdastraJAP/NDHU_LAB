/* 

Lab of programming question 03
Description

Assume that there is a class Foo provided, please create 3 object belong to class Foo without pointer.

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
        cout << "Foo object created" << endl;
    }
};

int main() {

    Foo obj1;
    Foo obj2;
    Foo obj3;

    return 0;
}
