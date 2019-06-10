
#include "Victim.hpp"

Victim::Victim(void) { return; }

Victim::Victim(std::string name) {
	this->_name = name;
	std::cout<<"Some random victim called "<<this->_name<<" just popped !"<<std::endl;
	return;
}

Victim::Victim(const Victim &obj) {
	*this = obj;
	std::cout<<"Some random victim called "<<this->_name<<" just popped !"<<std::endl;
	return;
}

Victim::~Victim(void) {
	std::cout<<"Victim "<<this->_name<<" just died for no apparent reason !"<<std::endl;
	return;
}

void			Victim::setName(std::string name) {
	this->_name = name;
}

std::string		Victim::getName(void) const {
	return (this->_name);
}

Victim			&Victim::operator=(Victim const &obj) {
	this->_name = obj._name;
	return (*this);
}

std::ostream	&operator<<(std::ostream &out, Victim const &v) {
	out << "I'm "<<v.getName()<<", "<<" and I like otters !\n";
	return out;
}

void			Victim::getPolymorphed(void) const {
	std::cout<<this->_name<<" has been turned into a cute little sheep !"<<std::endl;
}
