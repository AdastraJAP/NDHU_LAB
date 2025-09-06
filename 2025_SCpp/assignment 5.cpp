/*Lab of programming question 05
Description

Assume that there is a class Frogprovided.

Class Frog has public function moveLeft(), moveRight(), moveUp() and moveDown(), these function works as its function name, move one step to the left, right, up or down.

Class Frog also has public function getCurrentPositionX(), getCurrentPositionY(), these function will return an int value represent the frog position.

Your job is control the frog and help it reach to the destnation.

Please complete main function to make this happen.


Input

Input will be 4 integer, first represent the x position of frog, and second represent the y position of frog, thired represent the x position of destnation and final represent y position of destnation.


Output

you don't have to output anything.


Sample Input 1 

1 1 5 5
Sample Output 1

none
*/



#include <iostream>
using namespace std;

class Frog {
public:
    int posX, posY;

    Frog(int X, int Y) : posX(X), posY(Y) {}

    int getCurrentPositionX() { return posX; }
    int getCurrentPositionY() { return posY; }

    void moveLeft()  { posX--; }
    void moveRight() { posX++; }
    void moveUp()    { posY++; }
    void moveDown()  { posY--; }
};

int main (){
    int X, Y, dX, dY;
    cin >> X >> Y >> dX >> dY;

    Frog frog(X, Y);

    
    while (frog.getCurrentPositionX() != dX) {
        if (frog.getCurrentPositionX() < dX)
            frog.moveRight();
        else
            frog.moveLeft();
    }

    while (frog.getCurrentPositionY() != dY) {
        if (frog.getCurrentPositionY() < dY)
            frog.moveUp();
        else
            frog.moveDown();
    }

    return 0;
}
