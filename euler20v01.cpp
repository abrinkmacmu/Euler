#include <iostream>
#include <ctime>

using namespace std;
long long product=1;
long long factorial(int x)
{
    if(x>1){
        cout<<x<<endl;
        product=product*x;
        cout<<product<<endl;
        factorial(x-1);
    }
    if(x==1){
    	return product;
	}
}
int main()
{
	int start_s=clock();
  cout<< factorial(100)<<endl;
  cout << "Code executed in " << (clock()-start_s)/double(CLOCKS_PER_SEC)*1000 <<" millisec" <<endl;
  return 0;
}
