/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   multiple_inheritance.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 14:10:56 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/14 15:32:04 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

class BaseClass1 {
    public:
        void function1() {
            std::cout << "Function1 BaseClass1" << std::endl;
        }    
};

class BaseClass2 {
    public:
        void function1() {
            std::cout << "Function1 BaseClass2" << std::endl; // Corrected output message
        }
        void function2() {
            std::cout << "Function2 BaseClass2" << std::endl;
        }
};

class DerivedClass : public BaseClass1, public BaseClass2 {
    public:
        // void function1() {
        //     std::cout << "Function1 DerivedClass" << std::endl;            
        // }
        void function3() {
            std::cout << "Function3 DerivedClass" << std::endl;            
        }
};

int main() {
    DerivedClass derived;

    // derived.function1(); // Error: ambiguous call to function1() known as diamond problem
    derived.BaseClass1::function1();

    return 0;
}
