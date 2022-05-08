#ifndef ANIMAL_HPP 
# define ANIMAL_HPP 

#include <iostream>

class Animal {
	protected:
		std::string type;
	
	public:
		Animal(void);
		Animal(Animal const &src);
		Animal& operator=(Animal const &src);
		~Animal(void);

		virtual std::string	getType(void) const;
		virtual void		makeSound(void) const;
};
#endif