
#include "AdministrativePersonnel.h"
#include <iostream>
#include <fstream>
#include <sstream>


using namespace std;
using namespace  Employee_name;
namespace AdministrativePersonnel_name
{
	template<class T>
	AdministrativePersonnel<T>::AdministrativePersonnel(string  nameVal,string  surnameVal,int pidVal,int happinessVal)
											:Employee<T>(nameVal, surnameVal, pidVal, happinessVal)/* use employee constructor through inheritance*/
	{
		/*EMPTY*/
	}
	template<class T>
	AdministrativePersonnel<T>::AdministrativePersonnel():Employee<T>()/* use employee constructor through inheritance*/
	{
		/*EMPTY*/
	}
	template<class T>
	void AdministrativePersonnel<T>::drinkTea()
	{
		this->setHappiness(5);
		this->setEmp(-2);
	}
	
	template<class T>
	void AdministrativePersonnel<T>::submitPetition()
	{
		this->setHappiness(1);
		this->setEmp(-2);
	}
	template<class T>
	void AdministrativePersonnel<T>::giveLesson()
	{
		/* member function of employee class*/
		this->setHappiness(1);
		this->setEmp(5);
	}
	template<class T>
	void AdministrativePersonnel<T>::giveHW()
	{
		/* member function of employee class*/
		this->setHappiness(-2);
		this->setEmp(1);
	}
	template<class T>
	void AdministrativePersonnel<T>::makeDoc()
	{
		/* member function of employee class*/
		this->setHappiness(-2);
		this->setEmp(3);
	}
	template<class T>
	void AdministrativePersonnel<T>::research()
	{
		/* member function of employee class*/
		this->setHappiness(3);
		this->setEmp(4);
	}
	template<class T>
	void AdministrativePersonnel<T>::readHW()
	{
		/* member function of employee class*/
		this->setHappiness(-3);
		this->setEmp(2);
	}
	template<class T>
	void AdministrativePersonnel<T>::receivePetition()
	{
		/* member function of employee class*/
		this->setHappiness(-1);
		this->setEmp(-1);
	}
	template<class T>
	void AdministrativePersonnel<T>::seeSuccessfulStudent()
	{
		/* member function of employee class*/
		this->setHappiness(10);
		this->setEmp(0);
	}
	template<class T>
	void AdministrativePersonnel<T>::makePublish()
	{
		/* member function of employee class*/
		this->setHappiness(2);
		this->setEmp(5);
	}
	template<class T>
	void AdministrativePersonnel<T>::manageProcess()
	{
		/* member function of employee class*/
		this->setHappiness(-1);
		this->setEmp(2);
	}

}