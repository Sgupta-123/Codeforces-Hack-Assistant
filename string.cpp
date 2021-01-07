#include <bits/stdc++.h>
#define ll long long
//You can add macros here
using namespace std;
//Note this programme will generate Random Arrays according to the given size 
//Change the data type here according to question
//Add input parameters in the function array
string solve(string n)
{// Paste your code here excluding the input part
return n;
    }
    string solve2(string h)
    {//Paste Another User's Code of whom you want to Hack the solution
    if(h[0]>'d')
    h+="r";
    return h;
        }
        
string printRandomString(int n) 
{ // For Randomly Generating String
    char alphabet[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 
                          'h', 'i', 'j', 'k', 'l', 'm', 'n',  
                          'o', 'p', 'q', 'r', 's', 't', 'u', 
                          'v', 'w', 'x', 'y', 'z' }; 
  
    string res = ""; 
    for (int i = 0; i < n; i++)  
        res = res + alphabet[rand() % 26]; 
      
    return res; 
} 
int main()
{   //note:can change the values of variables to decrease or increase number of test cases
    //Can change the data type of following variables according to Requirements
	int k=10;//This is the number of Test cases Yo want 	
    int n=6;//size of the string,Can Change as per requirement
    for(int i=0;i<k;i++)//loop for test cases
	{
			string s=printRandomString(n);
            string k=solve(s);
            string g=solve2(s);
            if(k!=g)
            cout<<k;
            //print the wrong test case

		//cout<<" * ";
     	
        cout<<endl;
	}
	return 0;
    //Note:You have to make some changes in output format
    //Common template for every programme is given in the repository
}