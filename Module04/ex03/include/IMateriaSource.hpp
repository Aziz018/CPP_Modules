/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta < aelkheta@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 09:20:15 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/29 13:39:06 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef IMATERIA_SOURCE_HPP
# define IMATERIA_SOURCE_HPP

# include <AMateria.hpp>

class IMateriaSource {
    public:
        virtual void learnMateria(AMateria*) = 0;
        virtual AMateria* createMateria(std::string const & type) = 0;
        virtual ~IMateriaSource() = 0;
};

# endif // IMATERIA_SOURCE_HPP
