#pragma once
#include <iostream>
#include <cstdlib> 
#include <cstdio>
#include <cmath> 
#include <conio.h>
#include <string> 
#include <windows.h>
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Drawing::Drawing2D;
class Line
{
protected:
	double xr, xl, yr, yl;
public:
	Line(int _xl = 0, int _yl = 0, int _xr = 0, int _yr = 0) {
		xr = (double)(_xr);
		xl = (double)(_xl);
		yr = (double)(_yr);
		yl = (double)(_yl);
	}
	~Line() {};
	void move(int dx) {
		xr += dx;
		xl += dx;
	}
	void show(Graphics^g) {
		Pen^pen = gcnew Pen(Color::Black, 3);
		PointF p_one = PointF(xl, yl);
		PointF p_two = PointF(xr, yr);
		g->DrawLine(pen, p_one, p_two);
	}
	void move(int dx, int h) {
		double  X = xr - xl;
		double Y = yr - yl;
		double a = (double)(2 * h) / (double)((sqrt(4 * h*h + dx * dx)));
		double b = (double)(dx) / (double)((sqrt(4 * h*h + dx * dx)));
		double newX = a*X - b*Y;
		double newY = b*X + a*Y;
		xl += dx;
		yl += 0;
		xr += newX - X + dx;
		yr += newY - Y;
	}
	double get_xl() { return xl; }
	double get_xr() { return xr; }
	double get_yl() { return yl; }
	double get_yr() { return yr; }
	void set_xl(double _xl) {
		xl = _xl;
	}
	void set_xr(double _xr) {
		xr = _xr;
	}
	void set_yl(double _yl) {
		yl = _yl;
	}
	void set_yr(double _yr) {
		yr = _yr;
	}
};

