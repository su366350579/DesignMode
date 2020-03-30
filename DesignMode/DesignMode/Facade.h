#pragma once
#include <map>
#include <iostream>
using namespace std;
namespace DesignMode {
	enum MealType{
		Beaf = 0,
		Vegetable,
		Hanburger
	};

	class Meal {
	public:
		virtual void Deal() {};
	};

	class BeafMeal : public Meal {
	public:
		virtual void Deal()
		{
			cout << "BeafMeal::Deal" << endl;
		}
	};

	class VegetableMeal : public Meal {
	public:
		virtual void Deal()
		{
			cout << "VegetableMeal::Deal" << endl;
		}
	};

	class HanburgerMeal : public Meal {

	public:
		virtual void Deal()
		{
			cout << "HanburgerMeal::Deal" << endl;
		}
	};

	class MealMaker {
	private:
		map<MealType, Meal*>* m_mealMap;
	public:		
		MealMaker();
		void Deal(MealType t);
	};
}