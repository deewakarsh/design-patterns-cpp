#include<iostream>
#include<string>
#include"proxy.hpp"


	string ActualBank::WithDrawCash()
	{
		return "\nHave your cash \n";
	}



	ProxyBank::ProxyBank() :_bank(NULL), _password("default")
    {

    }

	string ProxyBank::WithDrawCash()
	{
		if (_bank == NULL)
			return "\nPlease Authenticate!!\n";
		return _bank->WithDrawCash();
	}

	void ProxyBank::Authenticate(string passwd)
	{
		if (_password == passwd)
		{
			cout << "\nAuthentication done.\n";
			_bank = new ActualBank();
		}
		else
		{
			cout << "\nSorry wrong password.\n";
		}
	}

	ProxyBank::~ProxyBank()
	{
		delete _bank;
	}


    int main()
    {
        ProxyBank* myBank = new ProxyBank();
        cout << myBank->WithDrawCash();
        myBank->Authenticate("Hello");
        myBank->Authenticate("default");
        cout << myBank->WithDrawCash();

        return 0;
    }