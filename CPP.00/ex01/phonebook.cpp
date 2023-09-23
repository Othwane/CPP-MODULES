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
	index = 0;
	booksize = 0;
	return;
}

Phonebook::~Phonebook(){
	return;
}

// bool	isblank_(std::string *info){
// 	for (std::string::iterator it = info->begin(); it < info->end(); it++)
// 	{
// 		if (*it != ' ')
// 			return true;
// 	}
// 	return false;
// }

void	print_messages(int msg){
	if (msg == 0)
		std::cout << "FIRST NAME :" << std::endl;
	else if (msg == 1)
		std::cout << "LAST NAME :" << std::endl;
	else if (msg == 2)
		std::cout << "NICKNAME :" << std::endl;
	else if (msg == 3)
		std::cout << "PHONE NUMBER :" << std::endl;
	else if (msg == 4)
		std::cout << "DARKEST SECRET :" << std::endl;

}

int	Phonebook::add_(int x){
	std::string info;

	if (index < 8){
		for (int i = x; i < 5; i++)
		{
			print_messages(i);
			std::getline(std::cin, info);
			if (info.empty()){
				std::cout << "empty" << std::endl;
				add_(i);
				return (-1);
			}
			int x = add_info(&info, i);
			if (x == 1){
				add_(i);
				break;
			}
			info.clear();
		}
		index++;
		if (booksize != 8)
			booksize++;
	}else {
		index = 0;
		add_();
		std::cout << index << "-" <<std::endl;
		std::cout << booksize << "-" << std::endl;
	}
	return 0;
}

int	Phonebook::add_(void){
	std::string info;

	if (index < 8){
		for (int i = 0; i < 5; i++)
		{
			print_messages(i);
			std::getline(std::cin, info);
			if (info.empty()){
				std::cout << "empty" << std::endl;
				add_(i);
				return 1;
			}
			int x = add_info(&info, i);
			if (x == 1){
				add_(i);
				return 1;
			}
			info.clear();
		}
		index++;
		if (booksize != 8)
			booksize++;
	}
	else{
		index= 0;
		add_();
	}
	std::cout << index << "--" << booksize << std::endl;
	return 0;
}

int	Phonebook::add_info(std::string *info2add, int sign){
		if (sign == 3){
			int c = info2add->find_first_not_of("+0123456789");

			if (c == -1){
				contacts[index].set_(sign, info2add);
				return 0;
			}
			else
				std::cout << "ONLY NUMBERS PLEASE !" << std::endl;
				return 1;
		}
		else{
			int c = info2add->find_first_not_of(' ');
			if (c == -1){
				std::cout << "NO SPACES PLEASE !" << std::endl;
				return 1;
			}
			else
				contacts[index].set_(sign, info2add);
		}
	return 0;
}

// void	Phonebook::del_prev(int index, int count){
// 	while (count--)
// 	{
// 		contacts[index].del_(count);
// 	}

// }

void	Phonebook::search_(void){
	for (int i = 0; i < booksize; i++)
	{
		std::cout << "----------------" << std::endl;
		contacts[i].get_();
		std::cout << "----------------" << std::endl;
	}
}
