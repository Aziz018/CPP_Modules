/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vtable_inspect.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta < aelkheta@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 11:02:15 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/28 13:17:42 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Base {
    public:
        virtual void foo() { std::cout << "Base::foo()" << std::endl; }
        virtual ~Base() {}
};

class Derived : public Base {
    public:
        void foo() { std::cout << "Derived::foo()" << std::endl; }
};

int main() {
    Base* obj = new Derived();
    obj->foo();
    delete obj;
    return 0;
}
