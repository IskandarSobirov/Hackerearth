#include <bits/stdc++.h>
using namespace std;



int solution( int A)
 {
    
    string value = to_string(A);
    const int size = value.size(); 

    for(int i = 0; i < size; i++){
      
      if(value[i] - '0' == 6) {
          value[i] = '9';
          
          break;
      }
    }
     
    int res = stoi(value);  

    return res;
    
}



 
int main()
{
   

    int val = 96;
    cin >> val; 

    cout << solution(val) << endl; 


    return 0;
}
