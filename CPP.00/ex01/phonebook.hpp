#ifndef	PHONEBOOK_H
#define PHONEBOOK_H

#include "contact.hpp"

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
			int		add_(void);
			int		add_(int x);
			void	search_(void);
};
#endif
