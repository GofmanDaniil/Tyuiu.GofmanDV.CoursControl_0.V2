// Tyuiu.GofmanDV.Control_0.Task2.V2.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "cmath"
#include "math.h"
#include "../../Tyuiu.CoursControl_0/Tyuiu.CoursControl_0.cpp"

// TODO: This is an example of a library function
class Service : public ISprint0Task8V2
{
	int j = 2;
	virtual float Rezultat(int x, int y, int z) override
	{
		return sqrt((x + y - z) / (pow(x,j) + 2));
	}

};
