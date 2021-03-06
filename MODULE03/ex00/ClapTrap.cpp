#include <ClapTrap.hpp>

ClapTrap::ClapTrap(void) : _name(""), _hitPoints(10), _energy(10),
_attackDamage(0) {
	std::cout << "Default constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10),
_energy(10), _attackDamage(0) {

	std::cout << "Constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const &src) {

	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

ClapTrap::~ClapTrap(void) {

	std::cout << "Destructor called" << std::endl;
	return ;
}

ClapTrap& ClapTrap::operator=(ClapTrap const &src) {

	std::cout << "Assignment operator called" << std::endl;
	if (this != &src) {
		this->_name = src._name;
		this->_hitPoints = src._hitPoints;
		this->_energy = src._energy;
		this->_attackDamage = src._attackDamage;
	}
	return *this;
}

void	ClapTrap::attack(const std::string &target) {

	if (this->_energy == 0) {
		std::cout << "ClapTrap " << this->_name <<  " not have energy enought to attack" << std::endl;
		return ;
	}
	if (this->_hitPoints == 0) {
		std::cout << "ClapTrap" << this->_name << " is died" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " <<
	this->_attackDamage << " points of damage!" << std::endl;
	this->_energy--;
}

void	ClapTrap::takeDamage(unsigned int amount) {

	std::cout << "ClapTrap " << this->_name << " take damage of " << amount << "points" << std::endl;
	this->_hitPoints = this->_hitPoints - amount;
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount) {

	if (this->_energy == 0) {
		std::cout << "ClapTrap" << this->_name << "dont have energy enogh to repair" << std::endl;
		return ;
	}
	std::cout << "Repaired " << amount << " of hit points" << std::endl;
	this->_hitPoints = this->_hitPoints + amount;
	return ;
}
