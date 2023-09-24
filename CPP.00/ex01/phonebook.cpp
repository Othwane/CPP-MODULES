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

int	Phonebook::display_(){
	std::cout << "|==========|==========|==========|==========|" << std::endl;
	std::cout << "|     index|FIRST_NAME| LAST_NAME|  NICKNAME|" << std::endl;
	std::cout << "|__________|__________|__________|__________|" << std::endl;
	int info = -1;
	if (booksize == 0)
		std::cout << "PHONEBOOK IS EMPTY... ADD A CONTACT FIRST !" << std::endl;
	else
	{
		for (int i = 0; i < booksize; i++)
		{
			for (int ii = 0; ii < 3; ii++)
			{
				if (ii == 0){
					std::cout << "|";
					std::cout << std::setw(10);
					std::cout << i;
				}
				std::cout << "|";
				std::string contactinfo = contacts[i].get_(ii);
				if (contactinfo.length() < 10){
					std::cout << std::setw(10);
					std::cout << contacts[i].get_(ii);
				}
				else if (contactinfo.length() > 9){
					for (size_t i = 0; i < 9; i++){
						std::cout << contactinfo[i];
					}
					std::cout << '.';
				}
				else
					std::cout << contacts[i].get_(ii);
			}
			std::cout << "|" << std::endl;
			std::cout << "|__________|__________|__________|__________|" << std::endl;
		}
		std::cout << "PUT CONTACT INDEX SEARCHING FOR FROM 0 TO " << booksize << std::endl;
		std::cin >> info;
		if (info <= booksize){
			std::cout << "FIRST_NAME     :" << contacts[info].get_(0) << std::endl;
			std::cout << "LAST_NAME      :" << contacts[info].get_(1) << std::endl;
			std::cout << "NICK_NAME      :" << contacts[info].get_(2) << std::endl;
			std::cout << "PHONE_NUMBER   :" << contacts[info].get_(3) << std::endl;
			std::cout << "DARKEST_SECRET :" << contacts[info].get_(4) << std::endl;
		}
	}
	return 0;
}

void	Phonebook::add_(int x){
	std::string info;

	if (index < 8){
		for (int i = x; i < 5; i++)
		{
			print_messages(i);
			std::getline(std::cin, info);
			if (info.empty()){
				std::cout << "empty" << std::endl;
				add_(i);
				return ;
			}
			int x = add_info(&info, i);
			if (x == 1){
				add_(i);
				break;
			}
			info.clear();
			if (i == 4){
				index++;
				if (booksize < 8)
					booksize++;
			}
		}
		std::cout << index << ".." << std::endl;
		std::cout << booksize << ".." << std::endl;
		std::cout << "----------------" << std::endl;
	}else {
		index = 0;
		add_();
		std::cout << index << "**" << std::endl;
		std::cout << booksize << "**" << std::endl;
		std::cout << "----------------" << std::endl;
	}
	return ;
}

void	Phonebook::add_(void){
	std::string info;

	if (index < 8){
		for (int i = 0; i < 5; i++)
		{
			print_messages(i);
			std::getline(std::cin, info);
			if (info.empty()){
				std::cout << "TYPE SOMETHING PLEASE !" << std::endl;
				add_(i);
				return ;
			}
			int x = add_info(&info, i);
			if (x == 1){
				add_(i);
				return ;
			}
			info.clear();
			if (i == 4){
				index++;
				if (booksize < 8)
					booksize++;
			}
		}
	}
	else{
		index = 0;
		add_();
	}
	// std::cout << index << "-|-" << booksize << std::endl;
	return ;
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




int	Phonebook::search_(void){
	display_();
	return 0;
}
   