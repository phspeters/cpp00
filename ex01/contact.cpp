#include "Contact.hpp"

Contact::Contact()
{
	std::cout << "Contact created" << std::endl;
}

Contact::~Contact()
{
	std::cout << "Contact destroyed" << std::endl;
}

void Contact::setContactInfo()
{
	std::cout << "Enter first name: ";
	std::cin >> this->firstName;
	std::cout << "Enter last name: ";
	std::cin >> this->lastName;
	std::cout << "Enter nickname: ";
	std::cin >> this->nickname;
	std::cout << "Enter phone number: ";
	std::cin >> this->phoneNumber;
	std::cout << "Enter darkest secret: ";
	std::cin >> this->darkestSecret;
	std::cout << "Contact saved\n" << std::endl;
}

void	Contact::displayContactInfo()
{
	std::cout << "First name: " << this->firstName << std::endl;
	std::cout << "Last name: " << this->lastName << std::endl;
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Phone number: " << this->phoneNumber << std::endl;
	std::cout << "Darkest secret: " << this->darkestSecret << '\n' << std::endl;

}

std::string	Contact::getFirstName()
{
	return this->firstName;
}

std::string	Contact::getLastName()
{
	return this->lastName;
}

std::string	Contact::getNickname()
{
	return this->nickname;
}

std::string truncateString(const std::string& str)
{
    if (str.length() > 10)
    {
        return str.substr(0, 9) + ".";
    }
    return str;
}