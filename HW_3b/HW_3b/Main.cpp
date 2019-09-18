#include "SortedList.h"

void showMenu();
char getChoice();

int main() {
	SortedList list;
	char runAgain;
	do {
		showMenu();
		char choice = getChoice();
		if (choice == 'A') {
			std::cout << "Enter a number: ";
			int number = 0;
			std::cin >> number;
			std::cout << std::endl;
			if (!list.isFull()) {
				list.insertItem(number);
				std::cout << "Item was added to the list" << std::endl << std::endl;
			}
			else if (list.isFull()) {
				std::cout << "Unable to add item to list, list was full." << std::endl << std::endl;
			}

		}
		if (choice == 'B') {
			std::cout << "Enter the number to be deleted: ";
			int number = 0;
			std::cin >> number;
			if (!list.isEmpty()) {
				list.deleteItem(number);
			}
			else {
				std::cout << "Unable to delete item, the list was empty" << std::endl << std::endl;
			}
		}
		std::cout << "Run again? Y/N";
		runAgain = getChoice();
	} while (runAgain == 'Y');


}

void showMenu()
{
	std::cout << "a. Insert a number into the list." << std::endl
		<< "b. Delete a number from the list." << std::endl << std::endl;
}

char getChoice()
{
	char choice;
	std::cout << std::endl << "Enter your choice: ";
	std::cin >> choice;
	std::cout << std::endl;
	return toupper(choice);
}
