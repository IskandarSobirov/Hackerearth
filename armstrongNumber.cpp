#include <iostream>
using namespace std;

int main(){
int num;

cout << "Enter number: ";
cin >> num;

int temp = num;

int sum = 0;
int cube = 0;
while(temp > 0)
{
  cube=(temp%10);
  sum+=(cube*cube*cube);
  temp/=10;
}

 if(sum == num) cout <<"Given number is Armstrong number" << endl;
 else 
	cout <<"Given number is not a Armstrong number" << endl;


return 0;
}
