#include <iostream>
using namespace std;
// what does the vector class have ?
// Push function , pop function
// size and capacity function
class MyVector
{
   public:
    int* Avec;
    int nLength,nCapacity;
    public:
    MyVector()
    {
        Avec = new int[1];
         nCapacity =1;
         nLength =0;;
    }
    int push(int nElement)
    {
        if(nCapacity == nLength)
        {
            // We need to increase the array capacity
            nCapacity =nCapacity* 2;
            int* TempArray = new int[nCapacity] ;
            for(int i=0;i<nLength;i++)
            {
                TempArray[i] = Avec[i];
            }

            delete[] Avec;
            Avec = TempArray;
        }
        Avec[nLength] = nElement;
        nLength++;
        nCapacity++;
        return 1;
    }
    int pop()
    {
        for(int i =nLength-1;i<0;i--)
        {
            Avec[i] = Avec[i+1];
        }
        nLength--;
        return 1;
    }

    int get(int nIndex)
    {
        if(nIndex < nLength)
        {
            return Avec[nIndex];
        }
        return -1;
    }
    int size()
    {
        return nLength;
    }
    int Max_Size()
    {
        return nCapacity;
    }
    void print()
    {
        cout<<"[ ";
        for(int i = 0;i<nLength;i++)
        {
                cout<<Avec[i]<<" ";
        }

        cout<<"]"<<endl;
    }
};

int main() {
  MyVector vec;
  vec.push(5);
  vec.push(7);
  vec.push(9);
  cout<<"Size :"<<vec.size()<<endl;
  vec.print();
  vec.pop();
  cout<<"Size :"<<vec.size()<<endl;
  vec.print();
  cout<<"Max capacity : "<<vec.Max_Size()<<endl;
  vec.push(10);
  vec.push(14);
  cout<<vec.get(2)<<endl;

}
