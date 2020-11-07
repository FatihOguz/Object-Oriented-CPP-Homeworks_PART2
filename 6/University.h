#ifndef UNIVERSITY_H
#define UNIVERSITY_H//#include "yok.h"
#include <string>

using namespace std;
//using namespace Yok_name;


namespace University_name
{
	template<class T>
	class University 
	{
		public:
			/* Constructors */
			University();
			University(T contributionVal);
			~University();
			University(University<T> & GTU);
			University<T> & operator=(const University<T> & rightSide);
			void setContribution(T contribution);
			T getContribution() const;
			void addContribution(T contributionVal);
			void setName(string nameVal){name=nameVal;}
			string getName() const {return name;}
		private:
			T contribution;
			string name;
	};

}
#endif // UNIVERSITY_H