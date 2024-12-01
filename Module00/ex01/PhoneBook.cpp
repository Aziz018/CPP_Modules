/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 01:03:05 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/01 16:50:32 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <PhoneBook.hpp>

bool isNumbers (std::string& str) {
    size_t i = 0;
    
    if (str[0] == '+' || str[0] == '-')
        i++;
    for (; i < str.length(); i++) {
        if (!std::isdigit(str[i])) {
            return false;
        }
    }
    return true;
}

bool isValidPhoneNumber( std::string& phoneNumber ) {
    
}

std::string Contact::truncateField(const std::string& field) const {
    if (field.length() > 10)
        return field.substr(0, 9) + ".";
    return field;
}

void Contact::setContact(const std::string& fn, const std::string& ln, const std::string& nn,
                const std::string& pn, const std::string& ds) {
    firstName = fn;
    lastName = ln;
    nickname = nn;
    phoneNumber = pn;
    darkestSecret = ds;
}

void Contact::displaySummary(int index) const {
    std::cout << std::setw(10) << index << " | "
                << std::setw(10) << truncateField(firstName) << "|"
                << std::setw(10) << truncateField(lastName) << "|"
                << std::setw(10) << truncateField(nickname) << std::endl;
}

void Contact::displayFull() const {
    std::cout << std::endl;
    std::cout << "First name     : " << firstName << std::endl;
    std::cout << "Last name      : " << lastName << std::endl;
    std::cout << "Nick name      : " << nickname << std::endl;
    std::cout << "Phone number   : " << phoneNumber << std::endl;
    std::cout << "Darkest secret : " << darkestSecret << std::endl;
}

void PhoneBook::addContact(const Contact& newContact) {
    contacts[nextIndex] = newContact;
    nextIndex = (nextIndex + 1) % 8;
    if (contactCount < 8) {
        contactCount++;
    }
}

void PhoneBook::searchContact() const {
    if (contactCount == 0) {
        std::cout << "The phonebook is empty." << std::endl;
        return;
    }

    std::cout << std::setw(10) << "Index" << "|"
                << std::setw(10) << "First Name" << "|"
                << std::setw(10) << "Last Name" << "|"
                << std::setw(10) << "Nick Name" << std::endl;
    for (int i = 0; i < contactCount; ++i) {
        contacts[i].displaySummary(i);
    }

    int index;
    std::string line;
    while (true) {
        std::cout << "Enter the index of the contact to display: ";

        std::getline(std::cin, line);
        index = std::atoi(line.c_str());
        if (std::cin.eof())
        {
            std::cin.clear();
            std::exit(EXIT_SUCCESS);
        }
        if (!isNumbers(line) || index < 0 || index >= contactCount) {
            std::cout << "Invalid index!" << std::endl;
            continue;
        }
        else {
            contacts[index].displayFull();
            std::cout << std::endl;
            break;
        }
    }
}

bool isAllSpaces( std::string& line ) {
    for (size_t i = 0; i < line.length(); i++) {
        if (!std::isspace(line[i]))
            return false;
    }
    return true;
}

bool validInput( std::string& line ) {
    if (isAllSpaces(line))
        return false;
    for (size_t i = 0; i < line.length(); i++) {
        if (!std::isprint(line[i])) {
            return false;
        }
    }
    return true;
}

size_t chrNum( std::string& line ) {
    size_t len = 0;

    for (size_t i = 0; i < line.length(); i++)
    {
        if (std::isalnum(line[i]))
            len++;
    }
    return len;
}

void readLine(const std::string& prompt, std::string& line)
{
    while(true) {
        std::cout << prompt;
        std::getline(std::cin, line);
                   
        if (std::cin.eof()) {
            std::cin.clear();
            std::cout << "\nBye Bye!" << std::endl;
            std::exit(EXIT_SUCCESS);
        }
        if (!line.empty() && validInput(line) && chrNum(line) >= 2)
            break;
        std::cerr << "Error: please try again!" << std::endl;
    }
}

void addNewContact(PhoneBook& phoneBook) {
    std::string firstName, lastName, nickname, phoneNumber, darkestSecret;

    readLine("Enter first name: ", firstName);
    readLine("Enter last name: ", lastName);
    readLine("Enter nickname: ", nickname);
    readLine("Enter phone number: ", phoneNumber);
    readLine("Enter darkest secret: ", darkestSecret);

    Contact newContact;
    newContact.setContact(firstName, lastName, nickname, phoneNumber, darkestSecret);
    phoneBook.addContact(newContact);
    std::cout << "Contact added!" << std::endl;
}
