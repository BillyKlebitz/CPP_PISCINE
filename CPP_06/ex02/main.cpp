#include <iostream>
#include <cstdlib>

class Base{

	public:
		virtual ~Base(){};

};

class A: public Base{};
class B: public Base{};
class C: public Base{};

Base * generate(void){
	
	std::srand(std::time(nullptr));
	int random_var = std::rand();
	if(random_var % 3 == 0)
		return new A();
	else if (random_var % 3 == 1)
		return new B();
	else
		return new C();
}


void identify(Base* p){

	Base* res = dynamic_cast<A*>(p);
	if (res == NULL)
	{
		res = dynamic_cast<B*>(p);
		if (res == NULL)
		{
			res = dynamic_cast<C*>(p);
			if (res == NULL)
				std::cout << "NO SUCH TYPE!!!!!" << std::endl;
			else
				std::cout << "ITS C!!!!!" << std::endl;
		}
		else
			std::cout << "ITS B!!!!!" << std::endl;

	}
	else
		std::cout << "ITS A!!!!!" << std::endl;
	
}

void identify(Base& p){

	try{
		Base res = dynamic_cast<A&>(p);
		std::cout << "ITS A!!!!!" << std::endl;
	}
	catch(std::bad_cast)
	{
		try{
			Base res = dynamic_cast<B&>(p);
			std::cout << "ITS B!!!!!" << std::endl;
		}
		catch(std::bad_cast)
		{
			try{
				Base res = dynamic_cast<C&>(p);
				std::cout << "ITS C!!!!!" << std::endl;
			}
			catch(std::bad_cast)
			{
				std::cout << "NO SUCH TYPE!!!!!" << std::endl;
			}
		}
	}
}



int main()
{
	Base *bob = generate();
	identify(bob);
	identify(*bob);
}
