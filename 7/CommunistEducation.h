#ifndef COMMUNIST_EDUCATION_SYSTEM_H
#define COMMUNIST_EDUCATION_SYSTEM_H
#include <string>
#include "employee.h"
#include "ResearchAsistant.h"
#include "AcademicPersonnel.h"
#include "AdministrativePersonnel.h"
#include "Lecturer.h"
#include "Secretary.h"
#include "Officer.h"
#include "EducationSystem.h"
	

using namespace std;
using namespace Employee_name;
using namespace AcademicPersonnel_name;
using namespace AdministrativePersonnel_name;
using namespace Lecturer_name;
using namespace ResearchAsistant_name;
using namespace Secretary_name;
using namespace Officer_name;
using namespace EducationSystem_name;




namespace CommunistEducation_name
{
	template<class T>
	class CommunistEducation : public EducationSystem<T>
	{

		public:
		University<T>& foundUni(University<T> * & uni,int &  UniSize,UniversityType uniType);
		void giveJob(University<T> * Uni,UniversityType uniType,string name,string surname,EmployeeType emp_type,Lecturer<T> * & Lecturers,Officer<T> * & Officers,Secretary<T> * & Secretarys,ResearchAsistant<T> * & ResearchAsistants,int & LecturersSize,int  & OfficersSize, int & ResearchAsistantsSize,int & SecretarysSize);
		
		
	};

}/* the end of namespace */


#endif/* the end of header */