#pragma once
namespace hatim {
	class mother
	{
		int old_child_age;
		int age_mother; /// we will consider that the age of the mother is 
						/// old_child_age * 2 + 5 years
		/// if no child then default age is 20 years old
	public :
		mother operator+(mother);
		mother();
		~mother();
		mother(int, int); /// we'll take the greater as the mother's age ;
		/// and must control if it's a good number then if not we'll try to add default constructor ;;
	};

};