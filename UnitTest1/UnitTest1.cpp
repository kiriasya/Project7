#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\kiri\Desktop\����� 6\������������\���� �������\Project7\Project7\arith.cpp"
#include "C:\Users\kiri\Desktop\����� 6\������������\���� �������\Project7\Project7\mod_7.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(arith(34), true);
			Assert::AreEqual(arith(159), true);
			Assert::AreEqual(arith(125), false);
			Assert::AreEqual(arith(0), false);
			Assert::AreEqual(arith(777), true);
		Assert::AreEqual(arith(1444), false);
			Assert::AreEqual(arith(123), true);
			Assert::AreEqual(arith(343), false);

		}
		TEST_METHOD(TestMethod2) {
			Assert::AreEqual(mod_7(34), true);
			Assert::AreEqual(mod_7(1), false);
			Assert::AreEqual(mod_7(882), false);
		}
	};
}
