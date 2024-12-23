/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   virtual_destructors.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 18:11:55 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/22 18:20:24 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

class Base1 {
    public:
        Base1() {};
        ~Base1() { std::cout << "Base1 destructor called." << std::endl; };
};

class Base2 {
    public:
        Base2() {};
        virtual ~Base2() { std::cout << "Base2 destructor called." << std::endl; };
};


class Derived : public Base1 {
    public:
        Derived() {}
        ~Derived() { std::cout << "Derived destructor called." << std::endl; };

};

int main() {

    Base1 *base = new Base1();
    Base1 *derived1 = new Derived();
    // Base1 *derived2 = new Derived();

    delete base;
    delete derived1;
    // delete derived2;

    return 0;    
}
