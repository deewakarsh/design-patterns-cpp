#include <iostream>
#include "adapter.hpp"

using namespace std;

string Sentinel::sendLicenseName()
{
    return "HPM License";
}

string Sentinel::sendLicenseType()
{
    return "Standalone License";  
}

string Adapter::getLicenseName()
{
    sentinel_ = new Sentinel();
    return sentinel_->sendLicenseName().c_str();
}

string Adapter::getLicenseType()
{
    sentinel_ = new Sentinel();
    return sentinel_->sendLicenseType().c_str();
}

void Client::getLicenseName()
{
    iAdapter_ = new Adapter();
    lName_ = iAdapter_->getLicenseName().c_str();
    
}

void Client::getLicenseType()
{
    iAdapter_ = new Adapter();
    lType_ = iAdapter_->getLicenseType().c_str();
}


void Client::showLicenseName()
{
    cout << lName_.c_str() << endl;
}


void Client::showLicenseType()
{
    cout << lType_.c_str() << endl;
}


int main()
{
    Client *c1 = new Client();
    
    c1->getLicenseName();
    c1->getLicenseType();

    c1->showLicenseName();
    c1->showLicenseType();

    return 0;
}