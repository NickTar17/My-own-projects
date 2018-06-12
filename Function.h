#pragma once
#include <iostream>
#include "Class.h"


using namespace std;

template<typename T>
Player<T>::Player()
{

	int count = 0;

}

template<typename T>
Player<T>::~Player()
{
}

template<typename T>
T Player<T>::getName()
{
	return this->name;
}

template<typename T>
int Player<T>::getCount()
{
	return this->count;
}

template<typename T>
void Player<T>::decCount(int count)
{
	this->count = this->count + count;
}


void pictures(int number)
{

	switch (number)
	{
	case 1:
		cout << "===========" << endl;
		cout << "|         |" << endl;
		cout << "|         |" << endl;
		cout << "|    *    |" << endl;
		cout << "|         |" << endl;
		cout << "|         |" << endl;
		cout << "===========" << endl;
		break;
	case 2:
		cout << "===========" << endl;
		cout << "|         |" << endl;
		cout << "|    *    |" << endl;
		cout << "|         |" << endl;
		cout << "|    *    |" << endl;
		cout << "|         |" << endl;
		cout << "===========" << endl;
		break;
	case 3:
		cout << "===========" << endl;
		cout << "|         |" << endl;
		cout << "|  *      |" << endl;
		cout << "|    *    |" << endl;
		cout << "|      *  |" << endl;
		cout << "|         |" << endl;
		cout << "===========" << endl;
		break;
	case 4:
		cout << "===========" << endl;
		cout << "|         |" << endl;
		cout << "|  *   *  |" << endl;
		cout << "|         |" << endl;
		cout << "|  *   *  |" << endl;
		cout << "|         |" << endl;
		cout << "===========" << endl;
		break;
	case 5:
		cout << "===========" << endl;
		cout << "|         |" << endl;
		cout << "|  *   *  |" << endl;
		cout << "|    *    |" << endl;
		cout << "|  *   *  |" << endl;
		cout << "|         |" << endl;
		cout << "===========" << endl;
		break;
	case 6:
		cout << "===========" << endl;
		cout << "|         |" << endl;
		cout << "|  *   *  |" << endl;
		cout << "|  *   *  |" << endl;
		cout << "|  *   *  |" << endl;
		cout << "|         |" << endl;
		cout << "===========" << endl;
		break;
	}
}

template<typename T>
int Player<T>::resault()
{

	//srand(time(NULL));

	int cubeFirst = rand() % 6 + 1;
	pictures(cubeFirst);

	int cubeSecond = rand() % 6 + 1;
	pictures(cubeSecond);

	int resault;

	resault = cubeSecond + cubeFirst;
	cout << cubeFirst << " -- " << cubeSecond << endl;
	cout << "Result: " << resault << "\n\n";

	return resault;
}
