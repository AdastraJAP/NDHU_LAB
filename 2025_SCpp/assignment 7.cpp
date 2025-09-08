/*
Lab of programming question 07
Description

Assume that class Triangle is provided and there are 2 contructors, one with 3 parameters represent the lenght of three side and another on with 6 parameters represent thecoordinates of the three vertices in a 2D plane.

Please write a program to read the information of triangles and display their area in ascending order.


Input

The input consists of multiple lines.

Each line starts with an integer representing the type of constructor you should use.

If the type is 1, than you should ues the constructor with 3 parameters.

If the type is 2, than you should use the constructor with 6 parameters


Output

Display the area of triangles in ascending order.

Each area occupy a line.


Sample Input 1 

1 3 4 5
1 3 3 3
2 0 0 1 1 0 1
2 0 10 10 0 0 0
Sample Output 1

0.5
3.89711
6
50


*/
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    double areas[100];  
    int count = 0;     
    int type;
    
    
    while (cin >> type) {
        if (type == 1) {
           
            double a, b, c;
            cin >> a >> b >> c;
            Triangle t(a, b, c);
            areas[count++] = t.area(); 
        }
        else if (type == 2) {
            
            double x1, y1, x2, y2, x3, y3;
            cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
            Triangle t(x1, y1, x2, y2, x3, y3);  
            areas[count++] = t.area();  
        }
    }

   
    sort(areas, areas + count);


    for (int i = 0; i < count; i++) {
        cout << areas[i] << endl;
    }
    
    return 0;
}