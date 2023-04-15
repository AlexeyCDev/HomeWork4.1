#include <iostream>
using namespace std;
int main()
{
 const int M=22;
 int array[M]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22};
 double sum=0;
 int count=0;
 for(int i=0;i<M;i++)
{
 sum+=array[i];
}
 double avg=sum/M;
 for(int i=0;i<M;i++)
{
  if(array[i]>avg)
  {
  count++;
  }
}
cout<<"The number of elements of the array M(22) is greater than the arithmetic mean of this array:";
cout<<count<<endl;
return 0;
}

