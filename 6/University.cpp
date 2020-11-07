#include "University.h"
#include <iostream>
#include <fstream>
#include <sstream>


using namespace std;
namespace University_name
{
	template<class T>
	University<T>::University()
	{
		/*EMPTY*/
		contribution=0;/*initalized*/
	}
	template<class T>
	University<T>::University(T contributionVal):contribution(contributionVal)
	{
		/*EMPTY*/
	}
	template<class T>
	University<T>::University(University<T> & GTU)/*copy constructor*/
	{
		contribution=GTU.getContribution();
	}
	template<class T>
	University<T>::~University()/*destructor*/
	{
		
	}
	template<class T>
	University<T> & University<T>::operator=(const University<T> & rightSide)/* assignment operator */
	{
		contribution=rightSide.getContribution();
	}
	template<class T>
	void University<T>::setContribution(T contributionVal)
	{
		contribution = contributionVal;
	}
	template<class T>
	void University<T>::addContribution(T contributionVal)
	{
		contribution=contribution+contributionVal;
	}
	template<class T>
	T University<T>::getContribution() const
	{
		return contribution;
	}

}