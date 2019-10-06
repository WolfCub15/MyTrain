#pragma once
#include <iostream>
#include <cstdlib> 
#include <cstdio>
#include <cmath> 
#include <conio.h>
#include <string> 
#include <windows.h>
#include "Vagon.h"
#include "MyEngine.h"
#include "MyTube.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Drawing::Drawing2D;
class Puff_Puff
{
private:
	Vagon vag;
	MyEngine engine;
	MyTube tube;
public:
	Puff_Puff(int x = 0, int y = 0, int h = 0) {
		vag = Vagon(x, y, h);
		engine = MyEngine(x + h, y + 10 * h, h);
		tube = MyTube(x + 10 * h, y - 4 * h, h);
	}
	Puff_Puff(const Puff_Puff &tmp) {
		vag = tmp.vag;
		engine = tmp.engine;
		tube = tmp.tube;
	}
	~Puff_Puff() {};
	Puff_Puff &operator=(const Puff_Puff &tmp) {
		vag = tmp.vag;
		engine = tmp.engine;
		tube = tmp.tube;
		return *this;
	}
	void show(Graphics^g) {
		vag.show(g);
		tube.show(g);
		engine.show(g);
	}
	void move(int dx) {
		vag.move(dx);
		tube.move(dx);
		engine.move(dx);
	}
};

