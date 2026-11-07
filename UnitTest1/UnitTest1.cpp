#include "pch.h"
#include "CppUnitTest.h"
#include "../lab3_1/Pair.h"
#include "../lab3_1/Rational.h"
#include "../lab3_1/Pair.cpp"
#include "../lab3_1/Rational.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Pair p;
			Assert::AreEqual(0, p.getFirst());
			Assert::AreEqual(0, p.getSecond());
		}
	};
}
