#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Гіук\OneDrive\Документи\source\repos\Lab 5.4\Lab 5.4\lab 5.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
		
			{
				double K = 10.0; 
				double N = 5.0;  
				double expected = 0.189985;

				
				double test1 = S0(K, N);
				double test2 = S1(K, N, K);
				double test3 = S2(K, N, N);
				double test4 = S3(K, N, K, 1);
				double test5 = S4(K, N, N, 1);

				
				Assert::AreEqual(test1, expected, 0.00001);
				Assert::AreEqual(test2, expected, 0.00001);
				Assert::AreEqual(test3, expected, 0.00001);
				Assert::AreEqual(test4, expected, 0.00001);
				Assert::AreEqual(test5, expected, 0.00001);
			}
		};
	}
            
        
          
	;
