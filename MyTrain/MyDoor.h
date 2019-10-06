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
class MyDoor :public MyRectangle {
public:
	MyDoor(int _x = 0, int _y = 0, int _h = 1) :MyRectangle(_x, _y, 3 * _h, 7 * _h) {};
	void show(Graphics^g) {
		SolidBrush^ brush = gcnew SolidBrush(Color::Peru);
		g->FillRectangle(brush, x, y, a, b);
		Pen^ pen = gcnew Pen(Color::Black, 3);
		g->DrawRectangle(pen, x, y, a, b);
	}
	void move(int dx) {
		x += dx;
	}
};

