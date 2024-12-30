/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 09:39:35 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/30 08:32:51 by aelkheta         ###   ########.fr       */
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
        void makeSound() const;
};

# endif // WRONG_CAT_HPP