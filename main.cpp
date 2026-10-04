#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double purchase = 95;
    double salestaxrate = 0.065;
    double countysalestaxrate = 0.02;

    double salestax = purchase * salestaxrate;
  double countysalestex = purchase * countysalestaxrate;

    double totaltax = salestax + countysalestaxrate;
   double  totalprice = purchase + totaltax;



    cout<< "the purchase price is: $"<< purchase <<endl;
    cout<< "the total tax is: %"<< totaltax<<endl;
    cout<< "the total price is: $"<< totalprice<<endl;

    return 0;
}

