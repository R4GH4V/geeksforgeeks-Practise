/*
Given an array of N integers and an index I. Your task is to print the element present at index I in the array.

Input:
First line of input contains an integer T which denotes the number of test cases. Then T test cases follow. First line of each test case contains two space separated integers N and I, where N denotes the number of elements in the array and I denotes the index whose element has to be printed. Second line of each test case contains N space separated integers which denotes the elements of array.

Output:
For each test case display the element present at index I.

Constraints:
1 <=T <= 10
1 <= N <= 100
0 <= I <= N - 1


Example:

Input:
2
5 2
10 20 30 40 50
7 4
10 20 30 40 50 60 70

Output:
30
50

*/

#include<iostream>
using namespace std;
int main()
 {
	int t,n,i,in;
	cin>>t;
	while(t--)
	{
	    cin>>n>>in;
	    int a[n];
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    cout<<a[in]<<endl;
	}
	return 0;
}
