#include "Officer.h"
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;
namespace Officer_name	/* Secretary namespace */
{
	Officer::Officer():AdministrativePersonnel()/* use constructor of  base class */
	{

	}
	void Officer::makeDoc()
	{
		/* member function of employee class*/
		setHappiness(-2);
		setEmp(3);
	}
}/* the end of namespace Secretary_name */


	
			