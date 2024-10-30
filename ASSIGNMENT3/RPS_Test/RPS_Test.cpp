#include "pch.h"
#include "CppUnitTest.h"
#include <string.h>

extern "C" char* rps(char* player1Choice, char* player2Choice);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RPSTest
{
	TEST_CLASS(RPSTest)
	{
	public:
		
		TEST_METHOD(INVALID_INPUT_IS_ENTERED)
		{
			Assert::AreEqual(0, strcmp("Invalid", rps("rock", "xx")));
		}

		TEST_METHOD(ROCK_DRAW) {
			Assert::AreEqual(0, strcmp("Draw", rps("Rock", "Rock")));
		}

		TEST_METHOD(PAPER_DRAW) {
			Assert::AreEqual(0, strcmp("Draw", rps("Paper", "Paper")));
		}

		TEST_METHOD(SCISSORS_DRAW) {
			Assert::AreEqual(0, strcmp("Draw", rps("Scissors", "Scissors")));
		}

		TEST_METHOD(ROCK_SCISSORS) {
			Assert::AreEqual(0, strcmp("Player1", rps("Rock", "Scissors")));
		}

		TEST_METHOD(SCISSORS_PAPER) {
			Assert::AreEqual(0, strcmp("Player1", rps("Scissors", "Paper")));
		}

		TEST_METHOD(PAPER_ROCK) {
			Assert::AreEqual(0, strcmp("Player1", rps("Paper", "Rock")));
		}

		TEST_METHOD(ROCK_PAPER) {
			Assert::AreEqual(0, strcmp("Player2", rps("Rock", "Paper")));
		}

		TEST_METHOD(PAPER_SCISSORS) {
			Assert::AreEqual(0, strcmp("Player2", rps("Paper", "Scissors")));
		}

		TEST_METHOD(SCISSORS_ROCK) {
			Assert::AreEqual(0, strcmp("Player2", rps("Scissors", "Rock")));
		}
	};
}
