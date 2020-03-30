#pragma once
#include <iostream>
#include <list>
using namespace std;
namespace DesignMode {
	enum TitleType
	{
		TEXT = 0,
		PICTURE = 1,
		EFFECT = 2,
	};

	class NameTitle
	{
		string name;
	};

	class NameTitleFactory
	{
	private:
		list<NameTitle*>* m_textTitlePool;
		list<NameTitle*>* m_pictureTitlePool;
		list<NameTitle*>* m_effectTitlePool;
	public:
		NameTitleFactory() {
			m_textTitlePool = new list<NameTitle*>(16);
			m_pictureTitlePool = new list<NameTitle*>(16);
			m_effectTitlePool = new list<NameTitle*>(16);
		}
		NameTitle* PopNameTitle(TitleType type);
		void PushNameTitle(TitleType type, NameTitle* title);
	};
}

