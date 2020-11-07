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
		this->set_e_cont(-2);
		if(flag!=1)
		action = action + "drink tea, ";

		flag=1;

	}
	
	template<class T>
	void ResearchAsistant<T>::submitPetition()
	{
		this->setHappiness(1);
		this->setEmp(-2);
		this->set_e_cont(-2);
		if(flag1!=1)
		action = action + "submit petition, ";

		flag1=1;
	}
	template<class T>
	void ResearchAsistant<T>::giveLesson()
	{
		/* member function of employee class*/
		this->setHappiness(1);
		this->setEmp(5);
		this->set_e_cont(5);
		if(flag2!=1)
		action = action + "give lesson, ";
		flag2=1;
	}
	template<class T>
	void ResearchAsistant<T>::giveHW()
	{
		/* member function of employee class*/
		this->setHappiness(-2);
		this->setEmp(1);
		this->set_e_cont(1);
		if(flag3!=1)
		action = action + "give homewwork, ";
		flag3=1;
	}
	template<class T>
	void ResearchAsistant<T>::makeDoc()
	{
		/* member function of employee class*/
		this->setHappiness(-2);
		this->setEmp(3);
		this->set_e_cont(3);
		if(flag4!=1)
		action = action + "make document, ";
		flag4=1;
	}
	template<class T>
	void ResearchAsistant<T>::research()
	{
		/* member function of employee class*/
		this->setHappiness(3);
		this->setEmp(4);
		this->set_e_cont(4);
		if(flag5!=1)
		action = action + "research, ";
		flag5=1;
	}
	template<class T>
	void ResearchAsistant<T>::readHW()
	{
		/* member function of employee class*/
		this->setHappiness(-3);
		this->setEmp(2);
		this->set_e_cont(2);
		if(flag6!=1)
		action = action + "read homewwork, ";
		flag6=1;
	}
	template<class T>
	void ResearchAsistant<T>::receivePetition()
	{
		/* member function of employee class*/
		this->setHappiness(-1);
		this->setEmp(-1);
		this->set_e_cont(-1);
		if(flag7!=1)
		action = action + "receive petition, ";
		flag7=1;
	}
	template<class T>
	void ResearchAsistant<T>::seeSuccessfulStudent()
	{
		/* member function of employee class*/
		this->setHappiness(10);
		this->setEmp(0);
		this->set_e_cont(0);
		if(flag8!=1)
		action = action + "see successful student, ";
		flag8=1;
	}
	template<class T>
	void ResearchAsistant<T>::makePublish()
	{
		/* member function of employee class*/
		this->setHappiness(2);
		this->setEmp(5);
		this->set_e_cont(5);
		if(flag9!=1)
		action = action + "make publish, ";
		flag9=1;
	}
	template<class T>
	void ResearchAsistant<T>::manageProcess()
	{
		/* member function of employee class*/
		this->setHappiness(-1);
		this->setEmp(2);
		this->set_e_cont(2);
		if(flag10!=1)
		action = action + "manage process, ";
		flag10=1;
	}
}/* end ResearchAsistant_name namespace */