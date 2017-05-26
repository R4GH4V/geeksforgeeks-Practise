/*
Given an array of N integers. Your task is to print the sum of all of the integers.

Input: 
First line of input file contains a single integer T which denotes the number of test cases. Then, T test cases follow. First line of each test contains a single integer N which denotes the number of elements in an array. Second line of each test case contains N space separated integers denoting the elements of an array.


Output:
Corresponding to each test case, print the sum of array in a new line.

Constraints:
1<=T<=100
1<=N<=1000

Example:
Input:
2
4
1 2 3 4
6
5 8 3 10 22 45

Output:
10
93

*/

#include<iostream>
using namespace std;
int main()
 {
	int t,n,i,sum;
	cin>>t;
	while(t--)
	{
	    sum=0;
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	        sum=sum+a[i];
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
