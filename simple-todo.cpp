#include <iostream>
#include <string>

float isFloat (float value)
{
	if (value != int(value))
	{
		return 1;
	}
	return 0;
}

typedef struct TodoData
{
	std::string title = "";
	std::string description = "";
	std::string notes = "";
	int numEntry = 0;
};

typedef struct Entries
{
	TodoData data;
	Entries *Lnxt = NULL;
	Entries *Lprev = NULL;
};



TodoData readTodoData(TodoData toModify)
{
	int option = 0;
	std::cout << "Please enter the title of the todo: ";
	std::cin >> toModify.title;
	std::cout << "Please enter the a description for the todo: ";
	std::cin >> toModify.description;
	do
	{
		std::cout << "Do you want to add a note to the todo? 1. Yes, 2. No\nSelection: ";
		std::cin >> option;
	} while (isFloat(option));
	if (option == 1)
	{
		std::cout << "Please enter a note for the todo: ";
		std::cin >> toModify.notes;
	}
	return toModify;
}

int main ()
{
	std::cout << "Placeholder...\n";
	return 0;
}
