#include <iostream>
#include <string>
using namespace std;
class list{
  unsigned int account_number;
    string FN,LN;
    double balance;
public:
    list(unsigned int a,string f,string l,double b ){
        
        account_number=a;
        FN=f;
        LN=l;
        balance=b;
    }
    void getpart(){
        cout<<"Account Number:"<<account_number<<"\nFirst Name:"<<FN<<"\nLast Name:"<<LN<<"\nBalance:"<<balance<<endl;
        }
    void setpart(unsigned int a){
        account_number=a;
        }};
int main()
{
    list listt(0012,"Hamza","Ranjha",90000);
    listt.getpart();
    return 0;
}
