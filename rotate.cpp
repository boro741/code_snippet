/********* Rotate Vector or array *********/

#include<iostream>
#include<algorithm>

using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n],k;
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    cin>>k;
	     rotate(a,a+k,a+n); // Left array rotation - rotate(v.begin(), v.begin()+k,v.end())
                            // Right array rotation - rotate(v.begin(),v.begin()-k,v.end())
	     for(int i=0;i<n;i++)
	     cout<<a[i]<<" ";
	     cout<<endl;
	}
	return 0;
}