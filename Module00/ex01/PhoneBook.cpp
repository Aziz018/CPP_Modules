/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 01:03:05 by aelkheta          #+#    #+#             */
/*   Updated: 2024/09/19 00:34:39 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <iomanip>
# include <string>
# include <cstdlib>

class Contact {
private:
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darkestSecret;

public:
    Contact() : firstName(""), lastName(""), nickname(""), phoneNumber(""), darkestSecret("") {}

    void setContact(const std::string& fn, const std::string& ln, const std::string& nn,
                    const std::string& pn, const std::string& ds) {
        firstName = fn;
        lastName = ln;
        nickname = nn;
        phoneNumber = pn;
        darkestSecret = ds;
    }

    void displaySummary(int index) const {
        std::cout << std::setw(10) << index << " | "
                  << std::setw(10) << truncateField(firstName) << " | "
                  << std::setw(10) << truncateField(lastName) << " | "
                  << std::setw(10) << truncateField(nickname) << std::endl;
    }

    void displayFull() const {
        std::cout << "First name: ....... " << firstName << std::endl;
        std::cout << "Last name: ........ " << lastName << std::endl;
        std::cout << "Nick name: ........ " << nickname << std::endl;
        std::cout << "Phone number: ..... " << phoneNumber << std::endl;
        std::cout << "Darkest secret: ... " << darkestSecret << std::endl;
    }

private:
    std::string truncateField(const std::string& field) const {
        if (field.length() > 10)
            return field.substr(0, 9) + ".";
        return field;
    }
};

class PhoneBook {
private:
    Contact contacts[8];
    int contactCount;
    int nextIndex;

public:
    PhoneBook() : contactCount(0), nextIndex(0) {}

    void addContact(const Contact& newContact) {
        contacts[nextIndex] = newContact;
        nextIndex = (nextIndex + 1) % 8;
        if (contactCount < 8) {
            contactCount++;
        }
    }

    void searchContact() const {
        if (contactCount == 0) {
            std::cout << "The phonebook is empty." << std::endl;
            return;
        }

        std::cout << std::setw(10) << "Index" << " | "
                  << std::setw(10) << "First Name" << " | "
                  << std::setw(10) << "Last Name" << " | "
                  << std::setw(10) << "Nick Name" << std::endl;
        for (int i = 0; i < contactCount; ++i) {
            contacts[i].displaySummary(i);
        }

        std::cout << "Enter the index of the contact to display: ";
        int index;
        std::cin >> index;
        if (std::cin.eof())
            std::exit(0);
        if (index < 0 || index >= contactCount) {
            std::cout << "Invalid index!" << std::endl;
        } else {
            std::cout << std::endl;
            contacts[index].displayFull();
            std::cout << std::endl;
        }
    }
};

void addNewContact(PhoneBook& phoneBook) {
    std::string firstName, lastName, nickname, phoneNumber, darkestSecret;

    std::cout << "Enter first name: ";
    std::getline(std::cin, firstName);
    
    if (!firstName.empty()) {
        std::cout << "Enter last name: ";
        std::getline(std::cin, lastName);
    }
    
    if (!lastName.empty()) {
        std::cout << "Enter nickname: ";
        std::getline(std::cin, nickname);
    }
    
    if (!nickname.empty()) {
        std::cout << "Enter phone number: ";
        std::getline(std::cin, phoneNumber);
    }
    
    if (!phoneNumber.empty()) {
        std::cout << "Enter darkest secret: ";
        std::getline(std::cin, darkestSecret);
    }
    
    if (std::cin.eof()) {
        std::cin.clear();
        std::exit(0);
    }
    
    if (firstName.empty() || lastName.empty() || nickname.empty() ||
        phoneNumber.empty() || darkestSecret.empty()) {
        std::cout << "There is an empty field!" << std::endl;
        return;
    }

    Contact newContact;
    newContact.setContact(firstName, lastName, nickname, phoneNumber, darkestSecret);
    phoneBook.addContact(newContact);
    std::cout << "Contact added!" << std::endl;
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
            phoneBook.searchContact();
            continue;
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
