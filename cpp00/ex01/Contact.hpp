/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-cor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:23:37 by adel-cor          #+#    #+#             */
/*   Updated: 2022/10/20 18:23:39 by adel-cor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>

class Contact
{
	private:

		static std::string		_fields_name[5];
		std::string				_informations[11];
		
		enum	Field 
		{
			FirstName = 0,
			LastName,
			NickName,
			PhoneNumber,
			DarkestSecret
		};

	public:

		Contact(void);
		~Contact(void);

		bool	set_contact();
		void	get_contact(int index)const;
		void	print_contact(void)const;
};

#endif
