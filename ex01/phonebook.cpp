#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	contactCount = 0;
	std::cout << "PhoneBook created" << std::endl;
}

PhoneBook::~PhoneBook()
{
	std::cout << "PhoneBook destroyed" << std::endl;
}

void PhoneBook::addContact()
{
	contacts[contactCount % 8].setContactInfo();
	contactCount++;
}

void PhoneBook::searchContact()
{
	if (contactCount == 0)
	{
		std::cout << "Phonebook is empty" << std::endl;
		return;
	}
	std::cout << "Saved contacts:" << std::endl;
	std::cout << "     Index|First Name| Last Name|  Nickname" << std::endl;
	std::cout << "-------------------------------------------" << std::endl;
	for (int i = 0; i < contactCount; i++)
	{
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10) << truncateString(contacts[i].getFirstName()) << "|";
		std::cout << std::setw(10) << truncateString(contacts[i].getLastName()) << "|";
		std::cout << std::setw(10) << truncateString(contacts[i].getNickname()) << std::endl;
	}
	std::cout << "-------------------------------------------" << '\n' << std::endl;
	std::cout << "Enter index of contact to be displayed: ";
	int index;
	std::cin >> index;
	if (index < 0 || index >= contactCount)
	{
		std::cout << "Invalid index" << std::endl;
		return;
	}
	contacts[index].displayContactInfo();
}