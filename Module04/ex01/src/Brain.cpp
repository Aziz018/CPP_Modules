/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 10:38:29 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/17 14:43:09 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <Brain.hpp>

Brain::Brain() {
    std::cout << "Brain default constructor was called" << std::endl;
}

Brain::Brain( const Brain& brain ) {
    for (int i = 0; i < B_NUM; i++) {
        this->ideas[i] = brain.ideas[i];
    }
    std::cout << "Brain copy constructor was called" << std::endl;
}

Brain::~Brain() {
    std::cout << "Brain destructor was called" << std::endl;
}

Brain& Brain::operator= ( const Brain& copy ) {
    if (this != &copy) {
        for (int i = 0; i < B_NUM; i++) {
            this->ideas[i] = copy.ideas[i];
        }
    }
    return *this;
}
