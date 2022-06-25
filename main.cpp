

#ifdef _win64
#include <windows.h>
#else
#include <unistd.h>
#endif // _win64


#include <iostream>
#include <iomanip>


void userDetails();
void kenyaListings ();
void chinaListings ();
void germanyListings ();
void usaListings ();
void australiaListings ();
void brazilListings ();
void uaeListings ();
void wrongCountrySelection();


int selectCountry; //user to choose a country to trade listings of
const double RATE = (0.05 / 100); //transactional rates of all transactions
const double TAX = (16 / 100); //standard tax rate


int main()
{
    userDetails();   //user details for log in
    std::cout<<"Please select an option below: "<<std::flush<<std::endl<<"1. Trade stocks."<<std::flush<<std::endl<<"2. Trade with leverage."<<std::flush<<std::endl;
    int selectOption; //user to choose between either option one or two
    std::cin>>selectOption;
    while (selectOption > 2){
        std::cout<<"Invalid option, please select an option below:"<<std::endl;
        std::cout<<"1. Trade stocks."<<std::flush<<std::endl<<"2. Trade with leverage."<<std::flush<<std::endl;
        std::cin>>selectOption;
    }
    std::cout<<"..."<<std::endl;
    sleep(2);
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
    int currencySelection;
    std::cout<<"1. Kenyan Shilling (KSH)"<<std::endl;
    std::cout<<"2. Chinese Yuan (CHY)"<<std::endl;
    std::cout<<"3. Euro (EUR)"<<std::endl;
    std::cout<<"4. American Dollar (USD)"<<std::endl;
    std::cout<<"5. Australian Dollar (AUD)"<<std::endl;
    std::cout<<"6. Brazilian Real (BRL)"<<std::endl;
    std::cout<<"7. Emirati Dinar (AED)"<<std::endl;
    std::cin>>currencySelection;
    while (currencySelection > 7 || currencySelection == 0)
    {
        std::cout<<"Invalid option. Please try again!!"<<std::endl;
        std::cout<<"1. Kenyan Shilling (KSH)"<<std::endl;
        std::cout<<"2. Chinese Yuan (CHY)"<<std::endl;
        std::cout<<"3. Euro (EUR)"<<std::endl;
        std::cout<<"4. American Dollar (USD)"<<std::endl;
        std::cout<<"5. Australian Dollar (AUD)"<<std::endl;
        std::cout<<"6. Brazilian Real (BRL)"<<std::endl;
        std::cout<<"7. Emirati Dinar (AED)"<<std::endl;
        std::cin>>currencySelection;
    }
    std::cout<<"..."<<std::endl;
    sleep(2);
    std::cout<<"Your balance is 0.00 \n Press 1 to make a deposit:"<<std::endl;
    int depositOption;
    std::cin>>depositOption;
    sleep (1.5);
    while (depositOption != 1)
    {
        std::cout<<"Invalid option. Press 1 to make a deposit."<<std::endl;
        std::cin>>depositOption;
        sleep (1.5);
    }
    std::cout<<"Enter deposit amount: "<<std::flush;
    double depositAmount;
    std::cin>>depositAmount;
    while (depositAmount <= 1)
    {
        std::cout<<"Invalid option. Deposit amount should be greater than 1"<<std::endl; //remember to include transaction fee factored on selected currency of use
        std::cout<<"Enter deposit amount: "<<std::flush;
        std::cin>>depositAmount;
    }
    std::cout<<"Processing..."<<std::endl;
    sleep(5);
    double transactionFee;
    transactionFee = RATE * depositAmount; //0.05% of the deposit fee
    depositAmount -= transactionFee;
    std::cout<<"Transaction fee: "<<transactionFee<<std::endl;
    sleep(1.5);
    std::cout<<"Available trading balance: "<<std::setprecision(3)<<std::fixed<<depositAmount<<std::endl;
    std::cout<<"..."<<std::endl;
    sleep(5);
    std::cout<<"Select a country to trade on its listings."<<std::endl;
    std::cout<<"1. Kenya"<<std::endl;
    std::cout<<"2. China"<<std::endl;
    std::cout<<"3. Germany"<<std::endl;
    std::cout<<"4. USA"<<std::endl;
    std::cout<<"5. Australia"<<std::endl;
    std::cout<<"6. Brazil"<<std::endl;
    std::cout<<"7. UAE"<<std::endl;
    std::cin>>selectCountry;
    sleep (3);
    if (selectCountry == 1){ std::cout<<"KENYA:"<<std::endl;
        kenyaListings();}else if (selectCountry == 2){ std::cout<<"CHINA:"<<std::endl;
    chinaListings();}else if (selectCountry == 3){ std::cout<<"GERMANY:"<<std::endl;
    germanyListings();}else if (selectCountry == 4){ std::cout<<"USA:"<<std::endl;
    usaListings();}else if (selectCountry == 5){ std::cout<<"AUSTRALIA:"<<std::endl;
    australiaListings();}else if (selectCountry == 6){ std::cout<<"BRAZIL:"<<std::endl;
    brazilListings();}else if (selectCountry == 7){ std::cout<<"UAE:"<<std::endl;
    uaeListings();}
    wrongCountrySelection();

}
void userDetails()
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
void kenyaListings ()
{
    std::string listings[11][4] = {
        {"ID    ", "PLCs                                   "," BP  ","SP" },
        {"1056  ", "Safaricom PLC                         ","44.29", "27.55", },
        {"2241  ", "Kakuzi PLC                            ","25.17", "10.88", },
        {"3790  ", "Kenya Reinsurrance Corporation        ","12.67", "18.23", },
        {"4599  ", "Kenya Commercial Bank Group PLC       ","15.22", "12.51", },
        {"5120  ", "Unilever Kenya PLC                    ","16.11", "26.03", },
        {"6264  ", "Bamburi Cement PLC                    ","48.02", "55.92", },
        {"7430  ", "KenGen                                ","64.21", "88.71", },
        {"8791  ", "Jubilee Holdings PLC                  ","12.56", "12.62", },
        {"9198  ", "East Africa Breweries Ltd             ","15.01", "51.69", },
        {"1055  ", "Equity Bank PLC                       ","11.25", "27.43", }
    };
    for (int i = 0; i < 11; i++){
        for (int k = 0; k < 4; k++){
            std::cout<<listings[i][k]<<" "<<std::flush;
        }
        std::cout<<std::endl;
    }
    sleep(5);
}
void chinaListings ()
{
        std::string listings[11][4] = {
        {"ID    ", "PLCs            "," BP    ","SP" },
        {"1056  ", "Alibaba         ","44.29", "27.55", },
        {"2241  ", "Tencent         ","25.17", "10.88", },
        {"3790  ", "Vipshop         ","12.67", "18.23", },
        {"4599  ", "Dada Nexus      ","15.22", "12.51", },
        {"5120  ", "JD.com          ","16.11", "26.03", },
        {"6264  ", "Joy             ","48.02", "55.92", },
        {"7430  ", "XPeng Motors    ","64.21", "88.71", },
        {"8791  ", "Gaotu Techedu   ","12.56", "12.62", },
        {"9198  ", "Daqo New Energy ","15.01", "51.69", },
        {"1055  ", "Li Auto         ","11.25", "27.43", }
    };
    for (int i = 0; i < 11; i++){
        for (int k = 0; k < 4; k++){
            std::cout<<listings[i][k]<<" "<<std::flush;
        }
        std::cout<<std::endl;
    }
}
void germanyListings ()
{
        std::string listings[11][4] = {
        {"ID    ", "PLCs                          ","  BP    ","SP" },
        {"1056  ", "Deutsche Bank AG               ","44.29", "27.55", },
        {"2241  ", "Continental AG                 ","25.17", "10.88", },
        {"3790  ", "Munich Re Group                ","12.67", "18.23", },
        {"4599  ", "Adidas AG                      ","15.22", "12.51", },
        {"5120  ", "Siemens AG                     ","16.11", "26.03", },
        {"6264  ", "SAP SE                         ","48.02", "55.92", },
        {"7430  ", "Volkswagen AG                  ","64.21", "88.71", },
        {"8791  ", "Porsche Automobile Holding SE  ","12.56", "12.62", },
        {"9198  ", "Puma SE                        ","15.01", "51.69", },
        {"1055  ", "Kion Group AG                  ","11.25", "27.43", }
    };
    for (int i = 0; i < 11; i++){
        for (int k = 0; k < 4; k++){
            std::cout<<listings[i][k]<<" "<<std::flush;
        }
        std::cout<<std::endl;
    }
}
void usaListings ()
{
        std::string listings[11][4] = {
        {"ID    ", "PLCs               ","  BP    ","SP" },
        {"1056  ", "Tesla INC           ","44.29", "27.55", },
        {"2241  ", "Amazon              ","25.17", "10.88", },
        {"3790  ", "Microsoft           ","12.67", "18.23", },
        {"4599  ", "Exxon Mobil Corp    ","15.22", "12.51", },
        {"5120  ", "Meta INC            ","16.11", "26.03", },
        {"6264  ", "Apple INC           ","48.02", "55.92", },
        {"7430  ", "Berkshire Hathaway  ","64.21", "88.71", },
        {"8791  ", "JPMorgan Chase      ","12.56", "12.62", },
        {"9198  ", "Johnson & Johnson   ","15.01", "51.69", },
        {"1055  ", "Coca-cola company   ","11.25", "27.43", }
    };
    for (int i = 0; i < 11; i++){
        for (int k = 0; k < 4; k++){
            std::cout<<listings[i][k]<<" "<<std::flush;
        }
        std::cout<<std::endl;
    }
}
void australiaListings ()
{
        std::string listings[11][4] = {
        {"ID    ", "PLCs                                 "," BP    ","SP" },
        {"1056  ", "Australia and NZ Banking Group LTD   ","44.29", "27.55", },
        {"2241  ", "BHP Group LTD                        ","25.17", "10.88", },
        {"3790  ", "Commonwealth Bank of Australia       ","12.67", "18.23", },
        {"4599  ", "CSL Limited                          ","15.22", "12.51", },
        {"5120  ", "Fortescue Metals Group LTD           ","16.11", "26.03", },
        {"6264  ", "Macquarie Group LTD                  ","48.02", "55.92", },
        {"7430  ", "National Australia Bank Limited      ","64.21", "88.71", },
        {"8791  ", "Westpac Banking Corporation          ","12.56", "12.62", },
        {"9198  ", "Woolworths Group Limited             ","15.01", "51.69", },
        {"1055  ", "Westfarmers Limited                  ","11.25", "27.43", }
    };
    for (int i = 0; i < 11; i++){
        for (int k = 0; k < 4; k++){
            std::cout<<listings[i][k]<<" "<<std::flush;
        }
        std::cout<<std::endl;
    }
}
void brazilListings ()
{
        std::string listings[11][4] = {
        {"ID    ", "PLCs                                     "," BP    ","SP" },
        {"1056  ", "Vale SA                                  ","44.29", "27.55", },
        {"2241  ", "Ambeu SA                                 ","25.17", "10.88", },
        {"3790  ", "XP Inc                                   ","12.67", "18.23", },
        {"4599  ", "Banco do Brasil SA                       ","15.22", "12.51", },
        {"5120  ", "JBS SA                                   ","16.11", "26.03", },
        {"6264  ", "Klabin SA                                ","48.02", "55.92", },
        {"7430  ", "Suzano SA                                ","64.21", "88.71", },
        {"8791  ", "Gerdau SA                                ","12.56", "12.62", },
        {"9198  ", "Cosan SA                                 ","15.01", "51.69", },
        {"1055  ", "Notre Dame Intermedica Participacoes     ","11.25", "27.43", }
    };
    for (int i = 0; i < 11; i++){
        for (int k = 0; k < 4; k++){
            std::cout<<listings[i][k]<<" "<<std::flush;
        }
        std::cout<<std::endl;
    }
}
void uaeListings ()
{
        std::string listings[11][4] = {
        {"ID    ", "PLCs                        "," BP    ","SP" },
        {"1056  ", "Emirates Refreshme          ","44.29", "27.55", },
        {"2241  ", "Dubai Nail Insurance        ","25.17", "10.88", },
        {"3790  ", "Commercial Bank of Dubai    ","12.67", "18.23", },
        {"4599  ", "Gulf Navigation HO          ","15.22", "12.51", },
        {"5120  ", "Dubai Refreshments          ","16.11", "26.03", },
        {"6264  ", "Al Salam Bk-Sudan           ","48.02", "55.92", },
        {"7430  ", "Amanat Holdings             ","64.21", "88.71", },
        {"8791  ", "BHM Capital                 ","12.56", "12.62", },
        {"9198  ", "Emirates NBD Bank           ","15.01", "51.69", },
        {"1055  ", "National Cement             ","11.25", "27.43", }
    };
    for (int i = 0; i < 11; i++){
        for (int k = 0; k < 4; k++){
            std::cout<<listings[i][k]<<" "<<std::flush;
        }
        std::cout<<std::endl;
    }
}
void wrongCountrySelection()
{
        while (selectCountry > 7 || selectCountry == 0){
        std::cout<<"Invalid option, please try again!"<<std::endl;
        std::cout<<"Select a country to trade on its listings."<<std::endl;
        std::cout<<"1. Kenya"<<std::endl;
        std::cout<<"2. China"<<std::endl;
        std::cout<<"3. Germany"<<std::endl;
        std::cout<<"4. USA"<<std::endl;
        std::cout<<"5. Australia"<<std::endl;
        std::cout<<"6. Brazil"<<std::endl;
        std::cout<<"7. UAE"<<std::endl;
        std::cin>>selectCountry;
        if (selectCountry == 1){ std::cout<<"KENYA:"<<std::endl;
        kenyaListings();}else if (selectCountry == 2){ std::cout<<"CHINA:"<<std::endl;
    chinaListings();}else if (selectCountry == 3){ std::cout<<"GERMANY:"<<std::endl;
    germanyListings();}else if (selectCountry == 4){ std::cout<<"USA:"<<std::endl;
    usaListings();}else if (selectCountry == 5){ std::cout<<"AUSTRALIA:"<<std::endl;
    australiaListings();}else if (selectCountry == 6){ std::cout<<"BRAZIL:"<<std::endl;
    brazilListings();}else if (selectCountry == 7){ std::cout<<"UAE:"<<std::endl;
    uaeListings();}
    }
}

