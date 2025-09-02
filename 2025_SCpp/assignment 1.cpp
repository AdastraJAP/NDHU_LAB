/*
Lab of programming question 01
Description

Design and implement a class Point represent a point on Cartesian coordinate system.

A Point class should content axes X and Y in floating points format.

Others can access the X and Y directly.

Write a main function to test your class Point.


Input

Input start with an integer N represent the number of points.

Followed by N lines, each line represent a point, first number is X and second number is Y.


Output

Display all point as the order they input by the format "(X, Y)"

Each point occupy a line.


Sample Input 1

5
1.23 2.3
3.45 -6
5.8 -1.5
-3 10
100 0.01
Sample Output 1

(1.23, 2.3)
(3.45, -6)
(5.8, -1.5)
(-3, 10)
(100, 0.01)
*/

#include<iostream>

using namespace std;


/*
class Point{

public:

double X,Y;


};
int main(){
int N;

cout<<"Enter N: ";
cin>>N;
int originalN=N;
Point P;
while(N--){
    cin>>P.X>>P.Y;
}

  N= originalN;
while(N--){
    cout<<"("<<P.X<<","<<P.Y<<")";
    cout<<endl;
}
    return 0;
}
*/

// Second method with functions to take the points and display them

class Point{
public:
	double X,Y;
	void display() {
		cout<<"("<<X<<","<<Y<<")"<<endl;
	}
};

void takePoints(Point P[],int N) {
	for(int i=0; i<N; i++) {
		cin>>P[i].X>>P[i].Y;
	}
}
void displayPoints(Point P[],int N){
    for (int i=0;i<N;i++){
        P[i].display();
    }
}
int main(){
    int N;
    cout<<"Enter the number of points N: ";
    cin>>N;
    Point P[100];
    takePoints( P,N);
    displayPoints(P,N);
    
    
    return 0;
}