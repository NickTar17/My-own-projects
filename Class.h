#pragma once


template<typename T>
class Player {
private:
	int count;
	T name;
public:

	Player();

	~Player();

	T getName();

	int getCount();

	void decCount(int count);

	int resault();

};