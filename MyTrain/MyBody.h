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
class MyBody :public MyRectangle {
public:
	MyBody(int _x = 0, int _y = 0, int _h = 1) :MyRectangle(_x, _y, 14 * _h, 10 * _h) {};
	void show(Graphics^g) {
		HatchBrush^ brush = gcnew HatchBrush(HatchStyle::Trellis, Color::Gray, Color::Red);
		g->FillRectangle(brush, x, y, a, b);
		Pen^ pen = gcnew Pen(Color::Black, 3);
		g->DrawRectangle(pen, x, y, a, b);
	}
	void move(int dx) {
		x += dx;
	}
};

