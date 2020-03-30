#include "Pool.h"
using namespace DesignMode;
NameTitle* NameTitleFactory::PopNameTitle(TitleType type)
{
	list<NameTitle*>* p = nullptr;
	switch (type)
	{
	case DesignMode::TEXT:
		p = m_textTitlePool;
		break;
	case DesignMode::PICTURE:
		p = m_pictureTitlePool;
		break;
	case DesignMode::EFFECT:
		p = m_effectTitlePool;
		break;
	default:
		break;
	}
	if (p == nullptr)
	{
		return nullptr;
	}
	NameTitle* title = p->back();
	if (title != nullptr)
	{
		cout << "get NameTitle from pool" << endl;
		return title;
	}
	else
	{
		cout << "get NameTitle by create" << endl;
		NameTitle* title = new NameTitle();
		p->push_back(title);
		return title;
	}
}

void NameTitleFactory::PushNameTitle(TitleType type, NameTitle* title)
{
	list<NameTitle*>* p = nullptr;
	switch (type)
	{
	case DesignMode::TEXT:
		p = m_textTitlePool;
		break;
	case DesignMode::PICTURE:
		p = m_pictureTitlePool;
		break;
	case DesignMode::EFFECT:
		p = m_effectTitlePool;
		break;
	default:
		break;
	}
	if (p != nullptr)
	{
		cout << "push NameTitle to pool" << endl;
		p->push_back(title);
	}
}
