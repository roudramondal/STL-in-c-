#include<bits/stdc++.h>
using namespace std;
template <typename T>
struct pair 
{
  T x, y;
  pair (T i , T j)
{
  x = i;
  y = j;
}
T getFirst ()
{
  return x;
}
T getSecond ()
{
  return y;
}
};
int main()
{
  pair<int> p1(10, 20);
  cout << p1.getFirst() << " " << p1.getSecond();
  return 0;
}