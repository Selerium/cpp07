/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 21:32:39 by jadithya          #+#    #+#             */
/*   Updated: 2024/03/11 12:04:11 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"iter.hpp"
#include <iostream>


int main( void ) {
	int a[] = {2, 3, 4, 5, 6, 7, 8};
	::iter(a, 7, ::multiplyByTwo<int>);

	char b[] = {'a', 'b', 'c', 'd'};
	::iter(b, 4, ::multiplyByTwo<char>);

	std::string c = "test test hi there";
	::iter(c, c.length(), ::multiplyByTwo<char>);

	return 0;
}