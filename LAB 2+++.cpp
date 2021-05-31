ADEOLA PRINCE OLUWAJUWON
#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{ 
    const char TAB = '\t';
    const int DAYS_IN_MONTH = 30;
    const int DAYS_IN_YEAR = 365;
    const int INTEREST_RATE = 5;
    const int P = 100;
    float d, n, profit, pm, total;
    cout <<"HELLO! THIS IS YOUR DEPOSIT CALCULATOR"<< endl;
cout <<"TO CALCULATE ANNUAL INCOME, FOLLOW BELLOW "<< endl;
    cout<<""<<endl;
    cout <<"Enter your amount of deposit and press Enter.."<<endl;
    cout <<"*NB: THIS CALCULATOR CALCULATES CURRENCY IN UNITED STATES DOLLARS.*"<< endl;
    cin >>d;
    cout<<""<<endl;
    cout <<"YOU ENTERED" << TAB << d <<"$"<<endl;
    cout <<"*NB: YOUR INTEREST RATE IS 5% PER ANNUM.*"<<endl;
    cout<<""<<endl;
    cout<<"INPUT THE NUMBER OF MONTHS OF MONEY STORED AND PRESS ENTER.."<< endl;
    cin >>n;
    cout<<""<<endl;
    cout <<"YOU ENTERED" << TAB << n << TAB <<"MONTHS"<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
    cout<<""<<endl;    
    cout <<"YOUR AMOUNT OF DEPOSIT:" << TAB << d << TAB <<"$"<<endl;
    cout<<""<<endl;
    cout <<"YOUR INTEREST RATE IS 5% PER ANNUM."<<endl;
    cout<<""<<endl;
    cout <<"NUMBER OF MONTHS ARE :" << TAB << n <<endl;
    cout<<""<<endl;
    profit = (d*INTEREST_RATE*DAYS_IN_MONTH*n) / (P*DAYS_IN_YEAR);
    total = profit + d;
    pm = profit/n;
    cout <<"YOUR PROFIT PER MONTH IS" << TAB << pm <<"$"<<endl;
    cout<<""<<endl;
    cout <<"YOUR TOTAL PROFIT IS: " << TAB << profit << TAB <<"$"<<endl;
    cout<<""<<endl;
    cout<<"YOUR INCOME IS: "<<total<<"$"<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
    cout<<"GOODBYE :)"<<endl;
    cin.get();
    return 0;
}
