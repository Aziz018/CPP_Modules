/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta < aelkheta@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 09:25:38 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/29 13:41:56 by aelkheta         ###   ########.fr       */
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
        ~MateriaSource();
};

# endif // MATERIA_SOURCE_HPP
