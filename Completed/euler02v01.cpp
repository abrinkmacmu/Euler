#include <iostream>
#include <ctime>

using namespace std;

int main()
{
  int start_s=clock();
  int a=1;
  int b=2;
  int c;
  int sum=2;
		do{
			c=a+b;
            if(c>4000000){
                break;
			}
            if(c%2==0){
            sum=sum+c;
			}
            a=b;
            b=c;
		}while(c<4000000);

	cout<<sum<<endl;
	cout << "Code executed in " << (clock()-start_s)/double(CLOCKS_PER_SEC)*1000 <<" millisec" <<endl;
    return sum;
}
