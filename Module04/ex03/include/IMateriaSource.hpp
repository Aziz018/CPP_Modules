/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 09:20:15 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/25 13:38:50 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef IMATERIA_SOURCE_HPP
# define IMATERIA_SOURCE_HPP

# include <AMateria.hpp>

class IMateriaSource {
    public:
        virtual void learnMateria(AMateria*) = 0; // pure vitual func have no body
        virtual AMateria* createMateria(std::string const & type) = 0; // pure vitual func have no body
        virtual ~IMateriaSource() = 0; // pure vitual destructor
};

# endif // IMATERIA_SOURCE_HPP
