#include "Secretary.h"
#include <iostream>
#include <fstream>
#include <sstream>


using namespace std;
namespace Secretary_name	/* Secretary namespace */
{
	Secretary::Secretary():AdministrativePersonnel()
	{

	}
	void Secretary::receivePetition()
	{
		/* member function of employee class*/
		setHappiness(-1);
		setEmp(-1);
	}
	
	
}/* the end of namespace Secretary_name */


	
			