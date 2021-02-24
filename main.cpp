#include <iostream>
using namespace std;
void printN(int N)
{
  if(N)
    {
        printN(N-1);
        cout<<N<<" ";
    }
    return;
}
int main()
{
    int n;
    cin>>n;
    printN(n);
}




/*#include <iostream>
using namespace std;
void printN(int N)
{
    int i;
    for(i=1;i<=N;i++)
        cout<<i<<" ";
    return;
}
int main()
{
    int n;
    cin>>n;
    printN(n);
}*/
