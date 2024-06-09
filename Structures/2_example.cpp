// Example

#include<iostream>
using namespace std;
           
struct car{
      string brand;
      int price_inL;
      string origin;
};        
           
int main(){

      struct car c1,c2;

      cout<<"Enter car brand = ";
      cin>>c1.brand;

      cout<<"Enter price in L = ";
      cin>>c1.price_inL;

      cout<<"Origin country = ";
      cin>>c1.origin;

      cout<<"-----------------------------------"<<endl;

      cout<<c1.brand<<" "<<c1.price_inL<<" "<<c1.origin<<endl;

return 0;
}