/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 03:03:52 by aelkheta          #+#    #+#             */
/*   Updated: 2024/09/05 06:44:26 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
# include <iomanip>

class Contact
{
private:
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string darkestSecret;

public:
    Contact() : firstName(""), lastName(""), nickName(""), phoneNumber(""), darkestSecret("") {}
    ~Contact();

    void setContact(const std::string& firstNm, const std::string& lastNm, const std::string& nickNm, const std::string& darkestSec, const std::string& phoneNum);
    void displaySummContact(int index) const;
    void displayFullContact() const;
    std::string truncatedField(const std::string& field) const ;
};

Contact::~Contact()
{
//    std::cout << "Contact destructor was called" << std::endl;
}

void Contact::setContact(const std::string& firstNm, const std::string& lastNm, const std::string& nickNm, const std::string& darkestSec, const std::string& phoneNum) {
    firstName = firstNm;
    lastName = lastNm;
    nickName = nickNm;
    darkestSecret = darkestSec;
    phoneNumber = phoneNum;
}

void Contact::displaySummContact(int index) const {
    std::cout << std::setw(10) << index << " | "
              << std::setw(10) << truncatedField(firstName) << " | "
              << std::setw(10) << truncatedField(lastName) << " | "
              << std::setw(10) << truncatedField(nickName) << " | " << std::endl;
}

std::string Contact::truncatedField(const std::string& field) const {
    if (field.length() > 10)
        return (field.substr(0, 9) + ".");
    return (field);
}

void Contact::displayFullContact() const {
    std::cout << "First name: ......... " << firstName << std::endl;
    std::cout << "Last name: .......... " << lastName << std::endl;
    std::cout << "Nick name: .......... " << nickName << std::endl;
    std::cout << "Darkest secret: ..... " << darkestSecret << std::endl;
    std::cout << "Phone number: ....... " << phoneNumber << std::endl;

}

class PhoneBook
{
private:
    Contact contacts[8];
    int contactCount;
    int contactIndex;

public:
    PhoneBook() : contactCount(0), contactIndex(0) {};
    ~PhoneBook();

    void addContact(const Contact& contact);
    void searchForContact() const;
};

// PhoneBook::PhoneBook() : contactCount(0), contactIndex(0) {}

PhoneBook::~PhoneBook()
{
//    std::cout << "PhoneBook destructor was called" << std::endl;
}

void PhoneBook::addContact(const Contact& newContact) {
    contacts[contactIndex] = newContact;
    contactIndex = (contactIndex + 1) % 8;
    if (contactCount < 8) {
        contactCount++;   
    }
}

void PhoneBook::searchForContact() const {
    if (0 == contactCount) {
        std::cout << "The phone book is empy." << std::endl;
        return ;
    }

    std::cout << std::setw(10) << "Index" << " | "
              << std::setw(10) << "First Name" << " | "
              << std::setw(10) << "Last Name" << " | "
              << std::setw(10) << "Nick Name" << " | "
              << std::endl;
    for (int i = 0; i < contactCount; i++) {
        contacts[i].displaySummContact(i);
    }
    
    std::cout << "Enter the index of the contact: ";
    
    int index;
    std::cin >> index;

    if (std::cin.eof())
        std::exit(0);
    if (index < 0 || index >= contactCount) {
        std::cout << "Invalid index!" << std::endl;
    } else {
        contacts[index].displayFullContact();
        std::cout << std::endl;
    }
}

void addPhoneBook(PhoneBook& phoneBook) {
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
            addPhoneBook(phoneBook);
        }
        else if (command == "SEARCH") {
            phoneBook.searchForContact();
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
