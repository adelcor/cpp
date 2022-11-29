/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-cor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 18:17:11 by adel-cor          #+#    #+#             */
/*   Updated: 2022/11/29 10:14:12 by adel-cor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
	private:
		std::string _ideas[100];

	public:
		Brain();
		Brain(const Brain &copy);

		virtual ~Brain();

		Brain &operator=(const Brain &src);

		const std::string getIdea(size_t i)const;
		const std::string *getIdeaAddress(size_t i)const;

		void setIdea(size_t i, std::string idea);
};
#endif

