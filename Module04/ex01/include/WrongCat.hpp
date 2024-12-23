/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 09:39:35 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/23 06:41:24 by aelkheta         ###   ########.fr       */
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
        // const  std::string& getType() const;
};

# endif // WRONG_CAT_HPP