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
			string action_list()
			{
				return action;
			}
		private:
			string action;
			int flag=0;
			int flag1=0;
			int flag2=0;
			int flag3=0;
			int flag4=0;
			int flag5=0;
			int flag6=0;
			int flag7=0;
			int flag8=0;
			int flag9=0;
			int flag10=0;

	};
}
#endif //ResearchAssistant
