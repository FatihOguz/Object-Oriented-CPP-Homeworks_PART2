#include "AcademicPersonnel.h"
#include "ResearchAsistant.h"
#include <iostream>
#include <fstream>
#include <sstream>


using namespace std;
namespace ResearchAsistant_name	/* ResearchAsistant namespace */
{
	ResearchAsistant::ResearchAsistant():AcademicPersonnel()/* use constructor of  base class(academicpersonnel) */
	{

	}
	void ResearchAsistant::research()
	{
		/* member function of employee class*/
		setHappiness(3);
		setEmp(4);
	}
	void ResearchAsistant::readHW()
	{
		/* member function of employee class*/
		setHappiness(-3);
		setEmp(2);
	}
}/* end ResearchAsistant_name namespace */