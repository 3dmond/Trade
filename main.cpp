

#ifdef _WIN64
#include <iostream>
#else
#include <unistd.h>
#endif // _WIN64


#include <iostream>

#include "user_details.h"
#include "transactions.h"
#include "Listings.h"

const double RATE = (0.05 / 100); //transactional rates of all transactions
const double TAX = (16 / 100); //standard tax rate


int main()
{
    User_details signUp, currency,ifDoesntPressOne;
    signUp.userSignUp(); //user to fill with name and create a password
    currency.currecnySelection(); //user to select currency to be used for transactions
    int currencySelection;
    std::cin>>currencySelection;
    currency.wrongSelection(currencySelection);
    std::cout<<"..."<<std::endl;
    sleep(2);
    std::cout<<"Your balance is 0.00 \n Press 1 to make a deposit:"<<std::endl;
    int depositOption;
    std::cin>>depositOption;
    sleep (1.5);
    ifDoesntPressOne.invalidDepositOption(depositOption);
    std::cout<<"Enter deposit amount: "<<std::flush;
    double depositAmount;
    std::cin>>depositAmount;
    Transactions deposit;
    deposit.ifDepositIsBelowMinimum(depositAmount);
        std::cout<<"Processing..."<<std::endl;
    sleep(5);
    double transactionFee; //deducted from the initial deposit fee
    transactionFee = RATE * depositAmount; //0.05% of the deposit fee, constant rate as defined
    depositAmount -= transactionFee; //remaining balance in user account
    deposit.depositBalance(currencySelection, &transactionFee, &depositAmount);
    std::cout<<"..."<<std::endl;
    sleep(5);
    Listings country;
    country.selectCountry();
    int countrySelect;
    std::cin>>countrySelect;
    sleep (3);
    country.wrongCountrySelection(countrySelect);
    country.showListingsKSH(countrySelect);


}
