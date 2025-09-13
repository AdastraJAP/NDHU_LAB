/*

Lab of programming question 10
Description

In Taiwan, car license plates have 2 parts, the alphabets part and the digits part. For example, my license plate is "ATK-0832", "ATK" is the alphabets part, "0832" is the digits part.

In Chinese, the pronunciation of digit "4" is close to "death". Thus, digit "4" may make some Taiwanese uncomfortable.

Please write a program to read the digits part of a car license plate and check the unlucky digit "4" exists or not. Your design should in object-oriented way.


Input

A string with exact 4 digits


Output

print "Yes" if 4 exists, "No" if not.

Sample Input 1

1235
Sample Output 1

No

*/
#include <iostream>
#include <string>
using namespace std;

class LicensePlate {
private:
    string digits;
public:
    
    LicensePlate(string d) : digits(d) {}


    bool hasUnluckyDigit() {
        for (char c : digits) {
            if (c == '4') {
                return true;
            }
        }
        return false;
    }
};

int main() {
    string digits;
    cin >> digits;  
    LicensePlate plate(digits);

    
    cout << (plate.hasUnluckyDigit() ? "Yes" : "No") << endl;

    return 0;
}
