
#ifndef PEON_HPP
# define PEON_HPP

# include <iostream>
# include "Peon.hpp"
# include "Victim.hpp"

class Peon : public Victim
{
	private:
		Peon(void);

	public:
		Peon(std::string name);
		Peon(const Peon &obj);
		~Peon(void);
		
		virtual void			getPolymorphed(void) const;           
};

#endif