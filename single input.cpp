#include <bits/stdc++.h>
#define ll long long
//You can add macros here
using namespace std;
//Note this programme will generate Random Arrays according to the given size 
//Change the data type here according to question
//Add input parameters in the function array
int solve(int n)
{// Paste your code here excluding the input part
 if(n%2==0)
 n++;
 else
 n--;
 return n;
    }
    int solve2(int h)
    {//Paste Another User's Code of whom you want to Hack the solution
    if(h%2==0)
    {
        if(h>5)
        h++;
        else
        h-=2;
    }
    else
    h--;
    return h;
        }
        

int main()
{   //note:can change the values of variables to decrease or increase number of test cases
    //Can change the data type of following variables according to Requirements
	int k=10;//This is the number of Test cases Yo want 	
    for(int i=0;i<k;i++)//loop for test cases
	{
			int c=rand()%10;// random number generated,here 100 means in the range of 0 to 100,can change accordingly
			int d=solve(c);
            int e=solve2(c);
            
            if(d!=e)
            cout<<d<<" ";
            //print the wrong test case

		//cout<<" * ";
     	
        cout<<endl;
	}
	return 0;
    //Note:You have to make some changes in output format
    //Common template for every programme is given in the repository
}