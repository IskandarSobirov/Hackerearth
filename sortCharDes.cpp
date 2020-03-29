
// Sample code to perform I/O:

#include <iostream>
#include<string>
#include<algorithm> 
using namespace std;
bool mx(char a, char b) {return a > b;}  
int main() {
	int cases, beg, en;
	cin >> cases;
	string s;
	while(cases--)
	{
	    
	    cin >>s >> beg >> en;

      //must be inclusive that way adding 1 to end
	    sort(s.begin()+beg, s.begin()+en+1,mx);  
	    
	    cout << s << endl;
	    
	}// Writing output to STDOUT
}
