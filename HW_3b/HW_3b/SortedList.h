#pragma once
#include <iostream>
class SortedList
{
private:
	const static int MAX_SIZE = 10;
	int numbers[MAX_SIZE] = { 0 }; // Array that holds integer values.
	int length = 0; // Integer to keep track of the length of the list.
public:
	SortedList();
	~SortedList();
	int linearSearch(int item);
	int binarySearch(int item);
	void insertItem(int item);
	void deleteItem(int item);
	bool isFull();
	bool isEmpty();
	void displayList();

};

