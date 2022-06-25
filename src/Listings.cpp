

#ifdef _WIN64
#include <Windows.h>
#else
#include <unistd.h>
#endif // _WIN64

#include <iostream>

#include "listings.h"

void Listings::selectCountry()
{
    std::cout<<"Select a country to trade on its listings."<<std::endl;
    std::cout<<"1. Kenya"<<std::endl;
    std::cout<<"2. China"<<std::endl;
    std::cout<<"3. Germany"<<std::endl;
    std::cout<<"4. USA"<<std::endl;
    std::cout<<"5. Australia"<<std::endl;
    std::cout<<"6. Brazil"<<std::endl;
    std::cout<<"7. UAE"<<std::endl;
}
void Listings::kenyaListingsKSH ()
{
    std::string listings[11][4] = {
        {"ID    ", "PLCs                                   "," CP  ","PP" },
        {"3069  ", "Safaricom PLC                         ","44.29", "27.55", },
        {"3521  ", "Kakuzi PLC                            ","25.17", "10.88", },
        {"3630  ", "Kenya Reinsurrance Corporation        ","12.67", "18.23", },
        {"3411  ", "Kenya Commercial Bank Group PLC       ","15.22", "12.51", },
        {"3318  ", "Unilever Kenya PLC                    ","16.11", "26.03", },
        {"3109  ", "Bamburi Cement PLC                    ","48.02", "55.92", },
        {"3008  ", "KenGen                                ","64.21", "88.71", },
        {"3756  ", "Jubilee Holdings PLC                  ","12.56", "12.62", },
        {"3297  ", "East Africa Breweries Ltd             ","15.01", "51.69", },
        {"3650  ", "Equity Bank PLC                       ","11.25", "27.43", }
    };
    for (int i = 0; i < 11; i++){
        for (int k = 0; k < 4; k++){
            std::cout<<listings[i][k]<<" "<<std::flush;
        }
        std::cout<<std::endl;
    }
    sleep(5);
}
void Listings::chinaListingsKSH ()
{
        std::string listings[11][4] = {
        {"ID    ", "PLCs            "," CP    ","PP" },
        {"7632  ", "Alibaba         ","44.29", "27.55", },
        {"7844  ", "Tencent         ","25.17", "10.88", },
        {"7152  ", "Vipshop         ","12.67", "18.23", },
        {"7350  ", "Dada Nexus      ","15.22", "12.51", },
        {"7756  ", "JD.com          ","16.11", "26.03", },
        {"7925  ", "Joy             ","48.02", "55.92", },
        {"7015  ", "XPeng Motors    ","64.21", "88.71", },
        {"7445  ", "Gaotu Techedu   ","12.56", "12.62", },
        {"7684  ", "Daqo New Energy ","15.01", "51.69", },
        {"7973  ", "Li Auto         ","11.25", "27.43", }
    };
    for (int i = 0; i < 11; i++){
        for (int k = 0; k < 4; k++){
            std::cout<<listings[i][k]<<" "<<std::flush;
        }
        std::cout<<std::endl;
    }
}
void Listings::germanyListingsKSH ()
{
        std::string listings[11][4] = {
        {"ID    ", "PLCs                          ","  CP    ","PP" },
        {"1056  ", "Deutsche Bank AG               ","44.29", "27.55", },
        {"1524  ", "Continental AG                 ","25.17", "10.88", },
        {"1975  ", "Munich Re Group                ","12.67", "18.23", },
        {"1167  ", "Adidas AG                      ","15.22", "12.51", },
        {"1733  ", "Siemens AG                     ","16.11", "26.03", },
        {"1462  ", "SAP SE                         ","48.02", "55.92", },
        {"1820  ", "Volkswagen AG                  ","64.21", "88.71", },
        {"1110  ", "Porsche Automobile Holding SE  ","12.56", "12.62", },
        {"1376  ", "Puma SE                        ","15.01", "51.69", },
        {"1896  ", "Kion Group AG                  ","11.25", "27.43", }
    };
    for (int i = 0; i < 11; i++){
        for (int k = 0; k < 4; k++){
            std::cout<<listings[i][k]<<" "<<std::flush;
        }
        std::cout<<std::endl;
    }
}
void Listings::usaListingsKSH ()
{
        std::string listings[11][4] = {
        {"ID    ", "PLCs               ","  CP    ","PP" },
        {"4987  ", "Tesla INC           ","44.29", "27.55", },
        {"4732  ", "Amazon              ","25.17", "10.88", },
        {"4152  ", "Microsoft           ","12.67", "18.23", },
        {"4490  ", "Exxon Mobil Corp    ","15.22", "12.51", },
        {"4318  ", "Meta INC            ","16.11", "26.03", },
        {"4851  ", "Apple INC           ","48.02", "55.92", },
        {"4816  ", "Berkshire Hathaway  ","64.21", "88.71", },
        {"4518  ", "JPMorgan Chase      ","12.56", "12.62", },
        {"4400  ", "Johnson & Johnson   ","15.01", "51.69", },
        {"4258  ", "Coca-cola company   ","11.25", "27.43", }
    };
    for (int i = 0; i < 11; i++){
        for (int k = 0; k < 4; k++){
            std::cout<<listings[i][k]<<" "<<std::flush;
        }
        std::cout<<std::endl;
    }
}
void Listings::australiaListingsKSH ()
{
        std::string listings[11][4] = {
        {"ID    ", "PLCs                                 "," CP    ","PP" },
        {"9198  ", "Australia and NZ Banking Group LTD   ","44.29", "27.55", },
        {"9461  ", "BHP Group LTD                        ","25.17", "10.88", },
        {"9720  ", "Commonwealth Bank of Australia       ","12.67", "18.23", },
        {"9814  ", "CSL Limited                          ","15.22", "12.51", },
        {"9354  ", "Fortescue Metals Group LTD           ","16.11", "26.03", },
        {"9642  ", "Macquarie Group LTD                  ","48.02", "55.92", },
        {"9815  ", "National Australia Bank Limited      ","64.21", "88.71", },
        {"9956  ", "Westpac Banking Corporation          ","12.56", "12.62", },
        {"9108  ", "Woolworths Group Limited             ","15.01", "51.69", },
        {"9740  ", "Westfarmers Limited                  ","11.25", "27.43", }
    };
    for (int i = 0; i < 11; i++){
        for (int k = 0; k < 4; k++){
            std::cout<<listings[i][k]<<" "<<std::flush;
        }
        std::cout<<std::endl;
    }
}
void Listings::brazilListingsKSH ()
{
        std::string listings[11][4] = {
        {"ID    ", "PLCs                                     "," CP    ","PP" },
        {"6618  ", "Vale SA                                  ","44.29", "27.55", },
        {"6789  ", "Ambeu SA                                 ","25.17", "10.88", },
        {"6159  ", "XP Inc                                   ","12.67", "18.23", },
        {"6087  ", "Banco do Brasil SA                       ","15.22", "12.51", },
        {"6249  ", "JBS SA                                   ","16.11", "26.03", },
        {"6936  ", "Klabin SA                                ","48.02", "55.92", },
        {"6758  ", "Suzano SA                                ","64.21", "88.71", },
        {"6139  ", "Gerdau SA                                ","12.56", "12.62", },
        {"6520  ", "Cosan SA                                 ","15.01", "51.69", },
        {"6060  ", "Notre Dame Intermedica Participacoes     ","11.25", "27.43", }
    };
    for (int i = 0; i < 11; i++){
        for (int k = 0; k < 4; k++){
            std::cout<<listings[i][k]<<" "<<std::flush;
        }
        std::cout<<std::endl;
    }
}
void Listings::uaeListingsKSH ()
{
        std::string listings[11][4] = {
        {"ID    ", "PLCs                        "," CP    ","PP" },
        {"0159  ", "Emirates Refreshme          ","44.29", "27.55", },
        {"0486  ", "Dubai Nail Insurance        ","25.17", "10.88", },
        {"0681  ", "Commercial Bank of Dubai    ","12.67", "18.23", },
        {"0053  ", "Gulf Navigation HO          ","15.22", "12.51", },
        {"0957  ", "Dubai Refreshments          ","16.11", "26.03", },
        {"0722  ", "Al Salam Bk-Sudan           ","48.02", "55.92", },
        {"0115  ", "Amanat Holdings             ","64.21", "88.71", },
        {"0358  ", "BHM Capital                 ","12.56", "12.62", },
        {"0499  ", "Emirates NBD Bank           ","15.01", "51.69", },
        {"0096  ", "National Cement             ","11.25", "27.43", }
    };
    for (int i = 0; i < 11; i++){
        for (int k = 0; k < 4; k++){
            std::cout<<listings[i][k]<<" "<<std::flush;
        }
        std::cout<<std::endl;
    }
}
void Listings::wrongCountrySelection(int a)
{
        while (a > 7 || a == 0){
        std::cout<<"Invalid option, please try again!"<<std::endl;
        std::cout<<"Select a country to trade on its listings."<<std::endl;
        std::cout<<"1. Kenya"<<std::endl;
        std::cout<<"2. China"<<std::endl;
        std::cout<<"3. Germany"<<std::endl;
        std::cout<<"4. USA"<<std::endl;
        std::cout<<"5. Australia"<<std::endl;
        std::cout<<"6. Brazil"<<std::endl;
        std::cout<<"7. UAE"<<std::endl;
        std::cin>>a;
        if (a == 1){ std::cout<<"KENYA:"<<std::endl;
        kenyaListingsKSH();}else if (a == 2){ std::cout<<"CHINA:"<<std::endl;
        chinaListingsKSH();}else if (a == 3){ std::cout<<"GERMANY:"<<std::endl;
        germanyListingsKSH();}else if (a == 4){ std::cout<<"USA:"<<std::endl;
        usaListingsKSH();}else if (a == 5){ std::cout<<"AUSTRALIA:"<<std::endl;
        australiaListingsKSH();}else if (a == 6){ std::cout<<"BRAZIL:"<<std::endl;
        brazilListingsKSH();}else if (a == 7){ std::cout<<"UAE:"<<std::endl;
        uaeListingsKSH();}
    }
}
void Listings::showListingsKSH (int a)
{
            if (a == 1){ std::cout<<"KENYA:"<<std::endl;
        kenyaListingsKSH();}else if (a == 2){ std::cout<<"CHINA:"<<std::endl;
        chinaListingsKSH();}else if (a == 3){ std::cout<<"GERMANY:"<<std::endl;
        germanyListingsKSH();}else if (a == 4){ std::cout<<"USA:"<<std::endl;
        usaListingsKSH();}else if (a == 5){ std::cout<<"AUSTRALIA:"<<std::endl;
        australiaListingsKSH();}else if (a == 6){ std::cout<<"BRAZIL:"<<std::endl;
        brazilListingsKSH();}else if (a == 7){ std::cout<<"UAE:"<<std::endl;
        uaeListingsKSH();}
}


