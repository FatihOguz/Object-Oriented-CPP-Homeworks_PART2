#ifndef YOK_H
#define YOK_H
#include <string>
#include "employee.h"
#include "ResearchAsistant.h"
#include "AcademicPersonnel.h"
#include "AdministrativePersonnel.h"
#include "Lecturer.h"
#include "Secretary.h"
#include "Officer.h"
	

using namespace std;
using namespace Employee_name;
using namespace AcademicPersonnel_name;
using namespace AdministrativePersonnel_name;
using namespace Lecturer_name;
using namespace ResearchAsistant_name;
using namespace Secretary_name;
using namespace Officer_name;

enum UniversityType 
{   Uresearch,Ulinguistic,Utechnical};
enum EmployeeType
{Emp_Lecturer,Emp_Officer,Emp_ResearchAsistant,Emp_Secretary};


namespace Yok_name
{
	template<class T>
	class Yok
	{
		public:
		University<T>& foundUni(University<T> * & uni,int &  UniSize,UniversityType uniType);
		void giveJob(University<T> * Uni,UniversityType uniType,string name,string surname,EmployeeType emp_type,Lecturer<T> * & Lecturers,Officer<T> * & Officers,Secretary<T> * & Secretarys,ResearchAsistant<T> * & ResearchAsistants,int & LecturersSize,int  & OfficersSize, int & ResearchAsistantsSize,int & SecretarysSize);
		
		
	};

}/* the end of namespace */


#endif/* the end of header */