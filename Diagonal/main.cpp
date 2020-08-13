#include <iostream>

using namespace std;

class DMatrix
{
private:
    int n;
    int *A;
public:
    DMatrix(int n)
    {
        this->n=n;
        A=new int[n];
    }
    void sets(int i, int j, int x);
    int gets(int i, int j);
    void Display();
    ~ DMatrix()
    {
        delete[]A;
    }
};
void DMatrix::sets(int i,int j,int x)
{
    if(i==j)
    {
        A[i-1]=x;
    }

}
int DMatrix::gets(int i,int j)
{
   if(i==j)
   {
       return A[i-1];
   }
    else
        return 0;
}
void DMatrix::Display()
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                cout<<A[i-1]<<" ";
            }
            else
                cout<<0<<" ";
        }
        cout<<"\n";
    }
}
int main()
{
    int sizes=0,x=0;
    cout<<"Enter the size for our Array"<<endl;
    cin>>sizes;
    DMatrix M(sizes);
    cout<<"Now start setting the value of Diagonal elements"<<endl;
    for(int i=0;i<sizes;i++)
    {
        for(int j=0;j<sizes;j++)
        {
            if(i==j)
            {
                cin>>x;
                M.sets(i,j,x);
            }
        }
    }

   cout<<M.gets(2,2)<<endl;//you can write menu driven program for this
   M.Display();
return 0;
}
