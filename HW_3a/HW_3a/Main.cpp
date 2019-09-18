#include "UnsortedList.h"

void showMenu();
char getChoice();

int main() {
	UnsortedList list;
	showMenu();
	if (getChoice() == 'A') {
		std::cout << "Enter a number: ";
		int number = 0;
		std::cin >> number;
		std::cout << std::endl;
		if (!list.isFull) {
			list.insertItem(number);
		} else {
			std::cout << "Unable to add item to list, list was full." << std::endl;
		}
		
	} else if (getChoice() == 'B') {
		std::cout << "Enter the number to be deleted: ";
		int number = 0;
		std::cin >> number;
		if (!list.isEmpty) {
			list.deleteItem(number);
			std::cout << "The number has been deleted." << std::endl;
		} else {
			std::cout << "Unable to delete item, the list was empty" << std::endl;
		}
	}

	
}

void showMenu()
{
	std::cout << "a. Insert a number into the list." << std::endl
		<< "b. Delete a number from the list." << std::endl;
}

char getChoice()
{
	char choice;
	std::cout << "Enter your choice: ";
	std::cin >> choice;
	std::cout << std::endl;
	return toupper(choice);
}
