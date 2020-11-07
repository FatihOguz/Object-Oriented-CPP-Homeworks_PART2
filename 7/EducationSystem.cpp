#include <iostream>
#include <fstream>
#include <sstream>
#include "EducationSystem.h"
#include "University.h"
using namespace  University_name;
using namespace std;
namespace EducationSystem_name	/* EducationSystem namespace */
{
	template<class T>
	University<T> & EducationSystem<T>::foundUni(University<T> * & uni,int &  UniSize,UniversityType uniType)=0;
	
	/* this function add lecturer,officer,researchassistant and secretary dynamically */
	template<class T>
	void EducationSystem<T>::giveJob(University<T> * Uni,UniversityType uniType,string name,
		string surname,EmployeeType emp_type,Lecturer<T> * & Lecturers,Officer<T> * & Officers,
		Secretary<T> * & Secretarys,ResearchAsistant<T> * & ResearchAsistants,int & LecturersSize,
		int  & OfficersSize, int & ResearchAsistantsSize,int & SecretarysSize)=0;
	
	
}/* the end of namespace EducationSystem_name */


	