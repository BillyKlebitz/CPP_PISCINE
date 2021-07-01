#ifndef CONTACT_H
# define CONTACT_H

# include "my_awesome_phonebook.hpp"

class Contact {

	public:
	
		Contact ( void );
		~Contact ( void );
		void	AddInfo ( void );	
		void	PrintInfo ( bool fool );	
		
		std::string	getFirstName ( void );
		std::string	getLastName ( void );
		std::string	getNickName ( void );
		std::string	getPhoneNumber ( void );
		std::string	getDarkestSecret ( void );
		void	setFirstName ( void );
		void	setLastName ( void );
		void	setNickName ( void );
		void	setPhoneNumber ( void );
		void	setDarkestSecret ( void );
		
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;

};

#endif
