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
class Chain : public Line
{
public:
	Chain(int x = 0, int y = 0, int h = 1) :Line(x + 2 * h, y, x, y) {};
	~Chain() {};
};
