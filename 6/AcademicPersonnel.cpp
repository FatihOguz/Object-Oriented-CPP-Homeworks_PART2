#include "AcademicPersonnel.h"
#include <iostream>
#include <fstream>
#include <sstream>


using namespace std;
namespace AcademicPersonnel_name	/* AcademicPersonal namespace */
{
	template<class T>
	AcademicPersonnel<T>::AcademicPersonnel()		/* use employee constructor through inheritance*/
	{
		/*EMPTY*/
	}
			/*	OTHER FUNCTIONS */
	template<class T>
	void AcademicPersonnel<T>::drinkTea()
	{
		this->setHappiness(5);
		this->setEmp(-2);
	}
	
	template<class T>
	void AcademicPersonnel<T>::submitPetition()
	{
		this->setHappiness(1);
		this->setEmp(-2);
	}
	template<class T>
	void AcademicPersonnel<T>::giveLesson()
	{
		/* member function of employee class*/
		this->setHappiness(1);
		this->setEmp(5);
	}
	template<class T>
	void AcademicPersonnel<T>::giveHW()
	{
		/* member function of employee class*/
		this->setHappiness(-2);
		this->setEmp(1);
	}
	template<class T>
	void AcademicPersonnel<T>::makeDoc()
	{
		/* member function of employee class*/
		this->setHappiness(-2);
		this->setEmp(3);
	}
	template<class T>
	void AcademicPersonnel<T>::research()
	{
		/* member function of employee class*/
		this->setHappiness(3);
		this->setEmp(4);
	}
	template<class T>
	void AcademicPersonnel<T>::readHW()
	{
		/* member function of employee class*/
		this->setHappiness(-3);
		this->setEmp(2);
	}
	template<class T>
	void AcademicPersonnel<T>::receivePetition()
	{
		/* member function of employee class*/
		this->setHappiness(-1);
		this->setEmp(-1);
	}
	template<class T>
	void AcademicPersonnel<T>::seeSuccessfulStudent()
	{
		/* member function of employee class*/
		this->setHappiness(10);
		this->setEmp(0);
	}
	template<class T>
	void AcademicPersonnel<T>::makePublish()
	{
		/* member function of employee class*/
		this->setHappiness(2);
		this->setEmp(5);
	}
	template<class T>
	void AcademicPersonnel<T>::manageProcess()
	{
		/* member function of employee class*/
		this->setHappiness(-1);
		this->setEmp(2);
	}

	
}/* the end of namespace AcademicPersonal_name */


	
			