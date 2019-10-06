#pragma once
#include <iostream>
#include <cstdlib> 
#include <cstdio>
#include <cmath> 
#include <conio.h>
#include <string> 
#include <windows.h>
#include "MyDoor.h"
#include "MyWheel.h"
#include "MyBody.h"
#include "MyWindow.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Drawing::Drawing2D;
class Vagon {
private:
	MyBody body;
	MyDoor door;
	MyWheel wheel1;
	MyWheel wheel2;
	MyWindow *wind;
public:
	Vagon(int x = 0, int y = 0, int h = 1) {
		body = MyBody(x, y, h);
		door = MyDoor(x, y + 3 * h, h);
		wheel1 = MyWheel(x + 1 * h, y + 10 * h, h);
		wheel2 = MyWheel(x + 9 * h, y + 10 * h, h);
		wind = new MyWindow[3];
		for (int i = 0; i < 3; i++) {
			wind[i] = MyWindow(x + 5 * h + 3 * h*i, y + 3 * h, h);
		}
	}
	Vagon(const Vagon &tmp) {
		body = tmp.body;
		door = tmp.door;
		wheel1 = tmp.wheel1;
		wheel2 = tmp.wheel2;
		for (int i = 0; i < 3; i++) {
			wind[i] = tmp.wind[i];
		}
	}
	~Vagon() {
		delete[]wind;
	};
	Vagon &operator=(const Vagon &tmp) {
		body = tmp.body;
		door = tmp.door;
		wheel1 = tmp.wheel1;
		wheel2 = tmp.wheel2;
		for (int i = 0; i < 3; i++) {
			wind[i] = tmp.wind[i];
		}
		return *this;
	}
	void show(Graphics^g) {
		body.show(g);
		door.show(g);
		wheel1.show(g);
		wheel2.show(g);
		for (int i = 0; i < 3; i++) {
			wind[i].show(g);
		}
	}
	void move(int dx) {
		body.move(dx);
		door.move(dx);
		wheel1.move(dx);
		wheel2.move(dx);
		for (int i = 0; i < 3; i++) {
			wind[i].move(dx);
		}
	}
};

