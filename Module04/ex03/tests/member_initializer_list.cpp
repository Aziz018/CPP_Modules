/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   member_initializer_list.cpp                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 14:51:05 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/22 13:52:04 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>

class Major {
    public:
        std::string name;
        Major() : name("Undeclared") {
            std::cout << "Major default constructor." << std::endl;
        }
        Major(std::string name) : name(name) {
            std::cout << "Major param constructor." << std::endl;
        }
};

class Minor {
    public:
        std::string name;
        Minor(std::string name) : name(name) {}
};

class Student {
    public:
        std::string name;
        int start_year;
        int grad_year;
        const std::string id;
        Major major;
        Minor minor;
    
    // Student( std::string name, int start_year ) {
    //     this->name = name;
    //     this->start_year = start_year;
    //     std::cout << "Student Object Constructed!" << std::endl;
    // }

    // using member initializer list.
    Student( std::string name, int start_year, std::string major) : 
        name(name), start_year(start_year),
        grad_year(start_year + 4),
        id(name.append(std::to_string(start_year))),
        major(Major(major)),
        minor(Minor("Physics"))
    {
        // this->major = Major(major);  // this will creat 2 objects.
        // this->id = name.append(std::to_string(start_year));  // we can not initialize const member variable here.
        // this->minor = Minor("Physics");  // we can not initialize it here because it does not have a default constructor.
        std::cout << "Student Object Constructed!" << std::endl;
    }
};

int main () {
    
    Student s1("Omar", 1999, "Computer Science");

    std::cout << "Name:       " << s1.name << std::endl
              << "Start year: " << s1.start_year << std::endl
              << "grad year:  " << s1.grad_year << std::endl
              << "Id:         " << s1.id << std::endl
              << "Major:      " << s1.major.name << std::endl
              << "Minor:      " << s1.minor.name << std::endl;
    return 0;
}
