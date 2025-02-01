/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta@student.1337.ma <aelkheta>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 14:42:25 by aelkheta@st       #+#    #+#             */
/*   Updated: 2025/02/01 17:28:23 by aelkheta@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iterator>
#include <vector>
#include <stack>

template <typename T>
class MutantStack {
    private:
        std::vector<T> _array;
        

    public:
        void push(T x);
        void top();
        void pop();
        void size();
};

template <typename T>
std::ostream& operator<<(std::ostream& os, const MutantStack<T>& stack) {
    return os;
}

template <typename T>
void MutantStack<T>::push(T x) {
    
}

template <typename T>
void MutantStack<T>::top() {
    
}

template <typename T>
void MutantStack<T>::pop() {
    
}

template <typename T>
void MutantStack<T>::size() {
    
}
