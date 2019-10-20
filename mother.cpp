#include "mother.h"

mother hatim::mother::operator+(mother)
{

	return;
}

hatim::mother::mother()
{
	old_child_age = 0;
	age_mother = 20;
}

hatim::mother::~mother()
{

}

/// the age is zero if there is no child () ;;

hatim::mother::mother(int age1, int age2)
{
	//if ((age1 >= 0 && age1 <= 100) && (age2 >= 0 && age2 <= 100))
	try {
		if (age1 > age2)
		{
			old_child_age = age2;
			age_mother = age1;
		}
		else
		{
			old_child_age = age1;
			age_mother = age2;
		}
	}
	catch ( )
	{

	}
}
