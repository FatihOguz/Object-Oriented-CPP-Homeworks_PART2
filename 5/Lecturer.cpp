#include "Lecturer.h"

#include <iostream>
#include <fstream>
#include <sstream>


using namespace std;
using namespace Employee_name;
using namespace AcademicPersonnel_name;

namespace Lecturer_name
{
	Lecturer::Lecturer(string  nameVal,string  surnameVal,int pidVal,int happinessVal)
											:AcademicPersonnel(nameVal,surnameVal,pidVal,happinessVal)/* use constructor of  base class(academicpersonnel) */
	{
		/*EMPTY*/
	}
	Lecturer::Lecturer():AcademicPersonnel()/* use constructor of  base class(academicpersonnel) */
	{
		/*EMPTY*/
	}
	void Lecturer::giveLesson()
	{
		/* member function of employee class*/
		setHappiness(1);
		setEmp(5);
	}
	void Lecturer::giveHW()
	{
		/* member function of employee class*/
		setHappiness(-2);
		setEmp(1);
	}

}