/*
Avery Zamzow
CSEC 221.202
Homework1
*/

#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

int BianarySearch(vector <int> v, int k, int low, int high)				//binarysearch
{
	int mid;
	if (low == high)
	{
		if (v[low] == k)
		{
			return low;
		}
		return 0;
	}
	
	mid = (high + low ) / 2;	// mid value
    if(v[mid] == k)
	{
		return mid;
	}
	else if(v[1] < v[2])// ltg INC										//if acending order
	{
	    if(v[mid] < k)
	    {
			return BianarySearch(v, k, mid+1, high);
		}
	    else 
		{
			return BianarySearch(v, k, low, mid-1);
		}
	}
	
	else if(v[1] > v[2]) // gtl corr									//if decending order
	{		
	    if(v[mid] < k)
	    {
			return BianarySearch(v, k, low, mid-1);
		}
	    else 
		{
			return BianarySearch(v, k, mid+1, high);
		}
	}
	else{
		return 0;
	}
}
		
bool aSorted(vector <int> v,int n)							//sort function for ascending vector
{
    int c1 = 1, c2 = 1;
    for(int i = 1; i < n; i++)
    {
        if(v[i-1]>v[i])
        c1++;
        else c2++;
   }
  
   if(c1 == n || c2 == n)
   {
      return false;
   }
  
   else return true;
}

bool dSorted(vector <int> v,int n)						//sort function for decending vector
{
    int c1 = 1, c2 = 1;
    for(int i = 1; i < n; i++)
    {
        if(v[i-1]<v[i])
        c1++;
        else c2++;
   }
  
   if(c1 == n || c2 == n)
   {
      return false;
   }
  
   else return true;
}

int main()
{
	int aL[] = {1,2,4,8,16,32,64,128,256,512,1024,2048};			// acending vector
	int dL[] = {2048,1024,512,256,128,64,32,16,8,4,2,1};			// decending vector
	int size = 12;
	
	vector<int> v1( aL, aL + 12 );									//copy of aL
	vector<int> v2( dL, dL + 12 );									//copy of dL
	
	if(aSorted(v1,12))												// checks if acending vector is sorted
	{
		cout<<"Vectors are not sorted ascending order, please sort."<<endl;
		return 0;
	}
	
	else
	{
		int naL1 = 2048;										// checks last integer in vector
		int pos1 = BianarySearch(v1, naL1, 0, size);

		if(pos1){
 			cout<<"Found element: " << naL1 << " . Comparisons is: "<< pos1 << endl;
			cout<<"\n"<<endl;
		}
		else
		{
			cout<<"Element not found"<< endl;
			cout<<"\n"<<endl;
		}

		int naL2 = 3;											// throws exception if acending order not sorted
		int pos2 = BianarySearch(v1, naL2, 0, size);
		if(pos2){
			cout<<"Found element: " << naL2 << " . Comparisons is: "<< pos2 <<  endl;
			cout<<"\n"<<endl;
		}
		else
		{
			cout<<"Element not found"<< endl;
			cout<<"\n"<<endl;
		}
	}
	if(dSorted(v2,12))												// checks if decending vector is sorted
	{
		cout<<"Vectors are not sorted decending order, please sort."<<endl;
		return 0;
	}
	else
	{
		int nbL1 = 1;											// checks last integer in vector
		int pos3 = BianarySearch(v2, nbL1, 0, size);
		if(pos3){
			cout<<"Found element: " << nbL1 << " . Comparisons is: "<< pos3 <<  endl;
			cout<<"\n"<<endl;
		}
		else
		{
			cout<<"Element not found"<< endl;
		}

		int nbL2 = 10;											// throws exception if decending order not sorted
		int pos4 = BianarySearch(v2, nbL2, 0, size);
		if(pos4){
			cout<<"Found element: " << nbL2 << " . Comparisons is: "<< pos4 << endl;
			cout<<"\n"<<endl;
		}
		else
		{
			cout<<"Element not found"<< endl;
		}
	}
}
