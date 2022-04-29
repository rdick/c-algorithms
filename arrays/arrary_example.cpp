#include<iostream>
using namespace std;
#include <string> 

int arr[100]; Stack Allocated
int n = 1;
int arr[n]; Stack Allocated

int *arr = new int[n]; Heap Allocated

int arr[] = {0, 1, 2, 3, 4, 5, 6, 7} Stack Allocated