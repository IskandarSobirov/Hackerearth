#include <iostream>
#include<string>
#include<vector>
using namespace std;

// Function to find all Permutations of a given string str[i..n-1]
// containing all distinct characters
void permutations(string str, int i, int n)
{
    // base condition
    if (i == n - 1)
    {
        cout << str << endl;
        return;
    }

    // process each character of the remaining string
    for (int j = i; j < n; j++)
    {
        // swap character at index i with current character
        swap(str[i], str[j]);        // STL swap() used
        cout << "First swap : "<<str[i] <<" " << str[j] << endl;
        // recur for string [i+1, n-1]
        permutations(str, i + 1, n);

        // backtrack (restore the string to its original state)
        swap(str[i], str[j]);
        cout <<"Second swap: "<< str[i] <<" " << str[j] << endl;
    }
}

// Find all Permutations of a string
int main()
{
    string str = "123";
    int n; 
    cout << "Enter a number: ";
    cin >> n;

    string s; 

    for(int i = 1; i <= n; i++)
    {
      s+=to_string(i);
    }
    permutations(s, 0, s.length());  

    return 0;
}