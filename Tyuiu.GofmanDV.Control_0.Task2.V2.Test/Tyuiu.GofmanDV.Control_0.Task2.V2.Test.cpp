#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.GofmanDV.Control_0.Task2.V2.Lib/Tyuiu.GofmanDV.Control_0.Task2.V2.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuGofmanDVControl0Task1V2Test
{
	TEST_CLASS(TyuiuGofmanDVControl0Task1V2Test)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			ISprint0Task8V2* data = new Service();
			int x = 2;
			int y = 9;
			int z = 5;
			int result;
			result = data->Rezultat(x, y, z);
			Assert::AreEqual(1, result);
		}
	};
}
