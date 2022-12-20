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

    std::cout << "MUTANTSTACK" << std::endl << std::endl;

    MutantStack<int>    mstack;
    
    mstack.push(5);
    mstack.push(17);
    
    std::cout << "TOP : " << mstack.top() << std::endl;

    mstack.pop();

    std::cout << "SIZE : " << mstack.size() << std::endl;
    
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);

    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    while(it != ite){
        std::cout << *it << std::endl;
        ++it;
    }

    std::stack<int> s(mstack);
    

    std::cout << "\nLIST" << std::endl;


    std::list<int>    list;

    list.push_back(5);
    list.push_back(17);

    std::cout << "TOP = " << list.back() << std::endl;

    list.pop_back();

    std::cout << "SIZE = " << list.size() << std::endl;

    list.push_back(3);
    list.push_back(5);
    list.push_back(737);

    list.push_back(0);

    std::list<int>::iterator itlist = list.begin();
    std::list<int>::iterator itliste = list.end();
    
    while(itlist != itliste)
    {
        std::cout << *itlist << std::endl;
        ++itlist;
    }
    
    std::list<int> s2(list);

    std::cout << "\nMUTANTSTACK reverse" << std::endl;

    MutantStack<int>::reverse_iterator rit = mstack.rbegin();
    MutantStack<int>::reverse_iterator rite = mstack.rend();


    while(rit != rite){
        std::cout << *rit << std::endl;
        ++rit;
    }

    std::cout << "\nLIST reverse" << std::endl;
    
    std::list<int>::reverse_iterator ritlist = list.rbegin();
    std::list<int>::reverse_iterator ritliste = list.rend();

   

    while(ritlist != ritliste){
        std::cout << *ritlist << std::endl;
        ++ritlist;
    }

    std::cout << "\nMUTANTSTACK const iterator" << std::endl;

    MutantStack<int>::const_iterator cit = mstack.cbegin();
    MutantStack<int>::const_iterator cite = mstack.cend();

    while (cit != cite)
    {
	    std::cout << *cit << std::endl;
	    ++cit;
    }
    
    std::cout << "\nLIST const iterator" << std::endl;

    std::list<int>::const_iterator citlist = list.cbegin();
    std::list<int>::const_iterator citliste = list.cend();

    while (citlist != citliste)
    {
	    std::cout << *citlist << std::endl;
	    ++citlist;
    }

    std::cout << "\nMUTANTSTACK const reverse iterator" << std::endl;

    MutantStack<int>::const_reverse_iterator recit = mstack.crbegin();
    MutantStack<int>::const_reverse_iterator recite = mstack.crend();

    while (recit != recite)
    {
	    std::cout << *recit << std::endl;
	    ++recit;
    }

    std::cout << "\nLIST const reverse iterator" << std::endl;

    std::list<int>::const_reverse_iterator recitlist = list.crbegin();
    std::list<int>::const_reverse_iterator recitliste = list.crend();

    while (recitlist != recitliste)
    {
	    std::cout << *recitlist << std::endl;
	    ++recitlist;
    }
    
    return 0;
}
