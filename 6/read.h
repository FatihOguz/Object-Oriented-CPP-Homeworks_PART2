#ifndef READ_H
#define READ_H

#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <ctime>       /* time */
#include <fstream>
#include <sstream>
#include <string>
#include <cstdlib>
#include "ResearchAsistant.h"
#include "employee.h"
#include "AcademicPersonnel.h"
#include "AdministrativePersonnel.h"
#include "Lecturer.h"
#include "Secretary.h"
#include "Officer.h"
#include "read2.h"

using namespace std;
using namespace Employee_name;
using namespace AcademicPersonnel_name;
using namespace AdministrativePersonnel_name;
using namespace Lecturer_name;
using namespace ResearchAsistant_name;
using namespace Secretary_name;
using namespace Officer_name;

template<class T>
void read(int arr[],Lecturer<T>  * Lecturers,ResearchAsistant<T>  * ResearchAsistants,Secretary<T>  * Secretarys,Officer<T>  * Officers,	
											int & LecturersSize,int & ResearchAsistantsSize,int  & SecretarysSize, int &  OfficersSize,University<T> * Uni);
template<class T>
void init(int arr[],Lecturer<T>  * Lecturers,ResearchAsistant<T>  * ResearchAsistants,Secretary<T>  * Secretarys,Officer<T>  * Officers,	
											int LecturersSize,int  ResearchAsistantsSize,int   SecretarysSize, int   OfficersSize,University<T> * Uni);
template<class T>
void action(Lecturer<T>  * Lecturers,ResearchAsistant<T>  * ResearchAsistants,Secretary<T>  * Secretarys,Officer<T>  * Officers,	
											int LecturersSize,int  ResearchAsistantsSize,int   SecretarysSize, int   OfficersSize,int random);
#endif