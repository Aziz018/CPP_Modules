/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   multiple_inheritance.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 14:10:56 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/14 17:16:17 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

class BaseClass1 {
    public:
        int value;
        void function1() {
            std::cout << "Function1 BaseClass1" << std::endl;
        }    
};

class BaseClass2 {
    public:
        int value;
        void function1() {
            std::cout << "Function1 BaseClass2" << std::endl; // Corrected output message
        }
        // void function2() {
        //     std::cout << "Function2 BaseClass2" << std::endl;
        // }
};

class DerivedClass : public BaseClass1, public BaseClass2 {
    public:
        // void function1() {
        //     std::cout << "Function1 DerivedClass" << std::endl;            
        // }
        void function2() {
            BaseClass1::function1();
        }
        void function3() {
            std::cout << "Function3 DerivedClass" << std::endl;            
        }
};

int main() {
    DerivedClass derived;

    // derived.function1(); // Error: ambiguous call to function1()
    derived.BaseClass1::function1();
    derived.BaseClass2::function1();
    derived.BaseClass1::value = 20;
    derived.function2();    // It will call function1() of BaseClass1
    return 0;
}
