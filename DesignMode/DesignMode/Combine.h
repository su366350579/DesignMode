#pragma once
#include <iostream>
#include <list> 
using namespace std;
namespace DesignMode {
	enum Positon {
		E_SchoolLeader = 0,
		E_GroupLeader,
		E_ClassLeader,
		E_Person,
	};

	class Person {
	protected:
		string m_name;
		Positon m_position;
	public:
		Person(string name, Positon position) {
			m_name = name;
			m_position = position;
		}
		Positon GetPositon() {
			return m_position;
		}

		void Print() {
			cout << "name" << m_name << " position:" << m_position << endl;
		}
		virtual void PrintLeader() {

		}
	};

	class Leader : public Person {
	private:
		list<Person*> group;
	public:
		Leader(string name, Positon position) :Person(name, position) {
			group = list<Person*>();
		}
		void Add(Person* person) {
			group.push_back(person);
		}

		virtual void PrintLeader();
	};
}
