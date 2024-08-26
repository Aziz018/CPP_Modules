/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 01:03:05 by aelkheta          #+#    #+#             */
/*   Updated: 2024/08/26 01:03:06 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

/// @brief class for Contact.
class Contact
{
private:
    std::string name;
    std::string phoneNumber;

public:

    /// @brief Add new contact to the list.
    /// @param _name Contact's name.
    /// @param _phoneNumber Contact's phone number.
    void setContact(const std::string& _name, const std::string& _phoneNumber)
    {
        name = _name;
        phoneNumber = _phoneNumber;
    }

    const std::string getName()
    {
        return name;
    }

    const std::string getPhoneNumber()
    {
        return phoneNumber;
    }
};

/// @brief class for Phonebook.
class PhoneBook
{
private:
    Contact contact[8];
    int contactCount;
    int contactIndex;

public:
    PhoneBook() : contactCount(0), contactIndex(0) {}

    /// @brief Add new contact to the list.
    /// @param name the name of the contact that would be added.
    /// @param phoneNumber the phone number of the contact that would be added.
    void addContact(const std::string name, const std::string phoneNumber)
    {
        contact[contactIndex % 8].setContact(name, phoneNumber);
        contactIndex++;
        if (contactCount < 8)
            contactCount++;
    }

    /// @brief Display the contact if it found.
    /// @param name Name of the contact that should be displayed. 
    void displayContact(const std::string name)
    {
        for (int i = 0; i < contactCount; i++)
        {
            if (name == contact[i].getName())
            {
                std::cout << contact[i].getName() << " | " << contact[i].getPhoneNumber() << std::endl;
                return;
            }
        }
        std::cout << "Contact not found!" << std::endl;
    }

    /// @brief Display the whole contact.
    void displayWholeContact()
    {
        for (int i = 0; i < contactCount; i++)
                std::cout << contact[i].getName() << " | " << contact[i].getPhoneNumber() << std::endl;
    }

};

/// @brief readline from stdin and execute the command if it exists.
/// @param phoneBook the phonebook object to perform operations on.
void readline(PhoneBook& phoneBook)
{
    std::string name, phoneNumber;
    while (1)
    {
        std::cout << "Please enter one of these commands (ADD, SEARCH, or EXIT):\n>>> ";
        std::getline(std::cin, name);
        if (name == "EXIT" || std::cin.eof())
            break;
        else if (name == "ADD")
        {
            std::cout << "Please enter the contact's name:\n>>> ";
            std::getline(std::cin, name);
            std::cout << "Please enter the phone number:\n>>> ";
            std::getline(std::cin, phoneNumber);
            phoneBook.addContact(name, phoneNumber);
        }
        else if (name == "SEARCH")
        {
            std::cout << "Please enter the contact's name to search:\n>>> ";
            std::getline(std::cin, name);
            phoneBook.displayContact(name);
        }
        else if (name == "DISPLAY")
            phoneBook.displayWholeContact();
        else
            std::cout << "Command not found: `" << name << "' try again!" << std::endl;
    }
}

int main()
{
    PhoneBook phoneBook;
    readline(phoneBook);
    return 0;
}
