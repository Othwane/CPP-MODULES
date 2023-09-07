#ifndef	PHONEBOOK_H
#define PHONEBOOK_H

#include "contact.hpp"

class	Phonebook{
	private:
			// int index;
			Contact contacts[8];
	public:
			Phonebook();
			~Phonebook();
};
#endif
