#include "Peon.hpp"

Peon::Peon(void) { return ;}


Peon::Peon(std::string name) Victim(name) {
	std::cout<<"Zog zog."<<std::endl;
}

Peon::Peon(const Peon &obj) Victim(obj) {
	*this = obj;
	std::cout<<"Zog zog."<<std::endl;
	return ;
}

Peon::~Peon(void) {
	std::cout<<"Bleuark..."<<std::endl;
	return ;
}

void            Peon::getPolymorphed(void) const {
	std::cout<<this->getName()<<" has been turned into a pink pony !\n";
}
  