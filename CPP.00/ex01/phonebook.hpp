#ifndef	PHONEBOOK_H
#define PHONEBOOK_H

#include "contact.hpp"
#include <iomanip>

class	Phonebook{
	private:
			int index;
			int booksize;
			Contact contacts[8];
			int	add_info(std::string *info2add, int sign);
			// void del_prev(int index, int count);
	public:
			Phonebook();
			~Phonebook();
			void		add_(void);
			void		add_(int x);
			int	search_(void);
			int display_();
};
#endif
