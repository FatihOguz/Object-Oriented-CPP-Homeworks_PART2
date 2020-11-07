#include "AcademicPersonnel.h"
#include <iostream>
#include <fstream>
#include <sstream>


using namespace std;
namespace AcademicPersonnel_name	/* AcademicPersonal namespace */
{

	AcademicPersonnel::AcademicPersonnel():Employee()		/* use employee constructor through inheritance*/
	{
		/*EMPTY*/
	}
	AcademicPersonnel::AcademicPersonnel(string nameVal,string surnameVal,int pidVal,int happinessVal,string seminarVal,string academicPaperVal)
										:Employee(nameVal,surnameVal,pidVal,happinessVal),seminar(seminarVal),academicPaper(academicPaperVal)/* use employee constructor through inheritance*/
	{
		/*EMPTY*/
	}
	AcademicPersonnel::AcademicPersonnel(string  nameVal,string  surnameVal,int pidVal,int happinessVal):Employee(nameVal,surnameVal,pidVal,happinessVal)
	{

	}
	/*	GETTER FUNCTIONS	*/
	string AcademicPersonnel::getSeminar()
	{
		return seminar;
	}
	string AcademicPersonnel::getAcademicPaper()
	{
		return academicPaper;
	}
			/*	SETTER FUNCTIONS */
	void AcademicPersonnel::setSeminar(string seminarVal)
	{
		seminar=seminarVal;
	}
	void AcademicPersonnel::setAcademicPaper(string academicPaperVal)
	{
		academicPaper=academicPaperVal;
	}
			/*	OTHER FUNCTIONS */
	void AcademicPersonnel::seeSuccessfulStudent()
	{
		/* member function of employee class*/
		setHappiness(10);
		setEmp(0);
	}
	void AcademicPersonnel::makePublish()
	{
		/* member function of employee class*/
		setHappiness(2);
		setEmp(5);
	}

	
}/* the end of namespace AcademicPersonal_name */


	
			