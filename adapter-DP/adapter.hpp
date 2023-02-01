#include <iostream>
#include <string>

using namespace std;

class Sentinel
{
    public:

    string sendLicenseName();
    string sendLicenseType();
};

class ClientInterface
{
    public:
        virtual string getLicenseName() = 0;
        virtual string getLicenseType() = 0;

}; 

class Client
{
    public:
        string lName_;
        string lType_;
        ClientInterface *iAdapter_;
    
        void getLicenseName();
        void getLicenseType();   

        void showLicenseName();
        void showLicenseType(); 
};


class Adapter : public ClientInterface
{
    public:
    Sentinel *sentinel_;
    string getLicenseName();
    string getLicenseType();


};