#include<bits/stdc++.h>
#include<stdlib.h>
 
 class NStack
 {
 	int *arr;
 	int *top;
 	int *next;
 	int n,s;
 	int freespot;
 	
 	public:
 		NStack(int N,int S)
 		{
 			n=N;
 			s=S;
 			arr=new int[s];
 			top=new int[n];
 			next=new int[s];
 			
 			for(int i=0;i<s;i++)
 			{
 				next[i]=i+1;
			 }
			 next[s-1]=-1;
			 freespot-0;
		 }
		 bool push(int x,int m)
		 {
		 	if(freespot=-1)
		 	{
		 		return false;
			 }
			 int index=freespot;
			 freespot=next[index];
			 arr[index]=x;
			 next[index]=top[m-1];
			 top[m-1]=index;
			 return true;
		 }
	}


