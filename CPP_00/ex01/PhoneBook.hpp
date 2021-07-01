
#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "my_awesome_phonebook.hpp"
# include <string>

class PhoneBook {

	public:
		PhoneBook ();
		void AddContact ();
		void SearchContact ();

	private:
		Contact	contacts[8];
		int		number_of_last;
		int		number_of_oldest;
};

#endif
