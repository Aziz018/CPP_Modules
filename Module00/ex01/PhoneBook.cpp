/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 13:42:07 by aelkheta          #+#    #+#             */
/*   Updated: 2024/08/18 17:45:02 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Contact
{
private:
    std::string name;
    std::string phoneNumber;

public:
    void setContact(const std::string& _name, const std::string& _phoneNumber)
    {
        name = _name;
        phoneNumber = _phoneNumber;
    }

    const std::string getName() const
    {
        return name;
    }

    const std::string getPhoneNumber() const
    {
        return phoneNumber;
    }
};

class PhoneBook
{
private:
    Contact contact[8];
    int contactCount;
    int contactIndex;

public:
    PhoneBook() : contactCount(0), contactIndex(0) {} // Initialize members

    void addContact(const std::string& name, const std::string& phoneNumber)
    {
        contact[contactIndex].setContact(name, phoneNumber);
        contactIndex = (contactIndex + 1) % 8;
        if (contactCount < 8)
        {
            contactCount++;
        }
    }

    void displayContact(const std::string& name)
    {
        for (int i = 0; i < contactCount; i++)
        {
            if (name == contact[i].getName())
            {
                std::cout << "Found contact: " << contact[i].getName() << " | " << contact[i].getPhoneNumber() << std::endl;
                return;
            }
        }
        std::cout << "Contact not found: " << name << std::endl;
    }

    void displayAllContacts()
    {
        if (contactCount == 0)
        {
            std::cout << "No contacts available." << std::endl;
            return;
        }

        for (int i = 0; i < contactCount; i++)
        {
            std::cout << i << ") " << contact[i].getName() << " | " << contact[i].getPhoneNumber() <<  std::endl;
        }
    }
};

void readline()
{
    PhoneBook phoneBook;
    std::string command, name, phoneNumber;

    while (1)
    {
        std::cout << "Please enter one of these commands (ADD, SEARCH, DISPLAY, or EXIT):\n>>> ";
        std::getline(std::cin, command);

        if (command == "EXIT" || std::cin.eof())
            break;

        if (command == "ADD")
        {
            std::cout << "Please enter the name:\n>>> ";
            std::getline(std::cin, name);
            std::cout << "Please enter the phone number:\n>>> ";
            std::getline(std::cin, phoneNumber);
            phoneBook.addContact(name, phoneNumber);
        }
        else if (command == "SEARCH")
        {
            std::cout << "Please enter the name to search:\n>>> ";
            std::getline(std::cin, name);
            phoneBook.displayContact(name);
        }
        else if (command == "DISPLAY")
        {
            phoneBook.displayAllContacts();
        }
        else
        {
            std::cout << "Command not found: `" << command << "`, please try again!" << std::endl;
        }
    }
}

int main()
{
    readline();
    return 0;
}
