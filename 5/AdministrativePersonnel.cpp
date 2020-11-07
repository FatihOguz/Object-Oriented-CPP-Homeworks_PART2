
#include "AdministrativePersonnel.h"
#include <iostream>
#include <fstream>
#include <sstream>


using namespace std;
using namespace  Employee_name;
namespace AdministrativePersonnel_name
{
	AdministrativePersonnel::AdministrativePersonnel(string  nameVal,string  surnameVal,int pidVal,int happinessVal)
											:Employee(nameVal, surnameVal, pidVal, happinessVal)/* use employee constructor through inheritance*/
	{
		/*EMPTY*/
	}
	AdministrativePersonnel::AdministrativePersonnel():Employee()/* use employee constructor through inheritance*/
	{
		/*EMPTY*/
	}
	void AdministrativePersonnel::manageProcess()
	{
		/* member function of employee class*/
		setHappiness(-1);
		setEmp(2);
	}

}