#include "easyfind.hpp"

int main(){

	std::list<int> ilist;
	ilist.push_back(1);
	ilist.push_back(2);
	ilist.push_back(3);
	if(easyfind(ilist,4) != ilist.end())
		std::cout << "yep" << std::endl;
	else
		std::cout << "no" << std::endl;
}
