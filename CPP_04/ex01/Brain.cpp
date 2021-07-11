#include "Brain.hpp"

Brain::Brain(){

	std::cout << "Brain created" << std::endl;
}

Brain & Brain::operator=(const Brain &src){

	std::copy(src.ideas, src.ideas + 100, this->ideas);
	return (*this);
}

Brain::Brain(Brain & src){

	std::copy(src.ideas, src.ideas + 100, this->ideas);
}

Brain::~Brain(){
	std::cout << "Brain destroyed" << std::endl;
}

