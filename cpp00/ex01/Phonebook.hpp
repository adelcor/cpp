/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-cor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:24:04 by adel-cor          #+#    #+#             */
/*   Updated: 2022/10/20 18:24:07 by adel-cor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define	PHONEBOOK_HPP

#include <cstring>
#include <iomanip>
#include <cstdlib>
#include "Contact.hpp"

class Phonebook
{
	private:
		Contact _contacts[8];
		int		_index;
		int	_delete;
		bool	_full;

	public:
		Phonebook(void);
		~Phonebook(void);

		void	set_information(void);
		void	get_information(void)const;
		void	show_instruction(void);
};

#endif
