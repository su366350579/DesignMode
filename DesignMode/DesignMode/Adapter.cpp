#include "Adapter.h"
#include <iostream>

namespace DesignMode {
	void TCP::PushData(string str) {
		cout << " TCP::PushData" << str << endl;
	}

	void TCP::PullData(string str) {
		cout << " TCP::PullData" << str << endl;
	}


	void UDP::SendData(string str) {
		cout << " UDP::PushData" << str << endl;
	}

	void UDP::GetData(string str) {
		cout << " UDP::PullData" << str << endl;
	}

	Adapter::Adapter()
	{
		m_tcp = TCP();
		m_udp = UDP();
	}

	void Adapter::SendData(TransType type, string str) {
		cout << " Adapter::PushData" << endl;
		if (type == TCP_TRANS)
		{
			m_tcp.PushData(str);
		}
		else if (type == UDP_TRANS)
		{
			m_udp.SendData(str);
		}

	}

	void Adapter::GetData(TransType type, string str) {
		cout << " Adapter::PullData" << endl;
		if (type == TCP_TRANS)
		{
			m_tcp.PullData(str);
		}
		else if (type == UDP_TRANS)
		{
			m_udp.GetData(str);
		}
	}
}