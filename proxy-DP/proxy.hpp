#include <iostream>
#include <string>

using namespace std;

class IBank
{
public:
	virtual string WithDrawCash() = 0;
	virtual ~IBank(){}
};

class ActualBank : IBank
{
public:
	string WithDrawCash();
};

class ProxyBank : public IBank
{
	ActualBank* _bank;
	string _password;
public:
	ProxyBank();

	string WithDrawCash();

	void Authenticate(string passwd);
	

	~ProxyBank();
	
};