

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


int main()
{
    //user details for log in.
    userDetails();
    std::cout<<"Please select an option below: "<<std::flush<<std::endl<<"1. Trade stocks."<<std::flush<<std::endl<<"2. Trade with leverage."<<std::flush<<std::endl;
    int selectOption; //user to choose between either option one or two
    std::cin>>selectOption;
    std::cout<<"Select a country to trade on its listings. For international listings, press 0"<<std::endl;
    std::cout<<"1. Kenya"<<std::endl;
    std::cout<<"2. China"<<std::endl;
    std::cout<<"3. Germany"<<std::endl;
    std::cout<<"4. USA"<<std::endl;
    std::cout<<"5. Australia"<<std::endl;
    std::cout<<"6. Brazil"<<std::endl;
    std::cout<<"7. UAE"<<std::endl;
    int selectCountry; //user to choose a country to trade listings of
    std::cin>>selectCountry;
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
       std::cout<<"Passwords do not match!! Try again"<<std::endl;
       std::cin>>passwordConfirm;
    }
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


