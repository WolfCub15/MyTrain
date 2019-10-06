#pragma once
#include <iostream>
#include <cstdlib> 
#include <cstdio>
#include <cmath> 
#include <conio.h>
#include <string> 
#include <windows.h>
#include "Chain.h"
#include "Puff_Puff.h"
#include "Vagon.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Drawing::Drawing2D;
class Train {
private:
	Puff_Puff MainVag;
	Vagon *vags;
	Chain *chain;
	int n;
public:
	Train(int x = 0, int y = 0, int h = 1, int _n = 1) {
		MainVag = Puff_Puff(x, y, h);
		vags = new Vagon[_n];
		for (int i = 0; i< _n; i++) {
			vags[i] = Vagon(x -16*h- i * 16*h, y, h);
		}
		chain = new Chain[_n];
		for (int i = 0; i <_n; i++) {
			chain[i] = Chain(x -2 * h - 16 * i*h, y + 10 * h, h);
		}
		this->n = _n;
	}
	~Train() {
		delete[]vags;
		delete[]chain;
	};
	Train(const Train &tmp) {
		for (int i = 0; i < this->n; i++) {
			vags[i] = tmp.vags[i];
		}
		MainVag = tmp.MainVag;
		for (int i = 0; i < this->n; i++) {
			chain[i] = tmp.chain[i];
		}
		n = tmp.n;
	}
	Train &operator=(const Train &tmp) {
		MainVag = tmp.MainVag;
		if (n != tmp.n) {
			if (n != 0) {
				delete[]vags;
				delete[]chain;
			}
			n = tmp.n;
			vags = new Vagon[n];
			chain = new Chain[n];
		}
		for (int i = 0; i < this->n; i++) {
			vags[i] = tmp.vags[i];
			chain[i] = tmp.chain[i];
		}
		return *this;
	}
	void show(Graphics^g) {
		for (int i = 0; i < this->n; i++) {
			vags[i].show(g);
		}
		MainVag.show(g);
		for (int i = 0; i < this->n; i++) {
			chain[i].show(g);
		}
	}
	void move(int dx) {
		for (int i = 0; i < this->n; i++) {
			vags[i].move(dx);
		}
		MainVag.move(dx);
		for (int i = 0; i < this->n; i++) {
			chain[i].move(dx);
		}
	}
};

