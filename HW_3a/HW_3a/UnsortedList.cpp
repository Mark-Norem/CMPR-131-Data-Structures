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
	int location = 0;
	while (item != numbers[location] && location < length) {
		if (location < length) {// Item has been found
			// The last item in the list is assinged to the location
			numbers[location] = numbers[length - 1];
			length--;
		}
		else { // Item is not in list
			std::cout << "The item is not in the list.";
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
