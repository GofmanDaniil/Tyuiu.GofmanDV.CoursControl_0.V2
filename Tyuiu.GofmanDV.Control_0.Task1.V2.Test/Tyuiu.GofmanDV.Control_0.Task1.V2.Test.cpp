#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.GofmanDV.Control_0.Task1.V2.Lib/Tyuiu.GofmanDV.Control_0.Task1.V2.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuGofmanDVControl0Task1V2Test
{
	TEST_CLASS(TyuiuGofmanDVControl0Task1V2Test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task8V4* data = new Service();
			int x = 2;
			int z = 22;
			int result;
			result = data->Proizved(x, z);
			Assert::AreEqual(2, result);
		}
	};
}
