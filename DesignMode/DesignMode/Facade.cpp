#include "Facade.h"

DesignMode::MealMaker::MealMaker()
{
	m_mealMap = new map<MealType, Meal*>();
	pair<MealType, Meal*> value1(Beaf, new BeafMeal());
	m_mealMap->insert(value1);
	pair<MealType, Meal*> value2(Vegetable, new VegetableMeal());
	m_mealMap->insert(value2);
	pair<MealType, Meal*> value3(Hanburger, new HanburgerMeal());
	m_mealMap->insert(value3);
}

void DesignMode::MealMaker::Deal(MealType t)
{
	auto iter = m_mealMap->find(t);
	if (iter != m_mealMap->end())
	{
		iter->second->Deal();
	}
}
