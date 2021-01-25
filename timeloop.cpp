#include <iostream>
using namespace std;
int main()
{
  int N;
  cin>>N;
  int i = 1;
  if(N >= 1 && N <= 100)
  {
     while(i <= N)
     {
       cout << i <<" "<< "Abracadabra"<<endl;
       i++;
     }
  }
}