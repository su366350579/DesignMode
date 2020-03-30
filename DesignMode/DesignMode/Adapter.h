#pragma once
#include <string>
using namespace std;
namespace DesignMode {
	enum TransType {
		TCP_TRANS = 0,
		UDP_TRANS,
	};

	class TCP
	{
	public:
		void PushData(string str);
		void PullData(string str);

	};

	class UDP
	{
	public:
		void SendData(string str);
		void GetData(string str);
	};

	class Adapter
	{
	private:
		TCP m_tcp;
		UDP m_udp;
	public:
		Adapter();
		void SendData(TransType type, string str);
		void GetData(TransType type, string str);
	};

}