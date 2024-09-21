// Function template
#include <bits/stdc++.h>
using namespace std;
template <typename T>
T arrMax (T arr[],int n)
{
  T res = arr[0];
  for (int  i = 1; i < n ; i++)
  {
    if (arr[i]>res)
      res = arr[i];
  }
  return res;
}
int main()
{
  int arr1[] = {10, 40, 45};
  cout << arrMax<int>(arr1, 3)<< endl;
  float arr2[] = {10.5, 50, 1.5, 30};
  cout << arrMax <float>(arr2, 4)<< " ";
  return 0;
}