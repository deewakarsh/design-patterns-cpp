#include <iostream>
#include <string>
#include "stateDP.hpp"

using namespace std;


    Account::Account()
    {
        balance = 0;
        iAccountState = new ActiveStateHandler();
    }
    void Account::setState(iAccountStateHandler *state)
    {
        iAccountState = state;
    }

    void Account::withdraw (int amount)
    {
        iAccountState->withdraw(this, amount);
    }
    void Account::deposit(int amount)
    {
        iAccountState->deposit(this, amount);
    }

    int Account::getBalance()
    {
        return balance;
    }

    void Account::setBalance(int amt)
    {
        balance = amt;
    }


    void OpenStateHandler::withdraw (Account *ctx, int amt)
    {
        cout << "In open state... cant do withdraw operation";
        ctx->setState(new ActiveStateHandler());
    }
    void OpenStateHandler::deposit (Account *ctx, int amt)
    {
        cout << "In open state... cant do deposit operation";
        ctx->setState(new ActiveStateHandler());
    }


    void ActiveStateHandler::withdraw (Account *ctx, int amt)
    {
        if (ctx->getBalance() < amt)
        {
            cout << " Cannnot withdraw as balance is less!!!";
            return;
        }
        int diff  = ctx->getBalance() - amt;
        ctx->setBalance(diff);
        if(diff <= 100)
        {
            ctx->setState(new SuspendedStateHandler());
        }
    }
    void ActiveStateHandler::deposit (Account *ctx, int amt)
    {
        int sum = ctx->getBalance() + amt;
        ctx->setBalance(sum);
        ctx->setState(new ODStateHandler());
    }

    void ODStateHandler::withdraw (Account *ctx, int amt)
    {
        if (ctx->getBalance() < amt)
        {
            cout << " Cannnot withdraw as balance is less!!!";
            return;
        }
        int diff  = ctx->getBalance() - amt;
        ctx->setBalance(diff);
        if(diff <= 500)
        {
            ctx->setState(new ActiveStateHandler());
        }
    }
    void ODStateHandler::deposit (Account *ctx, int amt)
    {
        int sum = ctx->getBalance() + amt;
        ctx->setBalance(sum);
    }



    void SuspendedStateHandler::withdraw (Account *ctx, int amt)
    {

        cout << "Account is in suspended state.... cannot perform withdraw operation!!!";
        return;
    }
    void SuspendedStateHandler::deposit (Account *ctx, int amt)
    {
        int sum = ctx->getBalance() + amt;
        ctx->setBalance(sum);
        if(sum >= 500)
        ctx->setState(new ODStateHandler());
        else if(sum >= 100)
        {
            ctx->setState(new ActiveStateHandler());
        }
    }


int main()
{

    Account *context = new Account();
    context->deposit(1000);
    cout << " balance:" << context->getBalance() <<endl;
    context->withdraw(500);
    cout << " balance:" << context->getBalance() <<endl;
    context->withdraw(400);
    cout << " balance:" << context->getBalance() <<endl;
    context->deposit(200);
    cout << " balance:" << context->getBalance() <<endl;

    return 0;
}

