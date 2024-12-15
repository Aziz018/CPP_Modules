/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   diamond_problem.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 17:16:45 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/14 17:23:57 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

class CommonBaseClass {
    public:
        int common_value;  
};

class BaseClass1 : virtual public CommonBaseClass {
};

class BaseClass2 : virtual public CommonBaseClass {
};

class DerivedClass : public BaseClass1, public BaseClass2 {  
};

int main() {
    DerivedClass derived;

    derived.common_value = 20;

    return 0;
}
