/*
Lab of programming question 09
Description

Tollway in Taiwan charge 1.2 dollar per KM. If the total distance exceeded 200 KM in one trip then the exceeded part can get 25% discount.

Write a program to calculate the total toll in one trip using object oriented thinking.


Input

An integer represent the distance in KM.


Output

A number round off to the nearest whole number represent the toll.


Sample Input 1 

368
Sample Output 1

391

*/


#include <iostream>
#include <cmath>
using namespace std;

class Charge {
private:
    static constexpr double KM_rate = 1.2;
    static constexpr double limit = 200;
    static constexpr double discount = 0.75;

public:
    int calculate(int distance) const {
        if (distance <= limit) {
            return (int)round(distance * KM_rate);
        } else {
            double charge_1 = limit * KM_rate;
            double charge_2 = (distance - limit) * KM_rate * discount;
            return (int)round(charge_1 + charge_2);
        }
    }
};

int main() {
    int distance;
    cin >> distance;
    Charge bill;
    cout << bill.calculate(distance) << endl;
    return 0;
}
