/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-cor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 19:10:51 by adel-cor          #+#    #+#             */
/*   Updated: 2022/12/19 19:33:39 by adel-cor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "mutantstack.cpp"
# include <iostream>
# include <list>

int main(){

    std::cout << "MUTANTSTACK" << std::endl;

    MutantStack<int>    mstack;
	MutantStack<int>	mstack2;
	
	mstack2.push(42);
	mstack2.push(84);
    mstack.push(5);
    mstack.push(99);
	mstack.swap(mstack2);

	std::cout << "SIZE : " << mstack.size() << std::endl;

    std::cout << "TOP : " << mstack.top() << std::endl;

    mstack.pop();

    std::cout << "SIZE : " << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);

    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    std::cout << "it : " << *it << std::endl;
	std::cout << "ite : " << *ite << std::endl << std::endl;

    while(it != ite){
        std::cout << *it << std::endl;
        ++it;
    }
    

    std::cout << "\nLIST" << std::endl;


    std::list<int>    list;

    list.push_back(5);
    list.push_back(99);

    std::cout << "TOP = " << list.back() << std::endl;

    list.pop_back();

    std::cout << "Size = " << list.size() << std::endl;

    list.push_back(3);
    list.push_back(5);
    list.push_back(737);

    list.push_back(0);

    std::list<int>::iterator itlist = list.begin();
    std::list<int>::iterator itliste = list.end();

    ++itlist;
    --itlist;

    while(itlist != itliste){
        std::cout << *itlist << std::endl;
        ++itlist;
    }
    
    std::list<int> s2(list);

    std::cout << "\nMUTANTSTACK reverse" << std::endl;

    MutantStack<int>::reverse_iterator rit = mstack.rbegin();
    MutantStack<int>::reverse_iterator rite = mstack.rend();

    ++rit;
    --rit;

    while(rit != rite){
        std::cout << *rit << std::endl;
        ++rit;
    }

    std::cout << "\nLIST reverse" << std::endl;
    
    std::list<int>::reverse_iterator ritlist = list.rbegin();
    std::list<int>::reverse_iterator ritliste = list.rend();

    ++ritlist;
    --ritlist;

    while(ritlist != ritliste){
        std::cout << *ritlist << std::endl;
        ++ritlist;
    }
    

    return 0;
}
