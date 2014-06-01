#include <iostream>
#include <vector>
#include <string>  
#include <winsock2.h>  
#pragma comment(lib,"ws2_32.lib") 
const int PORT = 1234; //Ĭ��PORT NUMBER = 1234
const int MAXBUFF = 512;
const int MAXCLIENT = 4;

class ServerMB //����������
{
public:
	ServerMB();
	~ServerMB();
	bool acceptNewClient();        //����һ���¿ͻ�
	std::string recvMsg(int num);  //�������Ե�num���ͻ�����Ϣ
	bool sendMsg(int num ,std::string s); //���num���ͻ��˷�����Ϣ

private:
	SOCKET serverSock;
	int _clientNum;
	std::vector<SOCKET> clientSock;
};