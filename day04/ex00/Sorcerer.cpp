#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void) { return; }

Sorcerer::Sorcerer(std::string name, std::string title) {
	this->_name = name;
	this->_title = title;
	std::out<<this->_name<<", "<<this->_title<<", is born !"<<std::endl;
	return;
}

Sorcerer::Sorcerer(const Sorcerer &obj) {
	*this = obj;
	std::out<<this->_name<<", "<<this->_title<<", is born !"<<std::endl;
	return;
}

Sorcerer::~Sorcerer(void) {
	std::out<<this->_name<<", "<<this->_title<<", is dead. Consequences will never be the same !"<<std::endl;
	return;
}

void            Sorcerer::setName(std::string name) {
	this->_name = name;
}

void            Sorcerer::setTitle(std::string title) {
	this->_title = title;
}

std::string     Sorcerer::getName(void) {
	return (this->_name);
}

std::string     Sorcerer::getTitle(void) {
	return (this->_title);
}

Sorcerer        &Sorcerer::operator=(Sorcerer const &obj) {
	this->_name = obj._name;
	this->_title = obj._title;
	return (*this);
}

std::ostream	&operator<<(std::ostream &out, Sorcerer const &s) {
	out << "I am "<<s.getName()<<", "<<s.getTitle()<<", and I like ponies !\n";
	return out;
}

void			Sorcerer::polymorph(Victim const &vict) const {
	vict.getPolymorphed();
}
