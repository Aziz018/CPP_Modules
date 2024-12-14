/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inheritance.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 10:25:34 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/14 13:00:38 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

class MenuItem {
    public:
        std::string name;
        double calories;

        void print() {
            std::cout << name << " (" << calories << " cal)" << std::endl;
        }
};

class Drink : public MenuItem {
    public:
        // std::string name;
        // double calories;
        // void print() {
        //     std::cout << name << " (" << calories << " cal)" << std::endl;
        // }
        
        double ounces;
        double cal_per_ounce() {
            return calories / ounces;
        }
};

int main()
{
    MenuItem french_fries;
    
    french_fries.name = "French fries";
    french_fries.calories = 400;
    french_fries.print();

    Drink hot_chocolate;
    hot_chocolate.name = "Hot chocolate";
    hot_chocolate.calories = 300;
    hot_chocolate.ounces = 8;
    
    hot_chocolate.print();
    std::cout << "cal/ounce: " << hot_chocolate.cal_per_ounce()
              << std::endl;


    MenuItem* ptr;
    
    ptr = &hot_chocolate;
    ptr->print();

    // Drink* dr_ptr;
    // dr_ptr = &french_fries; // a value of type "MenuItem *" cannot be assigned to an entity of type "Drink *
    
    return 0;
}
