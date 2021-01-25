// C++ program of above implementation 
#include<iostream> 
using namespace std; 

// Driver code 
int main() 
{ 
	int arr[] = { 1000, 11, 445, 1, 330, 3000 }; 
	int n= 6; 
	
	int i,real_max,real_min,temp_max,temp_min; 
	
	// If array has even number of elements 
	// then initialize the first two elements 
	// as minimum and maximum 
	if (n % 2 == 0) 
	{ 
		if (arr[0] > arr[1])	 
		{ 
			real_max = arr[0]; 
			real_min = arr[1]; 
		} 
		else
		{
			real_max = arr[1]; 
			real_min = arr[0]; 
		} 
		// Set the starting index for loop 
		i = 2; 
	} 
	
	// If array has odd number of elements 
	// then initialize the first element as 
	// minimum and maximum 
	else
	{ 
		real_max = arr[0]; 
		real_min = arr[0]; ; 
		
		// Set the starting index for loop 
		i = 1; 
	} 
	
	// In the while loop, pick elements in 
	// pair and compare the pair with max 
	// and min so far 
	while (i < n - 1) 
	{		 
		if (arr[i] > arr[i + 1])		 
		{ 
			if(arr[i] > real_max)	 
				real_max = arr[i]; 
				
			if(arr[i + 1] < real_min)		 
				real_min = arr[i + 1];	 
		} 
		else	
		{ 
			if (arr[i + 1] > real_max)	 
				real_max = arr[i + 1]; 
				
			if (arr[i] < real_min)		 
				real_min = arr[i];	 
		} 
		
		// Increment the index by 2 as 
		// two elements are processed in loop 
		i += 2; 
	}		 
	
	cout << "Minimum element is "<< real_min << endl; 
	cout << "Maximum element is "<< real_max; 
		
	return 0; 
} 

