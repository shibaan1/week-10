#include<iostream>
#include<cstring>
using namespace std;
struct Employ{
    string employee_name;
    double basicPay;
};

int main(){
    struct Employ e;
    e.employee_name="XYZ";
    e.basicPay=56780;

   double DA = (52.0/100.0)*(e.basicPay);
    double gross_salary = DA + e.basicPay;
    cout<<"salary is "<<gross_salary<<endl;

}
