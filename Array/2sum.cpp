// 2 sum in array

// {2 5 1 8 9} 
// target = 9
// ans->{1,8}

// Brute Force

#include<bits/stdc++.h>
using namespace std;
int main()
{
int arr[] = {2,5,1,8,9};
int n = sizeof(arr)/sizeof(arr[0]);

int target = 9;

for(int i = 0; i < n; ++i)  
{
int num = arr[i];
bool isFound = false;
for(int j = i + 1; j < n; ++j) 
{
if(num + arr[j] == target)
{
cout << num << " " << arr[j];
isFound = true;
break;
}
}

if(isFound)
{
break;
}
}
return 0;
}

// T.C => O(n^2)
// S.c => O(1)
