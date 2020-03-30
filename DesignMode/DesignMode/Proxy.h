#pragma once
#include <iostream>
using namespace std;
namespace DesignMode {

	class IFactory
	{
	public:
		virtual void makeProduct() {};
	};

	class PhoneFactory : IFactory
	{
	public:
		virtual void makeProduct()
		{
			cout << "pruduce phone" << endl;
		}
	};

	class FoxconnProxy : IFactory
	{
	private:
		PhoneFactory* m_phoneFactoryProxy;
	public:
		FoxconnProxy()
		{
			m_phoneFactoryProxy = new PhoneFactory();
		}
		virtual void makeProduct()
		{
			m_phoneFactoryProxy->makeProduct();
		}
	};
}

