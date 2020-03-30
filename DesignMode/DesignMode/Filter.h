#pragma once
#include <iostream>
#include <list> 
using namespace std;
namespace DesignMode {
	class Car {

	private:
		string m_name;
		string m_country;
	public:
		Car(string name, string gender);
		string getName() {
			return m_name;
		}
		string getCountry() {
			return m_country;
		}
	};

	class Criteria {
	public:
		virtual list<Car> MeetCriteria(list<Car> persons) {
			list<Car> cars = list<Car>();
			return cars;
		};
	};

	class CriteriaChina : public Criteria {

	public:
		virtual list<Car> MeetCriteria(list<Car> cars);
	};

	class CriteriaJapan : public Criteria {

	public:
		virtual list<Car> MeetCriteria(list<Car> cars);
	};


}

