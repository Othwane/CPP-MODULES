#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>

class	Contact{
	private:
			std::string	first_name;
			std::string last_name;
			std::string nick_name;
			std::string	phone_nunber;
			std::string darkest_secret;
	public:
			Contact();
			~Contact();
			std::string	get_(int sign);
			void		set_(int sign, std::string *info);
			void		del_(int count);
			int			how_many_spaces_nedded(int sign);

};


#endif
