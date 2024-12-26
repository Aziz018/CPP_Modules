/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 09:25:38 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/26 16:31:20 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef MATERIA_SOURCE_HPP
# define MATERIA_SOURCE_HPP

# include <IMateriaSource.hpp>

class MateriaSource : public IMateriaSource {
    private:
        AMateria* _materia[4];
    public:
        MateriaSource();
        MateriaSource(const MateriaSource& materia_source);
        MateriaSource operator= (const MateriaSource& copy);
        void learnMateria(AMateria* m);
        AMateria* createMateria(std::string const &type);
        ~MateriaSource(); // destructor
};

# endif // MATERIA_SOURCE_HPP
