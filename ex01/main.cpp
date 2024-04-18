/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 21:32:39 by jadithya          #+#    #+#             */
/*   Updated: 2024/04/18 14:40:05 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"iter.hpp"
#include <iostream>


int main( void ) {
	int a[] = {2, 3, 4, 5, 6, 7, 8};
	::iter(a, 7, ::print<int>);

	char b[] = {'a', 'b', 'c', 'd'};
	::iter(b, 4, ::print<char>);

	std::string c = "test test hi there";
	::iter(&c, 1, ::print<std::string>);

	std::string *d[] = {new std::string("chicken nuggies"), new std::string("potatoes")};
	::iter(d, 2, ::print<std::string *>);

	return 0;
}