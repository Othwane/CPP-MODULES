#include "phonebook.hpp"

Phonebook::Phonebook(){
	std::cout<< "		! ~ <#.~       # ~ ! ~ <# .~!  ~ <# . ~ * ^ .  ! ~ <# .~    *   %+! ~ <  .~   ! ~ <#.~! ~ <# .~" << std::endl;
	std::cout<< "		. .  ! ~ <# .~  *.  @  0                *      *       *       0   ! ~  # .~ ! ~ <#  ~! ~ <# .~" << std::endl;
	std::cout<< "		!    ~ <# .~    ~ <    ..~  M Y   A W E S O M E  P H O N E B O O K  ! ~ <# .~  ! ~ <# .~  *.  ~" << std::endl;
	std::cout<< "		0    <   ~ < ! ~ <# .~            USAGE:                                     ! ~ <# .~      `  " << std::endl;
	std::cout<< "		! x  .~! ~ <# .~   # .~   ?  ADD:          NEW CONTACT               *      ! ~ <# .~      *  0" << std::endl;
	std::cout<< "		!    # .~     0  ..~       SEARCH:      DISPLAY  A CONTACT     ..~! ~ <# .~  ! ~ <    ! ~ <# .~" << std::endl;
	std::cout<< "		@  ! ~#  ..~ ! ~<# .~  *. `  EXIT:        QUIT PHONEBOOK   `  @  ! ~  < #  . ~   :~! ~ <# .~  @" << std::endl;
	std::cout<< "		! ! ~ <# .~  *.≥@  ..~    ~     *           *            `   ! ~ <# .~  0    o .     '! ~ <# .~" << std::endl;
	std::cout<< "		! ~ <# .~ @  ! ~ <#  ! ~     <# .~  x         `    `   *         ..~  `      ! ~  ! ~ <# .~  {'" << std::endl;
	std::cout<< "		*      x    ..~                 `   *      `   ` *      `           0  ..~  ..~  '~! ~ <# .~  '" << std::endl;
	std::cout<< "		! ~ <#.~      # ~ ! ~ <# .~!  ~ <# . ~ * ^ .  ! ~ <# .~    *   %+! ~ <  .~  PHONEBOOK.! ~ <# .~" << std::endl<<std::endl;
	return;
}

Phonebook::~Phonebook(){
	return;
}

void	Phonebook::add_(void){
	std::cout << "Adding..." << std::endl;
}

void	Phonebook::search_(void){
	std::cout << "searching..." << std::endl;
}
