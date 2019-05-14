#include <iostream>
#include "operators.h"
using namespace std;

int main()
{
        point2D<int> p1(2,3);
        point2D<int> p2(4,5);
        point3D<double> pt1(1.2,2,3);
        point3D<double> pt2(1,2.4);
        point2D<int> p3(1,4);
        point3D<double> pt3(1,1,1);

        p1 = p1 + p2;
        cout << "p1=p1+p2 -> p1(" << p1.getx() << ", " << p1.gety() << ")" << endl;

        p3 = p2 - p3;
        cout << "p3=p2-p3 -> p3(" << p3.getx() << ", " << p3.gety() << ")" << endl;

        p3 -= p2;
        cout << "p3-=p2 -> p3(" << p3.getx() << ", " << p3.gety() << ")" << endl;


        pt1 = pt1 + pt2;
        cout << "pt1=pt1+pt2 -> pt1(" << pt1.getx() << ", " << pt1.gety() << ", " << pt1.getz() << ")" << endl;

        p1.setx(1);
        p1.sety(1);
        p1 += p2;
        cout << "p1+=p2 -> p1(" << p1.getx() << ", " << p1.gety() << ")" << endl;

        pt1.setx(0);
        pt1.sety(0.5);
        pt1.setz(1);
        pt1 += pt2;
        cout << "pt1+=pt2 -> pt1(" << pt1.getx() << ", " << pt1.gety() << ", " << pt1.getz() << ")" << endl;

        pt3 = pt2 - pt3;
        cout << "pt3=pt2-pt3 -> pt3(" << pt3.getx() << ", " << pt3.gety() << ", " << pt3.getz() << ")" << endl;

        pt3 -= pt2;
        cout << "pt3-=pt2 -> pt3(" << pt3.getx() << ", " << pt3.gety() << ", " << pt3.getz() << ")" << endl;

        return 0;
}
