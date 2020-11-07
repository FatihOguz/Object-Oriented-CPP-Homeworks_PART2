#include "AcademicPersonnel.h"
#include "ResearchAsistant.h"
#include <iostream>
#include <fstream>
#include <sstream>


using namespace std;
namespace ResearchAsistant_name	/* ResearchAsistant namespace */
{
	template<class T>
	ResearchAsistant<T>::ResearchAsistant():AcademicPersonnel<T>()/* use constructor of  base class(academicpersonnel) */
	{

	}
	template<class T>
	void ResearchAsistant<T>::drinkTea()
	{
		this->setHappiness(5);
		this->setEmp(-2);
	}
	
	template<class T>
	void ResearchAsistant<T>::submitPetition()
	{
		this->setHappiness(1);
		this->setEmp(-2);
	}
	template<class T>
	void ResearchAsistant<T>::giveLesson()
	{
		/* member function of employee class*/
		this->setHappiness(1);
		this->setEmp(5);
	}
	template<class T>
	void ResearchAsistant<T>::giveHW()
	{
		/* member function of employee class*/
		this->setHappiness(-2);
		this->setEmp(1);
	}
	template<class T>
	void ResearchAsistant<T>::makeDoc()
	{
		/* member function of employee class*/
		this->setHappiness(-2);
		this->setEmp(3);
	}
	template<class T>
	void ResearchAsistant<T>::research()
	{
		/* member function of employee class*/
		this->setHappiness(3);
		this->setEmp(4);
	}
	template<class T>
	void ResearchAsistant<T>::readHW()
	{
		/* member function of employee class*/
		this->setHappiness(-3);
		this->setEmp(2);
	}
	template<class T>
	void ResearchAsistant<T>::receivePetition()
	{
		/* member function of employee class*/
		this->setHappiness(-1);
		this->setEmp(-1);
	}
	template<class T>
	void ResearchAsistant<T>::seeSuccessfulStudent()
	{
		/* member function of employee class*/
		this->setHappiness(10);
		this->setEmp(0);
	}
	template<class T>
	void ResearchAsistant<T>::makePublish()
	{
		/* member function of employee class*/
		this->setHappiness(2);
		this->setEmp(5);
	}
	template<class T>
	void ResearchAsistant<T>::manageProcess()
	{
		/* member function of employee class*/
		this->setHappiness(-1);
		this->setEmp(2);
	}
}/* end ResearchAsistant_name namespace */