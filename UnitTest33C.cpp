#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP Lab3.3C/LongLong.h"
#include "../OOP Lab3.3C/LongLong.cpp"
#include "../OOP Lab3.3C/Object.h"
#include "../OOP Lab3.3C/Object.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest33C
{
	TEST_CLASS(UnitTest33C)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			LongLong A(8, 3), B(8, 3);
			Assert::AreEqual(A == B, true);
		}
	};
}
