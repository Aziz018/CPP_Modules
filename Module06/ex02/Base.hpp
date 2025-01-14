/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta@student.1337.ma <aelkheta>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 18:42:12 by aelkheta@st       #+#    #+#             */
/*   Updated: 2025/01/14 19:00:14 by aelkheta@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

class Base {
    public:
        virtual ~Base() {};
};

class A : public Base {
};

class B : public Base {
};

class C : public Base {
};

#endif // BASE_HPP