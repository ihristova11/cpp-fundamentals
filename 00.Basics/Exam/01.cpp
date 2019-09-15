#include <iostream>

using namespace std;

int main()
{
  double baklavaPrice, muffinPrice, stolenKg, sweetsKg, biscuitsKg;
  cin>>baklavaPrice>>muffinPrice>>stolenKg>>sweetsKg>>biscuitsKg;
      
  cout.setf(ios::fixed);
  cout.precision(2);
  cout<<1.6 * baklavaPrice * stolenKg + 1.8 * muffinPrice * sweetsKg + 7.5 * biscuitsKg<<endl;
}