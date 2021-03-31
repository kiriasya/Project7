#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\kiri\Desktop\учеба 6\тестирование\ввод массива\Project7\Project7\arith.cpp"
#include "C:\Users\kiri\Desktop\учеба 6\тестирование\ввод массива\Project7\Project7\mod_7.cpp"
#include "C:\Users\kiri\Desktop\учеба 6\тестирование\ввод массива\Project7\Project7\checkBox.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace IntegrationTest
{
	TEST_CLASS(IntegrationTest)
	{
	public:
		
		TEST_METHOD(CheckMainCase)
		{
			int i1 = 77;
			int i2 = 159;
			bool res1 = arith(i1) && mod_7(i1);
			bool res2 = arith(i2) && mod_7(i2);
			Assert::AreEqual(res1, true);
			Assert::AreEqual(res2, false);

		}
		TEST_METHOD(CheckSizeCase)
		{
			int i1 = 77;
			int i2 = 15943543;
			int i3 = -324;
			Assert::AreEqual(checkbox(i1), 0);
			Assert::AreEqual(checkbox(i2), 2);
			Assert::AreEqual(checkbox(i3), 4);

		}
	};
}
