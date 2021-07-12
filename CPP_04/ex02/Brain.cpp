#include "Brain.hpp"

Brain::Brain(){

	std::cout << "Brain created" << std::endl;
}

Brain & Brain::operator=(const Brain &src){

	std::copy(src.ideas, src.ideas + IDEAS_CAPACITY, this->ideas);
	return (*this);
}

Brain::Brain(Brain & src){
	
	std::copy(src.ideas, src.ideas + IDEAS_CAPACITY, this->ideas);
}

Brain::~Brain(){
	std::cout << "Brain destroyed" << std::endl;
}

std::string*	Brain::getIdeas() {
	
	return this->ideas;
}

void	Brain::setIdeas(std::string idea){

	for (int i = 0; i < IDEAS_CAPACITY; i++)
		this->ideas[i] = idea;
}

