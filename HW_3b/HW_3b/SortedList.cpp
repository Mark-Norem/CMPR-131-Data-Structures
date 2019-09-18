#include "SortedList.h"

// Default Constructor
SortedList::SortedList()
{
}
// Default destructor
SortedList::~SortedList()
{
}

int SortedList::linearSearch(int item)
{
	int location = 0;
	while ((item >= numbers[location]) && (location < length)) {
		location++;
	}
	return location;
}

int SortedList::binarySearch(int item)
{
	int first = 0;
	int midpoint = 0;
	int last = length - 1;
	while (true) {
		if (first > last) {
			return first;
		}
		midpoint = (first + last / 2);
		if (item == numbers[midpoint]) {
			return midpoint;
		}
		else if (item > numbers[midpoint]) {
			first = (midpoint + 1);
		}
		else if (item < numbers[midpoint]) {
			last = (midpoint - 1);
		}

	}
}

// Appends an item to the list.
void SortedList::insertItem(int item)
{
	int location = 0;
	location = linearSearch(item);
	for (int i = length; i > location; i--) {
		numbers[i] = numbers[i - 1];
	}
	numbers[location] = item;
	length++;
}

// Searches for and deletes the passed item from the list.
void SortedList::deleteItem(int item)
{
	int location = 0;
	location = linearSearch(item);

	if (location < length) {
		for (int i = location + 1; i < length; i++) {
			numbers[i - 1] = numbers[i];
		}
		length--;
	}
	else {
		std::cout << "The name is not in the list." << std::endl << std::endl;
	}
}
// Checks to see if the list is full
bool SortedList::isFull()
{
	return (length == MAX_SIZE);
}
// Checks to see if the list is empty
bool SortedList::isEmpty()
{
	return (length == 0);
}

void SortedList::displayList()
{
	for (int i = 0; i < length; i++) {
		std::cout << numbers[i] << std::endl;
	}
}
