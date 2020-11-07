#include "Officer.h"
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;
namespace Officer_name	/* Secretary namespace */
{
	template<class T>
	Officer<T>::Officer():AdministrativePersonnel<T>()/* use constructor of  base class */
	{

	}
	template<class T>
	void Officer<T>::drinkTea()
	{
		this->setHappiness(5);
		this->setEmp(-2);
	}
	
	template<class T>
	void Officer<T>::submitPetition()
	{
		this->setHappiness(1);
		this->setEmp(-2);
	}
	template<class T>
	void Officer<T>::giveLesson()
	{
		/* member function of employee class*/
		this->setHappiness(1);
		this->setEmp(5);
	}
	template<class T>
	void Officer<T>::giveHW()
	{
		/* member function of employee class*/
		this->setHappiness(-2);
		this->setEmp(1);
	}
	template<class T>
	void Officer<T>::makeDoc()
	{
		/* member function of employee class*/
		this->setHappiness(-2);
		this->setEmp(3);
	}
	template<class T>
	void Officer<T>::research()
	{
		/* member function of employee class*/
		this->setHappiness(3);
		this->setEmp(4);
	}
	template<class T>
	void Officer<T>::readHW()
	{
		/* member function of employee class*/
		this->setHappiness(-3);
		this->setEmp(2);
	}
	template<class T>
	void Officer<T>::receivePetition()
	{
		/* member function of employee class*/
		this->setHappiness(-1);
		this->setEmp(-1);
	}
	template<class T>
	void Officer<T>::seeSuccessfulStudent()
	{
		/* member function of employee class*/
		this->setHappiness(10);
		this->setEmp(0);
	}
	template<class T>
	void Officer<T>::makePublish()
	{
		/* member function of employee class*/
		this->setHappiness(2);
		this->setEmp(5);
	}
	template<class T>
	void Officer<T>::manageProcess()
	{
		/* member function of employee class*/
		this->setHappiness(-1);
		this->setEmp(2);
	}

}/* the end this-> of namespace Secretary_name */


	
			