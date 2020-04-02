#include <iostream>
using namespace std;

int main()
{
	int count, i, arr[30], num, first, last, middle;
	cout<<"Enter the number of elements for the array?:";
        cin>>count;

	for (i=0; i<count; i++)
	{
		cout<<"Enter elements "<<(i+1)<<": ";
                cin>>arr[i];
	}
	cout<<"Enter the element that you want to search:";
        cin>>num;
	first = 0;
	last = count-1;
	middle = (first+last)/2;
	while (first <= last)
	{
	   if(arr[middle] < num)
	   {
		first = middle + 1;

	   }
	   else if(arr[middle] == num)
	   {
		cout<<num<<"Element present at position "<<middle+1<<"\n";
                break;
           }
           else {
                last = middle - 1;
           }
           middle = (first + last)/2;
        }
        if(first > last)
	{
	   cout<<num<<"Element not found!";
	}
	return 0;
}
