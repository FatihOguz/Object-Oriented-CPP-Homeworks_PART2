#include "Lecturer.h"

#include <iostream>
#include <fstream>
#include <sstream>


using namespace std;
using namespace Employee_name;
using namespace AcademicPersonnel_name;

namespace Lecturer_name
{
	template<class T>
	Lecturer<T>::Lecturer()/* use constructor of  base class(academicpersonnel) */
	{
		/*EMPTY*/
	}
	template<class T>
	void Lecturer<T>::drinkTea()
	{
		this->setHappiness(5);
		this->setEmp(-2);
	}
	
	template<class T>
	void Lecturer<T>::submitPetition()
	{
		this->setHappiness(1);
		this->setEmp(-2);
	}
	template<class T>
	void Lecturer<T>::giveLesson()
	{
		/* member function of employee class*/
		this->setHappiness(1);
		this->setEmp(5);
	}
	template<class T>
	void Lecturer<T>::giveHW()
	{
		/* member function of employee class*/
		this->setHappiness(-2);
		this->setEmp(1);
	}
	template<class T>
	void Lecturer<T>::makeDoc()
	{
		/* member function of employee class*/
		this->setHappiness(-2);
		this->setEmp(3);
	}
	template<class T>
	void Lecturer<T>::research()
	{
		/* member function of employee class*/
		this->setHappiness(3);
		this->setEmp(4);
	}
	template<class T>
	void Lecturer<T>::readHW()
	{
		/* member function of employee class*/
		this->setHappiness(-3);
		this->setEmp(2);
	}
	template<class T>
	void Lecturer<T>::receivePetition()
	{
		/* member function of employee class*/
		this->setHappiness(-1);
		this->setEmp(-1);
	}
	template<class T>
	void Lecturer<T>::seeSuccessfulStudent()
	{
		/* member function of employee class*/
		this->setHappiness(10);
		this->setEmp(0);
	}
	template<class T>
	void Lecturer<T>::makePublish()
	{
		/* member function of employee class*/
		this->setHappiness(2);
		this->setEmp(5);
	}
	template<class T>
	void Lecturer<T>::manageProcess()
	{
		/* member function of employee class*/
		this->setHappiness(-1);
		this->setEmp(2);
	}

}