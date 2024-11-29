/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 11:53:57 by aelkheta          #+#    #+#             */
/*   Updated: 2024/11/29 12:06:07 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

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
                    const std::string& pn, const std::string& ds);
    void displaySummary(int index) const ;
    void displayFull() const ;

private:
    std::string truncateField(const std::string& field) const;
};

class PhoneBook {
private:
    Contact contacts[8];
    int contactCount;
    int nextIndex;

public:
    PhoneBook() : contactCount(0), nextIndex(0) {}

    void addContact(const Contact& newContact);
    void searchContact() const;
   
};

void addNewContact(PhoneBook& phoneBook);