#include "pch.h"
#include "CppUnitTest.h"
#include "../Laboratorna6.2.rec/Laboratorna6.2.rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest62
{
	TEST_CLASS(UnitTest62)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int SIZE = 5;
			int arr[SIZE] = { 2, 4, 6, 8, 10 };
			Assert::AreEqual(-1, findMinOddIndexRec(arr, 0, SIZE, MAX_INT, -1));
		}
	};
}
