

#include "user_details.h"

#ifdef _WIN64
#include <Windows.h>
#else
#include <unistd.h>
#endif // _WIN64

#include <iostream>
#include <iomanip>
#include <string>

void User_details::userSignUp()
{
    std::cout<<"Welcome. Please fill in the details below to complete sign in: "<<std::endl;
    std::string firstName, lastName;
    std::cout<<"First name: ";std::cin>>firstName;std::cout<<std::flush<<std::endl;
    std::cout<<"Last name: ";std::cin>>lastName;std::cout<<std::flush<<std::endl;
    std::cout<<"Welcome "<<firstName<<" "<<lastName<<std::flush<<std::endl;
    std::cout<<"Create a password: ";
    std::string password;
    std::cin>>password;
    std::cout<<std::endl<<"Confirm password below: "<<std::endl;
    std::string aesterick{'*'};
    std::cout<<std::setfill('*');
    std::cout<<std::setw(10)<<std::left<<aesterick<<std::endl;
    std::string passwordConfirm;
    std::cin>>passwordConfirm;
    while (password != passwordConfirm)
    {
       std::cout<<"..."<<std::endl;
       sleep(2);
       std::cout<<"Passwords do not match!! Try again"<<std::endl;
       std::string aesterick{'*'};
       std::cout<<std::setfill('*');
       std::cout<<std::setw(10)<<std::left<<aesterick<<std::endl;
       std::cin>>passwordConfirm;
    }
    std::cout<<"..."<<std::endl;
    sleep(2);
    std::cout<<std::endl<<"  Password modified successfully!"<<std::endl<<std::endl;

}

void User_details::currecnySelection()
{
    std::cout<<"Select the currency you would like to use for your transactions."<<std::endl;
    std::cout<<"The conversion rates are as shown:"<<std::endl;
    std::cout<<"(Conversion rates are in Kenyan Shillings)"<<std::endl;
    std::string conversionRates [8][8] = {
    {
      "   ","KSH       "," CHY   "," EUR   ","USD    "," AUD   ","BRL    ","AED"
    },
    {
      "KSH", "1.00     ","0.057  ","0.008  ","0.008  ","0.0123 ","0.0446 ","0.0312"
    },
    {
      "CHY", "17.55    ","1.00   ","0.1418 ","0.1493 ","0.2164 ","0.7821 ","0.5481",
    },
    {
      "EUR", "123.786  ","7.0522 ","1.00   ","1.0526 ","1.526  ","5.5158 ","3.8658"
    },
    {
      "USD", "117.597  ","6.70   ","0.95   ","1.00   ","1.45   ","5.24   ","3.6725"
    },
    {
      "AUD", "81.3     ","4.6207 ","0.6552 ","0.6897 ","1.00   ","3.6138 ","2.5328"
    },
    {
      "BRL", "22.4422  ","1.2786 ","0.1813 ","0.1908 ","0.2767 ","1.00   ","0.7009"
    },
    {
      "AED", "32.021   ","1.8244 ","0.2587 ","0.2722 ","0.3947 ","1.4267 ","1.00"
    }
    };
    for (int i = 0; i < 8; i++){
        for (int k = 0; k < 8; k++)
        {
            std::cout<<conversionRates[i][k]<<" "<<std::flush;
        }
        std::cout<<std::endl;
    }
        std::cout<<"1. Kenyan Shilling (KSH)"<<std::endl;
    std::cout<<"2. Chinese Yuan (CHY)"<<std::endl;
    std::cout<<"3. Euro (EUR)"<<std::endl;
    std::cout<<"4. American Dollar (USD)"<<std::endl;
    std::cout<<"5. Australian Dollar (AUD)"<<std::endl;
    std::cout<<"6. Brazilian Real (BRL)"<<std::endl;
    std::cout<<"7. Emirati Dinar (AED)"<<std::endl;
}

void User_details::wrongSelection (int a)
{
        while (a > 7 || a == 0)
    {
        std::cout<<"Invalid option. Please try again!!"<<std::endl;
        std::cout<<"1. Kenyan Shilling (KSH)"<<std::endl;
        std::cout<<"2. Chinese Yuan (CHY)"<<std::endl;
        std::cout<<"3. Euro (EUR)"<<std::endl;
        std::cout<<"4. American Dollar (USD)"<<std::endl;
        std::cout<<"5. Australian Dollar (AUD)"<<std::endl;
        std::cout<<"6. Brazilian Real (BRL)"<<std::endl;
        std::cout<<"7. Emirati Dinar (AED)"<<std::endl;
        std::cin>>a;
    }
}

void User_details::invalidDepositOption (int a)
{
        while (a != 1)
    {
        std::cout<<"Invalid option. Press 1 to make a deposit."<<std::endl;
        std::cin>>a;
        sleep (1.5);
    }
}


