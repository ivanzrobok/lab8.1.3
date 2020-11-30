#include "pch.h"
#include "CppUnitTest.h"
#include "../lab8.1.3/lab8.1.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Lab813Test
{
	TEST_CLASS(Lab813Test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char str2[100] = "kdsfjggggas";

			bool t;
			t = find(str2);
			Assert::AreEqual(t, true);
		}
	};
}
