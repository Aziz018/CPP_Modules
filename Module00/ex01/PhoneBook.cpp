/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 01:03:05 by aelkheta          #+#    #+#             */
/*   Updated: 2024/08/29 16:49:10 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

/// @brief class for Contact.
class Contact {
private:
    std::string firstName;
    std::string lastName;
    std::string phoneNumber;
    std::string nickName;
    std::string darkestSecret;

public:

    /// @brief Add new contact to the list.
    /// @param _name Contact's name.
    /// @param _phoneNumber Contact's phone number.
    void setContact(const std::string& _firstName, const std::string& _phoneNumber) {
        firstName = _firstName;
        phoneNumber = _phoneNumber;
    }

    const std::string getFirstName() {
        return firstName;
    }

    const std::string getPhoneNumber() {
        return phoneNumber;
    }
};

/// @brief class for Phonebook.
class PhoneBook {
private:
    Contact contact[8];
    int contactCount;
    int contactIndex;

public:
    PhoneBook() : contactCount(0), contactIndex(0) {}

    /// @brief Add new contact to the list.
    /// @param name the name of the contact that would be added.
    /// @param phoneNumber the phone number of the contact that would be added.
    void addContact(const std::string name, const std::string phoneNumber) {
        contact[contactIndex % 8].setContact(name, phoneNumber);
        contactIndex++;
        if (contactCount < 8)
            contactCount++;
    }

    /// @brief Display the contact if it found.
    /// @param name Name of the contact that should be displayed. 
    void displayContact(const std::string name) {
        std::string Spaces = "          ";
        for (int i = 0; i < contactCount; i++)
        {
            if (name == contact[i].getFirstName())
            {
                std::cout << "┌─────────────────────────────────────────────────────────────────┐" << std::endl;
                std::cout << "│  Index   │  first name  │ last name │ nickname │ darkest secre  │" << std::endl;
                std::cout << "│──────────│──────────────│───────────│──────────│────────────────│" << std::endl;
                std::cout << "│   "<< contactIndex << "      │   " << contact[i].getFirstName() << Spaces.substr(0, 10 - contact[i].getFirstName().length()) << " │ " << contact[i].getPhoneNumber() << std::endl;
                std::cout << "└─────────────────────────────────────────────────────────────────┘" << std::endl;
                return;
            }
        }
        std::cout << "Contact not found!" << std::endl;
    }

    /// @brief Display the whole contact.
    void displayWholeContact() {
        for (int i = 0; i < contactCount; i++) {
            std::cout << "Index      | first name     | last name | nickname | phone number | darkest secre" << std::endl;
            std::cout << contact[i].getFirstName()  << "| " << contact[i].getPhoneNumber() << std::endl;
        }
    }

};

/// @brief readline from stdin and execute the command if it exists.
/// @param phoneBook the phonebook object to perform operations on.
void readline(PhoneBook& phoneBook) {
    std::string name, phoneNumber;
    while (1) {
        std::cout << "Please enter one of these commands (ADD, SEARCH, or EXIT):\n>>> ";
        std::getline(std::cin, name);
        if (name == "EXIT" || std::cin.eof())
            break;
        else if (name == "ADD") {
            std::cout << "Please enter the contact's name:\n>>> ";
            std::getline(std::cin, name);
            std::cout << "Please enter the phone number:\n>>> ";
            std::getline(std::cin, phoneNumber);
            phoneBook.addContact(name, phoneNumber);
        }
        else if (name == "SEARCH") {
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

int main() {
    PhoneBook phoneBook;
    readline(phoneBook);
    return 0;
}
