#pragma once
#include <list>
#include "Proxy.h"
#include "Pool.h"
#include "Adapter.h"
#include "Bridge.h"
#include "Filter.h"
#include "Combine.h"
#include "Facade.h"
#include "Decorate.h"
using namespace std;
using namespace DesignMode;
void TestAdapter() {
	Adapter adapter = Adapter();
	string sendStr = "Hello World";
	adapter.SendData(TCP_TRANS, sendStr);
}

void TestBrige() {
	Circle circle = Circle(1, 1, 3, new RedCircle());
	circle.draw();
}

void TestFilter() {
	list<Car> cars = list<Car>();
	cars.push_back(Car("Baoma", "China"));
	cars.push_back(Car("Benchi", "Japan"));
	cars.push_back(Car("Fengtian", "China"));
	cars.push_back(Car("Dazhong", "China"));
	cars.push_back(Car("Aodi", "Japan"));
	cars.push_back(Car("Nisong", "Japan"));

	Criteria* criteria = new CriteriaChina();
	list<Car> chinaCars = criteria->MeetCriteria(cars);
	for (auto it = chinaCars.begin(); it != chinaCars.end(); it++)
	{
		cout << it->getName() << endl;
	}
}

void TestCombine() {
	Leader* schoolLeader = new Leader("校长", E_SchoolLeader);

	Leader* group1Leader = new Leader("Group1", E_GroupLeader);
	Leader* group2Leader = new Leader("Group2", E_GroupLeader);
	schoolLeader->Add(group1Leader);
	schoolLeader->Add(group2Leader);
	group1Leader->Add(new Person("Class1", E_Person));
	group1Leader->Add(new Person("Class2", E_Person));
	group2Leader->Add(new Person("Class3", E_Person));
	group2Leader->Add(new Person("Class4", E_Person));
	schoolLeader->PrintLeader();
}

void TestDecorator() {
	DirctLightLine* line = new DirctLightLine();
	MultiLightLineDecorator* dcorator = new MultiLightLineDecorator(line);
	dcorator->Draw();
}

void TestFacade() {
	MealMaker* maker = new MealMaker();
	maker->Deal(Beaf);
	maker->Deal(Vegetable);
	maker->Deal(Hanburger);
}

void TesPool() {
	NameTitleFactory* factory = new NameTitleFactory();
	NameTitle* title = factory->PopNameTitle(TEXT);
	//NameTitle* title1 = factory->PopNameTitle(TEXT);
	factory->PushNameTitle(TEXT, title);
	//factory->PushNameTitle(TEXT, title1);
	title = factory->PopNameTitle(TEXT);
	//title1 = factory->PopNameTitle(TEXT);
}

void TestProxy() {
	FoxconnProxy* proxy = new FoxconnProxy();
	proxy->makeProduct();
	proxy->makeProduct();
}

int main()
{
	//TestAdapter();
	//TestBrige();
	//TestFilter();
	//TestCombine();
	//TestDecorator();
	//TestFacade();
	//TesPool();
	TestProxy();
	system("pause");
}
