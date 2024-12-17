/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 09:39:35 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/17 11:53:45 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

# include <iostream>

class WrongAnimal {
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal( const WrongAnimal& animal );
        WrongAnimal& operator= ( const WrongAnimal& copy );
        virtual ~WrongAnimal();

        const std::string& getType() const;
        void makeSound() const;
};

class WrongCat : public WrongAnimal {
    public:
        WrongCat();
        WrongCat( const WrongCat& cat );
        WrongCat& operator= ( const WrongCat& copy );
        ~WrongCat();

        const  std::string& getType() const;
        void makeSound() const;
};

# endif // WRONG_ANIMAL_HPP