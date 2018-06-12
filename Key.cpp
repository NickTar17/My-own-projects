// Key.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "iostream"
#include <string>
#include <cstdlib>
#include <ctime>

#include "MyList.h"
#include "Class.h"
#include "Function.h"

using namespace std;


int main()
{
	
	Player<string> firstPlayer;
	Player<string> secondPlayer;

	List<int> lstFirst;
	List<int> lstSecond;

	int sumFirst = 1;
	int sumSecond = 0;

	string answer;

	cout << "Do you want to play? " << endl;
	cin >> answer;

	while (answer  != "N") {

		cout << "First player get: " << endl;
		int first = firstPlayer.resault();

		cout << "Second player get: " << endl;
		int second = secondPlayer.resault();


		lstFirst.push_back(first);
		lstSecond.push_back(second);

		

		cout << "Do you want to play? " << endl;
		cin >> answer;
	}
	for (int i = 0; i < lstFirst.GetSize(); i++) {

		sumFirst = lstFirst.showElementByIndex(i) + sumFirst;
		sumSecond = lstSecond.showElementByIndex(i) + sumSecond;
	}

	if (sumFirst > sumSecond) {
		cout << "First player win" << endl;
	}

	if (sumFirst == sumSecond) {
		cout << "=== draw ====" << endl;
	}

	if (sumFirst < sumSecond) {
		cout << "Second player win" << endl;
	}

    return 0;
}

