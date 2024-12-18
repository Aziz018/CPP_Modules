/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 14:30:00 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/17 14:44:29 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {
    private:
        Brain* brain;
    public:
        Cat();
        Cat( const Cat& cat );
        Cat& operator= ( const Cat& copy );
        ~Cat();

        void makeSound() const;
};

# endif // CAT_HPP