

#ifdef _WIN64
#include <Windows.h>
#else
#include <unistd.h>
#endif // _WIN64

#include <iostream>


#include "transactions.h"


void Transactions::ifDepositIsBelowMinimum (int a)
{
        while (a <= 10000)
    {
        std::cout<<"Invalid option. Deposit amount should be greater than 10000"<<std::endl;
        std::cout<<"Enter deposit amount: "<<std::flush;
        std::cin>>a;
    }
}
void Transactions::depositBalance (int a, double *transactionFee, double *depositAmount)
{
    if (a == 1){std::cout<<"Transaction fee: KSH "<<*transactionFee<<std::endl;sleep(1.5);
    std::cout<<"Available trading balance: KSH "<<*depositAmount<<std::endl;}
    else if (a == 2){std::cout<<"Transaction fee: "<<*transactionFee<<" CHY"<<std::endl;sleep(1.5);
    std::cout<<"Available trading balance: "<<*depositAmount<<" CHY"<<std::endl;}
    else if (a == 3){std::cout<<"Transaction fee: "<<*transactionFee<<" EUR"<<std::endl;sleep(1.5);
    std::cout<<"Available trading balance: "<<*depositAmount<<" EUR"<<std::endl;}
    else if (a == 4){std::cout<<"Transaction fee: $ "<<*transactionFee<<std::endl;sleep(1.5);
    std::cout<<"Available trading balance: $ "<<*depositAmount<<std::endl;}
    else if (a == 5){std::cout<<"Transaction fee: "<<*transactionFee<<" AUD"<<std::endl;sleep(1.5);
    std::cout<<"Available trading balance: "<<*depositAmount<<" AUD"<<std::endl;}
    else if (a == 6){std::cout<<"Transaction fee: "<<*transactionFee<<" BRL"<<std::endl;sleep(1.5);
    std::cout<<"Available trading balance: "<<*depositAmount<<" BRL"<<std::endl;}
    else {std::cout<<"Transaction fee: "<<*transactionFee<<" AED"<<std::endl;sleep(2);
    std::cout<<"Available trading balance: "<<*depositAmount<<" AED"<<std::endl;}
}

