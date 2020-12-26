#include "pch.h"
#include "CppUnitTest.h"

#include "../Lab_13.1/var.h"
#include "../Lab_13.1/var.cpp"

#include "../Lab_13.1/dod.h"
#include "../Lab_13.1/dod.cpp"

using namespace nsDod;
using namespace nsVar;


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab131
{
	TEST_CLASS(UnitTestLab131)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			x = 4;
			n = 4;
			a = 3;

			dod();
			Assert::AreEqual(a, 9.0);
		}
	};
}
