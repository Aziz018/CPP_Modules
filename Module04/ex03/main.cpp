/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta < aelkheta@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 20:24:32 by aelkheta          #+#    #+#             */
/*   Updated: 2024/12/29 13:46:14 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <Ice.hpp>
# include <Cure.hpp>
# include <Character.hpp>
# include <MateriaSource.hpp>

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());

    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);

    tmp = src->createMateria("cure");
    me->equip(tmp);

    src->learnMateria(new Cure());
    src->learnMateria(new Cure());
    src->learnMateria(new Cure());
    src->learnMateria(new Cure());
    src->learnMateria(new Cure());
    src->learnMateria(new Cure());
    src->learnMateria(new Cure());

    tmp = src->createMateria("cure");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);

    me->unequip(0);
    me->unequip(0);

    delete bob;
    delete me;
    delete src;

    return 0;
}
