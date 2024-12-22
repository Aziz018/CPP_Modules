/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 09:39:35 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/22 11:02:56 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP

# include <WrongAnimal.hpp>

class WrongCat : public WrongAnimal {
    public:
        WrongCat();
        WrongCat( const WrongCat& cat );
        WrongCat& operator= ( const WrongCat& copy );
        ~WrongCat();
        const  std::string& getType() const;
        void makeSound() const;
};

# endif // WRONG_CAT_HPP