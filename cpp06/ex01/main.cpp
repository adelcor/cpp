/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-cor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 18:22:09 by adel-cor          #+#    #+#             */
/*   Updated: 2022/12/12 14:51:48 by adel-cor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Seriatron.hpp"

int main(void)
{
	Data *ptr2 = new(Data);
	ptr2->name = "Inaki";
	ptr2->age = 400;
	ptr2->next = NULL;

	Data *ptr = new(Data);
	ptr->name = "Aingeru";
	ptr->age = 399;
	ptr->next = ptr2;


	std::cout << "Here is the original structs:" <<
				"\n\taddress: " << ptr <<
				"\n\tname: " << ptr->name <<
				"\n\tage: " << ptr->age <<
				"\n\taddress next: " << ptr->next <<
	std::endl;
	std::cout << "\taddress ptr2: " << ptr2 <<
				"\n\tname: " << ptr2->name <<
				"\n\tage: " << ptr2->age <<
				"\n\taddress next: " << ptr2->next <<
	std::endl << std::endl;

	Seriatron a;
	
	uintptr_t serie = a.serialize(ptr);
	
	std::cout << "serie is: " << serie << std::endl;

	Data *reserialized_struct = a.unserialize(serie);

	std::cout << "Here is the reserialized structs:" <<
				"\n\taddress: " << reserialized_struct <<
				"\n\tname: " << reserialized_struct->name <<
				"\n\tage: " << reserialized_struct->age <<
				"\n\taddress next: " << reserialized_struct->next <<
	std::endl;
	std::cout << "\taddress ptr2: " << ptr2 <<
				"\n\tname: " << ptr2->name <<
				"\n\tage: " << ptr2->age <<
				"\n\taddress next: " << ptr2->next <<
	std::endl << std::endl;
	
	if(ptr)	
		delete(ptr);
	if(ptr2)
		delete(ptr2);

	return (0);
}
