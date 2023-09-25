#ifndef	PHONEBOOK_H
#define PHONEBOOK_H

#include "contact.hpp"
#include <iomanip>

class	Phonebook{
	private:
			int 	index;
			int 	booksize;
			Contact contacts[8];
			int		add_info(std::string *info2add, int sign);
			void	display_(std::string *info, int repeat);
			void	display_(std::string *info, int repeat, int empty);
	public:
			Phonebook();
			~Phonebook();
			void		add_(void);
			void		add_(int x, int repeat);
			void		search_(void);
};

#endif
