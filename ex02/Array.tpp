/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 12:42:48 by jadithya          #+#    #+#             */
/*   Updated: 2024/04/18 15:15:31 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Array.hpp"

template <class T>
Array<T>::Array() {
	std::cout << "Constructor called " << std::endl;
	this->list = new T[]();
	this->n = 0;
}

template <class T>
Array<T>::Array(unsigned int n) {
	std::cout << "Parameterized constructor called " << std::endl;
	this->list = new T[n]();
	this->n = n;
}

template <class T>
Array<T>::Array(const Array &a) {
	std::cout << "Copy constructor called " << std::endl;
	this->list = new T[a.size()]();
	this->n = a.n;
	for (int i = 0; static_cast<unsigned int>(i) < this->n; i++)
		this->list[i] = a.list[i];
}

template <class T>
Array<T>::~Array() {
	std::cout << "Destructor called" << std::endl;
	delete[] this->list;
}

template <class T>
Array<T> &Array<T>::operator= (const Array &a) {
	std::cout << "Copy assignment operator called " << std::endl;
	return (Array(a));
}

template <class T>
T &Array<T>::operator[] (int n) {
	if (n >= (int) this->size() || n < 0)
		throw std::exception();
	return this->list[n];
}

template <class T>
unsigned int Array<T>::size() const {
	return this->n;
}