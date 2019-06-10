
#include "Victim.hpp"

Victim::Victim(void) { return; }

Victim::Victim(std::string name) {
	this->_name = name;
	std::out<<"Some random victim called "<<this->_name<<" just popped !"<<std::endl;
	return;
}

Victim::Victim(const Victim &obj) {
	*this = obj;
	std::out<<"Some random victim called "<<this->_name<<" just popped !"<<std::endl;
	return;
}

Victim::~Victim(void) {
	std::out<<"Victim "<<this->_name<<" just died for no apparent reason !"<<std::endl;
	return;
}

void            Victim::setName(std::string name) {
	this->_name = name;
}

std::string     Victim::getName(void) {
	return (this->_name);
}

Victim        &Victim::operator=(Victim const &obj) {
	this->_name = obj._name;
}

std::ostream	&operator<<(std::ostream &out, Victim const &s) {
	out << "I'm "<<s.getName()<<", "<<" and I like otters !\n";
	return out;
}

void            Victim::getPolymorphed(void) const {
	std::out<<this->_name<<" has been turned into a cute little sheep !"<<std::endl;
}
