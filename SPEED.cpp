#include <iostream>

using namespace std;

int main()

{
	int t;
	
	cin >> t ;
	
	while(t--)
	
	{
		
		long n; 
		
		long c = 1;
		
		cin >> n;
		
		long long speed[n];

		
		for(int i=0; i<n; i++)
		
		{
			
			cin >> speed[i] ;
		
		}

		
		for(int i=0 ; i <n-1 ; i++)
		
		{
			
			if(speed[i]>=speed[i+1])
			
			{

				
				c++;

			
			}
			
			else
			{
				
				speed[i+1]=speed[i];
			
			}

		
		}
		
		cout << c << endl;
	
	}

}
