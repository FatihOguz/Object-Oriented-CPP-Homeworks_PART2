#ifndef ACADEMIC_PERSONNEL_H
#define ACADEMIC_PERSONNEL_H
#include <string>
#include "employee.h"	/*HEADER OF İNHERİTANCE CLASS(BASE CLASS) */

using namespace std;
using namespace Employee_name;		/* base class namespace */
namespace AcademicPersonnel_name
{
	class AcademicPersonnel :public Employee   /*İNHERİTANCE*/
	{
		public:
			/*	Constructors */
			AcademicPersonnel();
			AcademicPersonnel(string nameVal,string surnameVal,int pidVal,int happinessVal,string seminarVal,string academicPaperVal);
			AcademicPersonnel(string  nameVal,string  surnameVal,int pidVal,int happinessVal);
			/*	GETTER FUNCTIONS	*/
			string getSeminar();
			string getAcademicPaper();
			/*	SETTER FUNCTIONS */
			void setSeminar(string seminarVal);
			void setAcademicPaper(string academicPaperVal);
			/*	OTHER FUNCTIONS */
			void seeSuccessfulStudent();
			void makePublish();
		private:
			string seminar;
			string academicPaper;
	};

}/* the end of namespace */


#endif/* the end of header */