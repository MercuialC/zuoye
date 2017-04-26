#include "circle.h"//头文件circle
#include<iostream>
using namespace std;


Circle::Circle()
	:pi(3.1415926)//圆周率
{
	_r = 0;
	_s = 0;
}//构造类Circle的函数
void Circle::input()
{
	cout << "请输入圆的半径";
	cin >> _r;
}//input函数
void Circle::output()
{
	_s = _r*_r*pi;
	cout << "所求圆的面积为：";
	cout << _s << endl;
}//output函数
