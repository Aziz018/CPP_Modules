/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 01:03:05 by aelkheta          #+#    #+#             */
/*   Updated: 2024/08/30 11:44:55 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iomanip>
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

    Contact() : firstName(""), lastName(""), phoneNumber(""), nickName(""), darkestSecret("") {}
    
    /// @brief Add new contact to the list.
    void setNewContact(const std::string& fn, const std::string& ln, const std::string& nn, const std::string& pn, const std::string& ds) {
        firstName = fn;
        lastName = ln;
        nickName = nn;
        phoneNumber = pn;
        darkestSecret = ds;
    }

    void displaySummary(int index) const {
        std::cout << std::setw(10) << index << "|"
                  << std::setw(10) << truncateField(firstName) << "|"
                  << std::setw(10) << truncateField(lastName) << "|"
                  << std::setw(10) << truncateField(nickName) << std::endl;
    }
    
    void displayContact() const {
        std::cout << "First Name: " << firstName << std::endl;
        std::cout << "Last Name: " << lastName << std::endl;
        std::cout << "Nickname: " << nickName << std::endl;
        std::cout << "Phone Number: " << phoneNumber << std::endl;
        std::cout << "Darkest Secret: " << darkestSecret << std::endl;
    }

    private:
    std::string truncateField(const std::string& field) const {
        if (field.length() > 10)
            return field.substr(0, 9) + ".";
        return field;
    }
    
    bool isEmpty() const {
        return firstName.empty() && lastName.empty() && nickName.empty() &&
               phoneNumber.empty() && darkestSecret.empty();
    }
};

/// @brief class for Phonebook.
class PhoneBook {
private:
    Contact contacts[8];
    int contactCount;
    int contactIndex;

public:
    PhoneBook() : contactCount(0), contactIndex(0) {}

    /// @brief Add new contact to the list.
    /// @param name the name of the contact that would be added.
    /// @param phoneNumber the phone number of the contact that would be added.
    void addContact(const Contact& newContact) {
        contacts[contactIndex % 8] = newContact;
        contactIndex++;
        if (contactCount < 8)
            contactCount++;
    }

    /// @brief Display the contact if it found.
    /// @param name Name of the contact that should be displayed. 
    void displayContact() {
        if (contactCount == 0) {
            std::cout << "The phone book is empty." << std::endl;
            return ;
        }
        std::cout << std::setw(10) << "Index" << " | "
                  << std::setw(10) << "First Name" << " | "
                  << std::setw(10) << "Last Name" << " | "
                  << std::setw(10) << "Nick Name" << " | " << std::endl;
        for (int i = 0; i < contactCount; i++) {
            contacts[i].displaySummary(i);
        }
        
        std::cout << "Enter the index of the contact to display: ";
        int index;
        std::cin >> index;
        if (index < 0 || index > contactCount) {
            std::cout << "Invalid index!" << std::endl;
            return;
        }
        else {
            contacts[index].displayContact();
        }
    }
};

void addNewContact(PhoneBook& phoneBook) {
    std::string firstName, lastName, nickName, phoneNumber, darkestSecret;
    
    std::cout << "Enter first name: ";
    std::getline(std::cin, firstName);
    std::cout << "Enter last name: ";
    std::getline(std::cin, lastName);
    std::cout << "Enter nick name: ";
    std::getline(std::cin, nickName);
    std::cout << "Enter phone number: ";
    std::getline(std::cin, phoneNumber);
    std::cout << "Enter darkest secret: ";
    std::getline(std::cin, darkestSecret);

    if (firstName.empty() || lastName.empty() || nickName.empty() || phoneNumber.empty() || darkestSecret.empty()) {
        std::cout << "There is an empty field!" << std::endl;
    }

    Contact newContact;
    newContact.setNewContact(firstName, lastName, nickName, phoneNumber, darkestSecret);
    phoneBook.addContact(newContact);
    std::cout << "Contact added successfully!" << std::endl;
}

int main() {
    PhoneBook phoneBook;
    std::string command;

    while (true) {
        std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, command);

        if (command == "ADD") {
            addNewContact(phoneBook);
        }
        else if (command == "SEARCH") {
            phoneBook.displayContact();
        }
        else if (command == "EXIT" || std::cin.eof()) {
            break;
        }
        else {
            std::cout << "Invalid command!" << std::endl;
        }
    }
    
    return 0; 
}