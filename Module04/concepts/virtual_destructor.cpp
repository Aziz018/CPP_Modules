/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   virtual_destructor.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta < aelkheta@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 11:04:37 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/30 15:41:44 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

class Base {
    public:
        Base() {
            std::cout << "Base constructor" << std::endl;
        }
        // we should use 'virtual' to call the derived class destructor befor
        // virtual ~Base() {
        //     std::cout << "Base destructor" << std::endl;
        // }
        ~Base() {
            std::cout << "Base destructor" << std::endl;
        }
};

class Derived : public Base {
    public:
        Derived() {
            std::cout << "Derived destructor" << std::endl;
        }
        ~Derived() {
            std::cout << "Derived destructor" << std::endl;
        }
};

int main() {

    {
        Derived d;
    }

        std::cout << std::endl;

    {
        
        Base* d_ptr = new Derived();
        delete d_ptr;        
    }

    return 0;
}
