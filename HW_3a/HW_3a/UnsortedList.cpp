#include "UnsortedList.h"
// Default Constructor
UnsortedList::UnsortedList()
{
}
// Default destructor
UnsortedList::~UnsortedList()
{
}

// Appends an item to the list.
void UnsortedList::insertItem(int item)
{
	numbers[length] = item;
}

// Searches for and deletes the passed item from the list.
void UnsortedList::deleteItem(int item)
{
	for (int i = 0; i < length; i++) {
		if (numbers[i] = item) {
			numbers[i] = 0; // should ideally be null
		}
	}
}
// Checks to see if the list is full
bool UnsortedList::isFull()
{
	return false;
}
// Checks to see if the list is empty
bool UnsortedList::isEmpty()
{
	return false;
}
