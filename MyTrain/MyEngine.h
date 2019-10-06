#pragma once
#include <iostream>
#include <cstdlib> 
#include <cstdio>
#include <cmath> 
#include <conio.h>
#include <string> 
#include <windows.h>
#include "Line.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Drawing::Drawing2D;
class MyEngine
{
private:
	Line leftline;
	Line midline;
	Line rightline;
	int _h;
public:
	MyEngine(int x = 0, int y = 0, int h = 1) {
		leftline = Line(x + 2 * h, y + 2 * h, x + 2 * h, y + h);
		midline = Line(x + 2 * h, y + h, x + 10 * h, y + h);
		rightline = Line(x + 10 * h, y + 2 * h, x + 10 * h, y + h);
		this->_h = h;
	}
	~MyEngine() {};
	MyEngine(const MyEngine & tmp) {
		leftline = tmp.leftline;
		midline = tmp.midline;
		rightline = tmp.rightline;
		_h = tmp._h;
	}
	MyEngine & operator=(const MyEngine & tmp) {
		leftline = tmp.leftline;
		midline = tmp.midline;
		rightline = tmp.rightline;
		_h = tmp._h;
		return *this;
	}
	void show(Graphics^g) {
		leftline.show(g);
		rightline.show(g);
		midline.show(g);
	}
	void move(int dx) {
		leftline.move(dx, this->_h);
		rightline.move(dx, this->_h);
		midline.set_xl(leftline.get_xr());
		midline.set_yl(leftline.get_yr());
		midline.set_xr(rightline.get_xr());
		midline.set_yr(rightline.get_yr());
	}
};

