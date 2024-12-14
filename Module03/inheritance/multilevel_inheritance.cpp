/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   multilevel_inheritance.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 12:49:34 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/14 13:00:26 by aelkheta         ###   ########.fr       */
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
        double ounces;
        double cal_per_ounce() {
            return calories / ounces;
        }
};

class HotDrink : public Drink {
    public:
        double temprature;
        void serving_instructions() {
            std::cout << "Serve " << ounces << " ounces at " << temprature << " degrees C" << std::endl;
        }
};

int main () {
    HotDrink hot_chocolate;
    hot_chocolate.name = "Hot chocolate";
    hot_chocolate.calories = 200;
    hot_chocolate.ounces = 8;
    hot_chocolate.temprature = 27;
    
    hot_chocolate.print();
    hot_chocolate.serving_instructions();
}