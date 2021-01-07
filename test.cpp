#include <bits/stdc++.h>
#define ll long long
//You can add macros here
using namespace std;
//Note this programme will generate Random Arrays according to the given size 
//Change the data type here according to question
//Add input parameters in the function array
vector<int> solve(int *h,int *w,int n)
{// Paste your code here excluding the input part
    vector<int> c;
        vector<pair<int, int> > v;
        for(int i=0;i< n;i++)
        {
            cin >> h[i] >> w[i];
            v.push_back(make_pair(h[i] + w[i], i));
        }
        sort(v.begin(), v.end());
        for(int i=0;i< n; i++)
        {
            bool found = false;
            int ans = -1;
            for(int j=0;j< n; j++)
            {
                if (h[i] + w[i] > v[j].first)
                {
                    if ((h[v[j].second] < h[i] && w[v[j].second] < w[i]) || (w[v[j].second] < h[i] && h[v[j].second] < w[i]))
                    {
                        found = true;
                        ans = v[j].second;
                        break;
                    }
                }
                else break;
            }
            if (found)
                c.push_back(ans + 1);
            else 
            c.push_back(-1);
        }
        return c;
    }
    vector<int> solve2(int *h,int *w,int n)
    {//Paste Another User's Code of whom you want to Hack 
    vector<pair<pair<int,int>,int> >a,b;
    for(int i=0;i<n;i++)
    {
        a.push_back({{h[i],w[i]},(i)});
        b.push_back({{w[i],h[i]},(i)});
    }
    sort(a.begin(),a.end());sort(b.begin(),b.end());
    vector<pair<int,int> >mna(n),mnb(n);
    mna[0]={a[0].first.second,a[0].second};
    for(int i=1;i<n;i++)
    {
        pair<int,int> res=make_pair(a[i].first.second,a[i].second);
        mna[i]=min(mna[i-1],res);
    }
    mnb[0]={b[0].first.second,b[0].second};
    for(int i=1;i<n;i++)
    {
        pair<int,int> res=make_pair(b[i].first.second,b[i].second);
        mnb[i]=min(mnb[i-1],res);
    }
    vector<int> ans(n,-1);
    for(int i=0;i<n;i++)
    {   pair<pair<int,int>,int> res=make_pair(make_pair(a[i].first.first,-1),-1);
    vector<pair<pair<int,int>,int> >::iterator it;
        it=lower_bound(a.begin(),a.end(),res);
        if(it!=a.begin())
        {
            int x=it - a.begin() - 1;
            if(mna[x].first<a[i].first.second)
            {
                ans[a[i].second]=mna[x].second + 1;
                continue;
            }
        }
        vector<pair<pair<int,int>,int> >::iterator it1;
        it1=lower_bound(b.begin(),b.end(),res);
        if(it1!=b.begin())
        {
            int x=it1 - b.begin() - 1;
            if(mnb[x].first<a[i].first.second)
            {
                ans[a[i].second]=mnb[x].second + 1;
                continue;
            }
        }
 
    }
   return ans;

	}

int main()
{   //note:can change the values of variables to decrease or increase number of test cases
    //Can change the data type of following variables according to Requirements
	int k=10;//This is the number of Test cases Yo want 
	int v[10],a[10];//Array declaration,
    int n=5;//array size,recommonded to make it fix
	
    for(int i=0;i<k;i++)//loop for test cases
	{
		for(int j=0;j<n;j++)//loop for array
		{
			int c=rand()%100;// random array one,here 100 describes the range of nmber from 0 to 100,can chnage accordingly
            //can make as many as random arrays as you want
			int d=rand()%100;//random array two
		//cout<<c<<" ";
			v[j]=c;
			a[j]=d;
		}
     	vector<int> d=solve(v,a,5);//store your result in required data type
		vector<int> e=solve2(v,a,5);//store another user's code of whom solution you want to hack
        if(d!=e)
	{ for(ll i=0;i<n;i++)
        {
            cout<<v[i]<<" ";//print the desired output
        }cout<<" * ";
	for(ll i=0;i<n;i++)
        {
            cout<<a[i]<<" ";//print the desired output
        }
	}
        cout<<endl;
	}
	return 0;
    //Note:You have to make some changes in output format
    //Common template for every programme is given in the repository
}
