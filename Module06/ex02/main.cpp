/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta@student.1337.ma <aelkheta>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 18:50:40 by aelkheta@st       #+#    #+#             */
/*   Updated: 2025/01/14 20:02:22 by aelkheta@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Base.hpp>
#include <iostream>
#include <cstdlib>
#include <ctime>

Base* generate(void) {
    std::srand(std::time(0));
    int rand_n = std::rand() % 3;
    
    if (rand_n == 1) {
        std::cout << "Generate type A" << std::endl;
        return new A;
    }
    else if (rand_n == 2) {
        std::cout << "Generate type B" << std::endl;
        return new B;
    }
    else {
        std::cout << "Generate type C" << std::endl;
        return new C;
    }
}

void identify(Base* p) {
    if (dynamic_cast<A*>(p)) {
        std::cout << "Identified (pointer version) type " << "A" << std::endl;
    }
    else if (dynamic_cast<B*>(p)) {
        std::cout << "Identified (pointer version) type " << "B" << std::endl;
    }
    else if (dynamic_cast<C*>(p)) {
        std::cout << "Identified (pointer version) type " << "C" << std::endl;
    }
    else {
        std::cout << "Identified (pointer version) type " << "null pointer" << std::endl;        
    }
}

void identify(Base& p) {
    (void)(p);
    try {
        dynamic_cast<A&>(p);
        std::cout << "Identified (ref version) type " << "A" << std::endl;
    }
    catch (std::exception& e) {
        try {
            dynamic_cast<B&>(p);
            std::cout << "Identified (ref version) type " << "B" << std::endl;
        }
        catch (std::exception& e) {
            try {
                dynamic_cast<C&>(p);
                std::cout << "Identified (ref version) type " << "C" << std::endl;
            }
            catch (std::exception& e) {
                std::cout << "Type unidentified!" << std::endl;
            }
        }
    }
}

int main() {
    Base* b_ptr = generate();
    identify(b_ptr);
    identify(*b_ptr);
    identify(NULL);

    delete b_ptr;
    
    return 0;
}