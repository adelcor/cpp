/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-cor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 18:05:00 by adel-cor          #+#    #+#             */
/*   Updated: 2022/12/15 19:08:13 by adel-cor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Span
{
	private:
		std::vector<int> _vault;
		unsigned int	_size;
		Span(void);

	public:
		Span(unsigned int n);
		~Span();
		Span(&&src);
		Span &operator=(const Span &src);



