#pragma once
#include <iostream>
#include <cstdlib> 
#include <cstdio>
#include <cmath> 
#include <conio.h>
#include <string> 
#include <windows.h>
#include "MyRectangle.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Drawing::Drawing2D;
class MyWheel :public MyRectangle {
public:
	MyWheel(int _x = 0, int _y = 0, int _h = 1) :MyRectangle(_x, _y, 4 * _h, 4 * _h) {};
	void show(Graphics^g) {
		SolidBrush^ brush = gcnew SolidBrush(Color::Gray);
		g->FillEllipse(brush, x, y, a, b);
		Pen^ pen = gcnew Pen(Color::Black, 3);
		g->DrawEllipse(pen, x, y, a, b);
	}
	void move(int dx) {
		x += dx;
	}
};