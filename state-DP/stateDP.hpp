#include <iostream>
#include <string>

using namespace std;

enum AcState
{
    OPEN,
    CLOSE,
    OD,
    ACTIVE
};

class Account;
class ActiveStateHandler;
class ODStateHandler;
class SuspendedStateHandler;

class iAccountStateHandler
{
    public:
    virtual void withdraw(Account *ctx, int amt) = 0;
    virtual void deposit(Account *ctx, int amt) = 0;

};

class Account
{
    public:
        int balance;
        iAccountStateHandler *iAccountState;
        Account();

        void setState(iAccountStateHandler *state);
        void withdraw (int amount);
        
        void deposit(int amount);
        int getBalance();
        void setBalance(int amt);

};


class OpenStateHandler : public iAccountStateHandler
{
    public:
        void withdraw (Account *ctx, int amt);
        
        void deposit (Account *ctx, int amt);
        
};

class ActiveStateHandler : public iAccountStateHandler
{
    public:
        void withdraw (Account *ctx, int amt);
        
        void deposit (Account *ctx, int amt);
};

class ODStateHandler : public iAccountStateHandler
{
    public:
        void withdraw (Account *ctx, int amt);
        void deposit (Account *ctx, int amt);
};

class SuspendedStateHandler : public iAccountStateHandler
{
    public:
        void withdraw (Account *ctx, int amt);
        void deposit (Account *ctx, int amt);
};



