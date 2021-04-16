#include "pch.h"
#include "CppUnitTest.h"
#include "D:\Student\oop5.1G\oop5.1G\Pair.cpp"
#include "D:\Student\oop5.1G\oop5.1G\Long.cpp"
#include "D:\Student\oop5.1G\oop5.1G\MyException.cpp"
#include "D:\Student\oop5.1G\oop5.1G\Object.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest51G
{
	TEST_CLASS(UnitTest51G)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Long a(1,1);
			bool t = a.Init(1, 1);
			Assert::AreEqual(t, true);
		}
	};
}
