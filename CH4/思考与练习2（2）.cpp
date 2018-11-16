//标头.h
#include<iostream>
#include<cstring>
using namespace std;
#include"标头.h"
int main()
{
	Circle c1(3.5), c2;
	cout << "area od c1 = " << c1.Area() << ", circleference of c1 = " << c1.Circleference() << endl;
	cout << "area of c2 = " << c2.Area() << ", circlederence of c2 = " << c2.Circleference() << endl; getchar();
	return 0;
}
//圆类的实现.cpp
#include"标头.h"
double Circle::Area()
{
  PI = 3.14;
	return PI * Radius*Radius;
}
double Circle::Circleference()
{
	return 2 * PI*Radius;
}

//main.cpp
#include<iostream>
#include<cstring>
using namespace std;
#include"标头.h"
int main()
{
	Circle c1(3.5), c2;
	cout << "area od c1 = " << c1.Area() << ", circleference of c1 = " << c1.Circleference() << endl;
	cout << "area of c2 = " << c2.Area() << ", circlederence of c2 = " << c2.Circleference() << endl; getchar();
	return 0;
}
