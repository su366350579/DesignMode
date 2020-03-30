#include "Filter.h"
using namespace DesignMode;

Car::Car(string name, string country)
{
	m_name = name;
	m_country = country;
}

list<Car> CriteriaChina::MeetCriteria(list<Car> cars)
{
	list<Car> chinaCar = list<Car>();
	for (list<Car>::iterator i = cars.begin(); i != cars.end(); ++i)
	{
		if (i->getCountry() == "China")
		{
			chinaCar.push_back(*i);
		}
	}
	return chinaCar;
}

list<Car> CriteriaJapan::MeetCriteria(list<Car> cars)
{
	list<Car> chinaCar = list<Car>();
	for (list<Car>::iterator i = cars.begin(); i != cars.end(); ++i)
	{
		if (i->getCountry() == "Japan")
		{
			chinaCar.push_back(*i);
		}
	}
	return chinaCar;
}
