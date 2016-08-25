#include<bits/stdc++.h>

#include<stdio.h>

#include<stack>

using namespace std;

stack<int> stck;

int main()

{
	int t,cu,ch;
	
	cin>>t;


	while(t--)
	
	{

		
		cin>>cu;
		
		if(cu==1)
		
		{
			
			if(stck.empty())
			
				cout<<"No Food\n";
			
			else
			
			{
				
				cout<<stck.top()<<"\n";
				
				stck.pop();
			
			}
		
		}
		
		else
		
		{
			
			cin>>ch;

			
			stck.push(ch);
		
		} 
	
	}
	
	return 0;

}