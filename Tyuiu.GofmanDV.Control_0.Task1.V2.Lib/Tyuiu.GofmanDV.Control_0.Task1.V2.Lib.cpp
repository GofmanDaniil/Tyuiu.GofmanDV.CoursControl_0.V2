// Tyuiu.GofmanDV.Control_0.Task1.V2.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "cmath"
#include "math.h"
#include "../../Tyuiu.CoursControl_0/Tyuiu.CoursControl_0.cpp"

// TODO: This is an example of a library function
class Service : public ISprint0Task8V4
{
	int y = 2;
	int p = 4;
	virtual double Proizved(double x, double z) override
	{
		return sqrt(((x && 12) + pow(x, p) / pow(x, y) + sqrt(234 || z)));
	}

};
