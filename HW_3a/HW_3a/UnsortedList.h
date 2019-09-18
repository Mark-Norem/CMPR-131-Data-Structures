#pragma once
#include <iostream>
class UnsortedList
{
private:
	const static int MAX_SIZE = 10;
	int numbers[MAX_SIZE] = { 0 }; // Array that holds integer values.
	int length = 0; // Integer to keep track of the length of the list.
public:
	UnsortedList();
	~UnsortedList();
	void insertItem(int item);
	void deleteItem(int item);
	bool isFull();
	bool isEmpty();

};

