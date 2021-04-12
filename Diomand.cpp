#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	n = (n + 1) / 2;
	int upSpace = 2 * (n - 1); // space between up side of Diomand
	int space = n;
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < space -1; j++)
		{
			cout << " "; // space for creat up side main Diomand
		}
		space--;
		for (size_t k = 0; k < 2 * i + 1; k++)
		{
			cout << "*"; // * for for creat up side main Diomand
		}
		for (size_t i = 0; i < upSpace; i++)
		{
			cout << " "; // space for creat second diomand
		}
		upSpace = upSpace - 2;
		for (size_t k = 0; k < 2 * i + 1; k++)
		{
			cout << "*"; // exact same code for creat the main diomand
		}
		cout << endl;
	}
	int downSpace = 2; // it's the space for creating second diomand
	space = 2; // becuse the first line of down side of diomand has 2 space
	int numOfStars = 2 * (n - 1) - 1; // it's the number of * for each line of diomand
	for (size_t i = 0; i < n; i++)
	{

		for (size_t j = 0; j < space -1 ; j++)
		{
			cout << " "; // space for down side of main diomand
		}
		space++;
		if (numOfStars > 0) {// error handling (numOfStars goes to -1 and creat infinity loop)
			for (size_t k = 0; k < numOfStars; k++)
			{
				cout << "*"; // * for down side of main diomand
			}
		}
		for (size_t i = 0; i < downSpace; i++)
		{
			cout << " "; // space for second diomand
		}
		downSpace = downSpace + 2;
		if (numOfStars > 0) { // error handling (numOfStars goes to -1 and creat infinity loop)
			for (size_t k = 0; k < numOfStars; k++)
			{
				cout << "*"; // the same exact code as main option
			}
			numOfStars = numOfStars - 2;
			if (numOfStars < 0) {
				return 0;
			}
			cout << endl;
		}
	}
}