#include "employee.h"
#include "University.h"/* employee has a universty */
#include <iostream>
#include <fstream>
#include <sstream>


using namespace std;
namespace Employee_name	/* Employee namespace */
{
	Employee::Employee()
	{
		/* EMPTY */
		Emp = new University[1];
		happiness=0;
	}
	void Employee::GTU_Contribution(University *GTU)
	{
		Emp=GTU;
	}
	Employee::~Employee()
	{
		/* EMPTY */
		delete [] Emp ;
	}	
	Employee::Employee(string nameVal,string surnameVal,int pidVal,int happinessVal):name(nameVal), surname(surnameVal),pid(pidVal),happiness(happinessVal)
	{
		/*EMPTY*/
		happiness=0;
	}

	/*							GETTER FUNCTIONS						*/
	int Employee::getPid()
	{
		return pid;
	}
	string Employee::getName()
	{
		return name;
	}
	string Employee::getSurname()
	{
		return surname;
	}
	int Employee::getHappiness()
	{
		return happiness;
	}


	/* 							SETTER FUNCTIONS					 */

	void Employee::setPid(int pidVal)
	{
		pid=pidVal;
	}
	void Employee::setName(string nameVal)
	{
		name=nameVal;
	}
	void Employee::setSurname(string surnameVal)
	{
		surname=surnameVal;
	}
	void Employee::setHappiness(int happinessVal)
	{
		happiness=happiness+happinessVal;
	}
	void Employee::setEmp(int contributionVal)
	{
		Emp->addContribution(contributionVal);/* employee has a universty and Emp is member of Universty class */
	}
	int Employee::getEmp()
	{
		return (Emp->getContribution());/* employee has a universty and Emp is member of Universty class*/
	}


	/*********************************************OTHER FUNCTIONS****************************************************************************/
	void Employee::drinkTea()
	{
		setHappiness(5);
		setEmp(-2);
	}
	Employee* Employee::employ()
	{

	}
	void Employee::submitPetition()
	{
		setHappiness(1);
		setEmp(-2);
	}

}/* end Employee_name namespace */