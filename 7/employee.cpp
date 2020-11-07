#include "employee.h"
#include "University.h"/* employee has a universty */
#include <iostream>
#include <fstream>
#include <sstream>


using namespace std;
namespace Employee_name	/* Employee namespace */
{template<class T>
	Employee<T>::Employee()
	{
		/* EMPTY */
		Emp = new University<T>[1];
		happiness=0;
	}template<class T>
	void Employee<T>::GTU_Contribution(University<T> *GTU)
	{
		//Emp=GTU;
	}template<class T>
	Employee<T>::~Employee()
	{
		/* EMPTY */
		delete [] Emp ;
	}template<class T>	
	Employee<T>::Employee(string nameVal,string surnameVal,int pidVal,int happinessVal):name(nameVal), surname(surnameVal),pid(pidVal),happiness(happinessVal)
	{
		/*EMPTY*/
		happiness=0;
	}

	/*							GETTER FUNCTIONS						*/
	template<class T>
	int Employee<T>::getPid()
	{
		return pid;
	}
	template<class T>
	string Employee<T>::getName()
	{
		return name;
	}template<class T>
	string Employee<T>::getSurname()
	{
		return surname;
	}template<class T>
	int Employee<T>::getHappiness()
	{
		return happiness;
	}


	/* 							SETTER FUNCTIONS					 */
template<class T>
	void Employee<T>::setPid(int pidVal)
	{
		pid=pidVal;
	}
	template<class T>
	void Employee<T>::setName(string nameVal)
	{
		name=nameVal;
	}
	template<class T>
	void Employee<T>::setSurname(string surnameVal)
	{
		surname=surnameVal;
	}
	template<class T>
	void Employee<T>::setHappiness(int happinessVal)
	{
		happiness=happiness+happinessVal;
	}
	template<class T>
	void Employee<T>::setEmp(int contributionVal)
	{
		Emp->addContribution(contributionVal);/* employee has a universty and Emp is member of Universty class */
	}
	template<class T>
	int Employee<T>::getEmp()
	{
		return (Emp->getContribution());/* employee has a universty and Emp is member of Universty class*/
	}
	template<class T>
	Employee<T>* Employee<T>::employ(University<T> *GTU,int size)			/* 3 üni for addres****************************sum of contribution */
	{
		Emp = &GTU[size];
	}

	/*********************************************OTHER FUNCTIONS****************************************************************************/
	template<class T>
	void Employee<T>::drinkTea()
	{
		setHappiness(5);
		setEmp(-2);
	}
	
	template<class T>
	void Employee<T>::submitPetition()
	{
		setHappiness(1);
		
		setEmp(-2);
	}
	template<class T>
	void Employee<T>::giveLesson()
	{
		/* member function of employee class*/
		setHappiness(1);
		setEmp(5);
	}
	template<class T>
	void Employee<T>::giveHW()
	{
		/* member function of employee class*/
		setHappiness(-2);
		setEmp(1);
	}
	template<class T>
	void Employee<T>::makeDoc()
	{
		/* member function of employee class*/
		setHappiness(-2);
		setEmp(3);
	}
	template<class T>
	void Employee<T>::research()
	{
		/* member function of employee class*/
		setHappiness(3);
		setEmp(4);
	}
	template<class T>
	void Employee<T>::readHW()
	{
		/* member function of employee class*/
		setHappiness(-3);
		setEmp(2);
	}
	template<class T>
	void Employee<T>::receivePetition()
	{
		/* member function of employee class*/
		setHappiness(-1);
		setEmp(-1);
	}
	template<class T>
	void Employee<T>::seeSuccessfulStudent()
	{
		/* member function of employee class*/
		setHappiness(10);
		setEmp(0);
	}
	template<class T>
	void Employee<T>::makePublish()
	{
		/* member function of employee class*/
		setHappiness(2);
		setEmp(5);
	}
	template<class T>
	void Employee<T>::manageProcess()
	{
		/* member function of employee class*/
		setHappiness(-1);
		setEmp(2);
	}
}/* end Employee_name namespace */