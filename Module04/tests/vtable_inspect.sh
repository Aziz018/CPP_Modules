# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    vtable_inspect.sh                                  :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aelkheta < aelkheta@student.1337.ma>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/28 11:01:43 by heisenberg        #+#    #+#              #
#    Updated: 2024/12/28 11:06:53 by aelkheta         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

c++ -g vtable_inspect.cpp -o vtable_inspect
./vtable_inspect
# rm vtable_inspect

# -fdump-class-hierarchy c++ flag