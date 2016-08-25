#include <iostream>

#include <algorithm>

using namespace std;
 

#define M 1000000007
 

int main()
{
	long long unsigned int a,b,c,n;
	
	cin>>a>>b>>c>>n;
	
	
	long long unsigned int A[n],B[n];
	
	A[0] = (a*c)%M;
	
	long long unsigned int minA=A[0],secMinA,posMinA=0,posSecMinA=1;
	
	for(int i=1 ; i<n ; i++)
	
	{
	A[i] = (((((A[i-1]*a)%M) *b)%M) *c)%M + (((A[i-1]*a)%M)*b)%M + (((A[i-1]*a)%M)*c)%M;
	    
		A[i] = A[i] % M;
	    
		if(i==1) secMinA=A[i];
	    
		if(A[i]<minA)
		{
	    	
			swap(minA,secMinA);
	    	
			minA=A[i];
	    	
			swap(posMinA,posSecMinA);
	    	
			posMinA=i;
	    
		}
	    
		else if(A[i]<secMinA)
		{
	    	
			secMinA=A[i];
	    	
			posSecMinA=i;
	    
		}
	
	}
	
	B[0] = (b*c)%M;
	
	long long unsigned int minB=B[0],secMinB,posMinB=0,posSecMinB=1;
	
	for(int i=1 ; i<n ; i++)
	
	{
	    
		B[i] = (((((B[i-1]*b)%M)*c)%M)*a)%M + (((B[i-1]*b)%M)*a)%M + (((B[i-1]*b)%M)*c)%M;
	    
		B[i] = B[i]%M;
	    
		if(i==1) secMinB=B[i];
	    
		if(B[i]<minB)
		{
	    	
			swap(minB,secMinB);
	    	
			minB=B[i];
	    	
			swap(posMinB,posSecMinB);
	    	
			posMinB=i;
	    	
	    
		}
	    
		else if(B[i]<secMinB)
		{
	    	
			secMinB=B[i];
	    	
			posSecMinB=i;
	    
		}
	    
	
	}  
	
	if(posMinA!=posMinB)	
		cout<<minA+minB;
	
	else
	{
		
		cout<<min(minA+secMinB,minB+secMinA);
	
	}
	
	return 0;

}