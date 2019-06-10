#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>
# include "Victim.hpp"

class Victim
{
	private:
		Victim(void);             //Still following Coplien's form. Not allowing the use of this constructor by keeping it private.
		std::string		_name;

	public:
		Victim(std::string name);
		Victim(const Victim &obj);
		~Victim(void);
		void			setName(std::string name);
		std::string		getName(void);
		Victim			&operator=(Victim const &obj);
		virtual void	getPolymorphed(void);           // virtual so that Peon can inherit Victim, but can override this function
};

//outputstream - afterwards because we need Victim to be defined.
std::ostream	&operator<<(std::ostream &out, Victim const &v);

#endif