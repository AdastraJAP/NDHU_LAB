/*
Lab of programming question 06
Description

Design a class Triangle to represent a triangle. The class should provide two constructors:

One constructor should accept the three side lengths to create a triangle.

The other constructor should accept the coordinates of the three vertices in a 2D plane to construct the triangle.

Please complete the template provided.


*/
#include<iostream>
#include<cmath>
using namespace std;

class Triangle {
    public:
	double SideA,SideB,SideC;

	Triangle(double A,double B,double C): SideA(A),SideB(B),SideC(C) {};
	Triangle(double x1,double y1,double x2,double y2,double x3,double y3) {

		SideA=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
		SideB=sqrt(pow(x3-x2,2)+pow(y3-y2,2));
		SideC=sqrt(pow(x3-x1,2)+pow(y3-y1,2));
	}
	double area() {
		double s=(SideA + SideB+ SideC) / 2;
		double area= sqrt(s * (s - SideA) * (s - SideB) * (s - SideC));
		return area;
	}
};

int main() {
	int type;
	cin>>type;
	if(type==1) {
		double a,b,c;
		cin>>a>>b>>c;
		Triangle t(a,b,c);
		cout<<t.area()<<endl;
	}

else if(type==2) {
	double x1, x2, x3, y1, y2, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	Triangle t(x1, y1, x2, y2, x3, y3);
	cout << t.area() << endl;
}
  return 0;
}

