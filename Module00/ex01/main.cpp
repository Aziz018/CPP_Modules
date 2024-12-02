/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 20:55:00 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/02 09:34:10 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <PhoneBook.hpp>

void byebye()
{
    std::cout << "\nBye Bye!" << std::endl;
}

int main() {
    PhoneBook phoneBook;
    std::string command;

    std::atexit(byebye);

    while (true) {
        std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, command);

        if (command == "ADD") {
            addNewContact(phoneBook);
        }
        else if (command == "SEARCH") {
            phoneBook.searchContact();
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
