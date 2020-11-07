#ifndef READ2_H
#define READ2_H
#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <ctime>       /* time */
#include <fstream>
#include <sstream>
#include <string>
#include <cstdlib>



using namespace std;


struct person
{
	string name;
	string surname;
};

void rand(int arr[],int number);
void init6(int arr[],int arr1[],int arr2[],person  p[]);
void rand(int arr[],int arr1[],int arr2[],int number);
int search(int arr[],int size,int target,int & index);


#endif