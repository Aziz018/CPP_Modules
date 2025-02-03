/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta@student.1337.ma <aelkheta>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 14:42:25 by aelkheta@st       #+#    #+#             */
/*   Updated: 2025/02/02 13:51:10 by aelkheta@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

/* Example of the stack implementation */
// template <typename T, typename Container = std::deque<T> >
// class stack {
// protected:
//     Container c;  // Internal container (by default, std::deque<T>)
// public:
//     void push(const T& val) { c.push_back(val); }
//     void pop() { c.pop_back(); }
//     T& top() { return c.back(); }
//     bool empty() const { return c.empty(); }
//     size_t size() const { return c.size(); }
// };

template <typename T>
class MutantStack : public std::stack<T> {
    public:
        typedef typename std::stack<T>::container_type::iterator iterator;

        iterator begin() {
            return this->c.begin();
        }
        
        iterator end() {
            return this->c.end();
        }
};

#endif // MUTANTSTACK_HPP
