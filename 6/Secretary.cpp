#include "Secretary.h"
#include <iostream>
#include <fstream>
#include <sstream>


using namespace std;
namespace Secretary_name	/* Secretary namespace */
{
	template<class T>
	Secretary<T>::Secretary():AdministrativePersonnel<T>()
	{

	}
	template<class T>
	void Secretary<T>::drinkTea()
	{
		this->setHappiness(5);
		this->setEmp(-2);
	}
	
	template<class T>
	void Secretary<T>::submitPetition()
	{
		this->setHappiness(1);
		this->setEmp(-2);
	}
	template<class T>
	void Secretary<T>::giveLesson()
	{
		/* member function of employee class*/
		this->setHappiness(1);
		this->setEmp(5);
	}
	template<class T>
	void Secretary<T>::giveHW()
	{
		/* member function of employee class*/
		this->setHappiness(-2);
		this->setEmp(1);
	}
	template<class T>
	void Secretary<T>::makeDoc()
	{
		/* member function of employee class*/
		this->setHappiness(-2);
		this->setEmp(3);
	}
	template<class T>
	void Secretary<T>::research()
	{
		/* member function of employee class*/
		this->setHappiness(3);
		this->setEmp(4);
	}
	template<class T>
	void Secretary<T>::readHW()
	{
		/* member function of employee class*/
		this->setHappiness(-3);
		this->setEmp(2);
	}
	template<class T>
	void Secretary<T>::receivePetition()
	{
		/* member function of employee class*/
		this->setHappiness(-1);
		this->setEmp(-1);
	}
	template<class T>
	void Secretary<T>::seeSuccessfulStudent()
	{
		/* member function of employee class*/
		this->setHappiness(10);
		this->setEmp(0);
	}
	template<class T>
	void Secretary<T>::makePublish()
	{
		/* member function of employee class*/
		this->setHappiness(2);
		this->setEmp(5);
	}
	template<class T>
	void Secretary<T>::manageProcess()
	{
		/* member function of employee class*/
		this->setHappiness(-1);
		this->setEmp(2);
	}
	
	
	
}/* the end of namespace Secretary_name */


	
			