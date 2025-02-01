/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta@student.1337.ma <aelkheta>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 14:42:23 by aelkheta@st       #+#    #+#             */
/*   Updated: 2025/02/01 12:11:47 by aelkheta@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack>
#include <MutantStack.hpp>

int main()
{
    std::stack<int> stack;
    
    stack.push(10);
    stack.push(11);
    stack.push(12);
    stack.push(13);
    stack.push(14);

    for (; !stack.empty() ;) {
        std::cout << stack.top() << std::endl;
        stack.pop();
    }
}

// int main()
// {
//     MutantStack<int> mstack;

//     mstack.push(5);
//     mstack.push(17);

//     std::cout << mstack.top() << std::endl;

//     mstack.pop();

//     std::cout << mstack.size() << std::endl;

//     mstack.push(3);
//     mstack.push(5);
//     mstack.push(737);
//     //[...]
//     mstack.push(0);

//     MutantStack<int>::iterator it = mstack.begin();
//     MutantStack<int>::iterator ite = mstack.end();

//     ++it;
//     --it;
//     while (it != ite)
//     {
//         std::cout << *it << std::endl;
//         ++it;
//     }
//     std::stack<int> s(mstack);
//     return 0;
// }