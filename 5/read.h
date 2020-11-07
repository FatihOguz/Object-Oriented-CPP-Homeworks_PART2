#ifndef READ_H
#define READ_H

#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
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

using namespace std;
using namespace Employee_name;
using namespace AcademicPersonnel_name;
using namespace AdministrativePersonnel_name;
using namespace Lecturer_name;
using namespace ResearchAsistant_name;
using namespace Secretary_name;
using namespace Officer_name;



void rand(int arr[],int number);
int search(int arr[],int size,int target);
void read(int arr[],Lecturer  * Lecturers,ResearchAsistant  * ResearchAsistants,Secretary  * Secretarys,Officer  * Officers,	
											int & LecturersSize,int & ResearchAsistantsSize,int  & SecretarysSize, int &  OfficersSize,University * Uni);
void init(int arr[],Lecturer  * Lecturers,ResearchAsistant  * ResearchAsistants,Secretary  * Secretarys,Officer  * Officers,	
											int LecturersSize,int  ResearchAsistantsSize,int   SecretarysSize, int   OfficersSize,University * Uni);
#endif