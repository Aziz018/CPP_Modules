/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   virtual_destructors.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 18:11:55 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/24 10:09:07 by aelkheta         ###   ########.fr       */
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


class Derived1 : public Base1 {
    public:
        Derived1() {}
        ~Derived1() { std::cout << "Derived1 destructor called." << std::endl; };

};

class Derived2 : public Base2 {
    public:
        Derived2() {}
        ~Derived2() { std::cout << "Derived2 destructor called." << std::endl; };

};

int main() {

    Base1 *base = new Base1();
    Base1 *derived1 = new Derived1();
    // Base1 *derived2 = new Derived2();

    delete base;
    delete derived1;
    // delete derived2;

    return 0;    
}
