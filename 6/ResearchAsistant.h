#ifndef RESEARCH_ASSISTANT_H
#define RESEARCH_ASSISTANT_H
#include <string>
#include "AcademicPersonnel.h"			/*header of base class */


using namespace AcademicPersonnel_name;/*namespace of baseclass*/
using namespace std;

namespace ResearchAsistant_name
{
	template<class T>
	class ResearchAsistant: public AcademicPersonnel<T>
	{
		public:
			ResearchAsistant();
						void drinkTea();
			void submitPetition();
			void giveLesson();
			void giveHW();
			void makeDoc();
			void research();
			void readHW();
			void receivePetition();
			void seeSuccessfulStudent();
			void makePublish();
			void manageProcess();
	};
}
#endif //ResearchAssistant