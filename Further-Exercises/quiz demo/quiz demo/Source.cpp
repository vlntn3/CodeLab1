#include <iostream>
using namespace std;

int main()
{
	int PorE;

	do
	{
		int point = 0, correct = 0, wrong = 0;
		cout << "\nWelcome to the Quiz!\n" << endl;
		cout << "Instructions: Read the questions and enter the LETTER of your answer, not the answer itself." << endl;

		char q1m1 = 'C', q1m2 = 'c', q1mA;
		cout << "\nTopic: Math\n" << endl;
		cout << "Q1 - How many sides does a octagon have?" << endl;
		cout << "A. 65\nB. 7\nC. 8\nD. 9" << endl;
		cout << "Answer: ";
		cin >> q1mA;

		if (q1mA == q1m1 || q1mA == q1m2)
		{
			point++, correct++;
			cout << "Correct Answer!" << endl;
			cout << "Points: " << point << endl;
			cout << "Record: " << correct << " - " << wrong << endl;
		}
		else
		{
			wrong++;
			cout << "Wrong Answer!" << endl;
			cout << "Points: " << point << endl;
			cout << "Record: " << correct << " - " << wrong << endl;
		}

		char q2m1 = 'a', q2m2 = 'A', q2mA;
		cout << "\nQ2 - If a square has a length of 5cm, calculate its area." << endl;
		cout << "A. 25\nB. 20\nC. 79\nD. 50" << endl;
		cout << "Answer: ";
		cin >> q2mA;

		if (q2mA == q2m1 || q2mA == q2m2)
		{
			point++, correct++;
			cout << "Correct Answer!" << endl;
			cout << "Points: " << point << endl;
			cout << "Record: " << correct << " - " << wrong << endl;
		}
		else
		{
			wrong++;
			cout << "Wrong Answer!" << endl;
			cout << "Points: " << point << endl;
			cout << "Record: " << correct << " - " << wrong << endl;
		}

		char q3m1 = 'd', q3m2 = 'D', q3mA;
		cout << "\nQ3 - What is the 10% of 2000?" << endl;
		cout << "A. 10\nB. 100\nC. 523\nD. 200" << endl;
		cout << "Answer: ";
		cin >> q3mA;

		if (q3mA == q3m1 || q3mA == q3m2)
		{
			point++, correct++;
			cout << "Correct Answer!" << endl;
			cout << "Points: " << point << endl;
			cout << "Record: " << correct << " - " << wrong << endl;
		}
		else
		{
			wrong++;
			cout << "Wrong Answer!" << endl;
			cout << "Points: " << point << endl;
			cout << "Record: " << correct << " - " << wrong << endl;
		}

		char q4m1 = 'c', q4m2 = 'C', q4mA;
		cout << "\nQ4 - What is the square root of 169?" << endl;
		cout << "A. 14\nB. 36\nC. 13\nD. 12" << endl;
		cout << "Answer: ";
		cin >> q4mA;

		if (q4mA == q4m1 || q4mA == q4m2)
		{
			point++, correct++;
			cout << "Correct Answer!" << endl;
			cout << "Points: " << point << endl;
			cout << "Record: " << correct << " - " << wrong << endl;
		}
		else
		{
			wrong++;
			cout << "Wrong Answer!" << endl;
			cout << "Points: " << point << endl;
			cout << "Record: " << correct << " - " << wrong << endl;
		}

		cout << "\nTopic: Animals" << endl;

		char q5a1 = 'd', q5a2 = 'D', q5aA;
		cout << "\nQ5 - What is the fastest animal(on land)?" << endl;
		cout << "A. Snail\nB. Deer\nC. Ostrich\nD. Cheetah" << endl;
		cout << "Answer: ";
		cin >> q5aA;

		if (q5aA == q5a1 || q5aA == q5a2)
		{
			point++, correct++;
			cout << "Correct Answer!" << endl;
			cout << "Points: " << point << endl;
			cout << "Record: " << correct << " - " << wrong << endl;
		}
		else
		{
			wrong++;
			cout << "Wrong Answer!" << endl;
			cout << "Points: " << point << endl;
			cout << "Record: " << correct << " - " << wrong << endl;
		}

		char q6a1 = 'b', q6a2 = 'B', q6aA;
		cout << "\nQ6 - Which animal does NOT eat grass?" << endl;
		cout << "A. Cow\nB. Lion\nC. Horse\nD. Rabbit" << endl;
		cout << "Answer: ";
		cin >> q6aA;

		if (q6aA == q6a1 || q6aA == q6a2)
		{
			point++, correct++;
			cout << "Correct Answer!" << endl;
			cout << "Points: " << point << endl;
			cout << "Record: " << correct << " - " << wrong << endl;
		}
		else
		{
			wrong++;
			cout << "Wrong Answer!" << endl;
			cout << "Points: " << point << endl;
			cout << "Record: " << correct << " - " << wrong << endl;
		}

		char q7a1 = 'b', q7a2 = 'B', q7aA;
		cout << "\nQ7 - What color is a polar bear's skin?" << endl;
		cout << "A. Pink\nB. Black\nC. White\nD. Yellow" << endl;
		cout << "Answer: ";
		cin >> q7aA;

		if (q7aA == q7a1 || q7aA == q7a2)
		{
			point++, correct++;
			cout << "Correct Answer!" << endl;
			cout << "Points: " << point << endl;
			cout << "Record: " << correct << " - " << wrong << endl;
		}
		else
		{
			wrong++;
			cout << "Wrong Answer!" << endl;
			cout << "Points: " << point << endl;
			cout << "Record: " << correct << " - " << wrong << endl;
		}

		cout << "\nTopic: Random Questions" << endl;

		char q8r1 = 'a', q8r2 = 'A', q8rA;
		cout << "\nQ8 - Which planet is the closest to Earth?" << endl;
		cout << "A. Mercury\nB. Mars\nC. Venus\nD. Pluto" << endl;
		cout << "Answer: ";
		cin >> q8rA;

		if (q8rA == q8r1 || q8rA == q8r2)
		{
			point++, correct++;
			cout << "Correct Answer!" << endl;
			cout << "Points: " << point << endl;
			cout << "Record: " << correct << " - " << wrong << endl;
		}
		else
		{
			wrong++;
			cout << "Wrong Answer!" << endl;
			cout << "Points: " << point << endl;
			cout << "Record: " << correct << " - " << wrong << endl;
		}

		char q9r1 = 'd', q9r2 = 'D', q9rA;
		cout << "\nQ9 - What is the name of the toy cowboy in Toy Story?" << endl;
		cout << "A. James\nB. Augustin\nC. Bart\nD. Woody" << endl;
		cout << "Answer: ";
		cin >> q9rA;

		if (q9rA == q9r1 || q9rA == q9r2)
		{
			point++, correct++;
			cout << "Correct Answer!" << endl;
			cout << "Points: " << point << endl;
			cout << "Record: " << correct << " - " << wrong << endl;
		}
		else
		{
			wrong++;
			cout << "Wrong Answer!" << endl;
			cout << "Points: " << point << endl;
			cout << "Record: " << correct << " - " << wrong << endl;
		}

		char q10r1 = 'a', q10r2 = 'A', q10rA;
		cout << "\nQ10 - Who lives in a pineapple under the sea?" << endl;
		cout << "A. SpongeBob\nB. Patrick\nC. Nemo\nD. Dory" << endl;
		cout << "Answer: ";
		cin >> q10rA;

		if (q10rA == q10r1 || q10rA == q10r2)
		{
			point++, correct++;
			cout << "Correct Answer!" << endl;
			cout << "Points: " << point << endl;
			cout << "Record: " << correct << " - " << wrong << endl;
		}
		else
		{
			wrong++;
			cout << "Wrong Answer!" << endl;
			cout << "Points: " << point << endl;
			cout << "Record: " << correct << " - " << wrong << endl;
		}

		cout << "\nCongratulations! You got " << correct << " / 10" << endl;

			cout << "Do you want to play again or exit?\n1: Play Again\n2: Exit Game" << endl;
			cin >> PorE;
		} 
		while (PorE == 1);

		return 0;
}