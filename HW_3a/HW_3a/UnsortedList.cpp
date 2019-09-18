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
	length++;
}

// Searches for and deletes the passed item from the list.
void UnsortedList::deleteItem(int item)
{
	int location = 0;
	while (item != numbers[location] && location < length) {
		location++;
	}
	if (location < length) {// Item has been found
		// The last item in the list is assinged to the location
		numbers[location] = numbers[length - 1];
		length--;
		std::cout << "Item has been deleted." << std::endl;
	}
	else { // Item is not in list
		std::cout << "The item is not in the list." << std::endl;
	}
}
// Checks to see if the list is full
bool UnsortedList::isFull()
{
	if (length == MAX_SIZE) {
		return true;
	}
	else {
		return false;
	}
}
// Checks to see if the list is empty
bool UnsortedList::isEmpty()
{
	if (length == 0) {
		return true;
	}
	else {
		return false;
	}
}
