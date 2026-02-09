#include<iostream>
using namespace std;
// namespace Triangle
// {
  bool isTriangle(int a, int b, int c)
  {
    // if (a<=0||b<=0||c<=0) return false;
  return ( a <= 0 || b <= 0 || c <=0 )?false:((a+b>c) && (a+c>b) && (b+c>b) );
     
//  return (a+b>c&&a+c>b&&b+c>b);   
     
  }
// };
int main()
{
    cout<<isTriangle(3,2,1)<<endl;
    cout<<isTriangle(10,10,20);
    return 0;
}

/*Describe(TriangleTests)
{
    It(Zero_ReturnsFalse)
    {
        Assert::That(Triangle::isTriangle(0,0,0),IsFalse());
        Assert::That(Triangle::isTriangle(0,1,2),IsFalse());

    }

    It(Negative_ReturnsFalse)
    {
        Assert::That(Triangle::isTriangle(-17,15,20),IsFalse());0000
        Assert::That(Triangle::isTriangle(-17,-15,20),IsFalse());
    }


    It(ValidTriangles_ReturnsTrue)
    {
        Assert::That(Triangle::isTriangle(15,17,20),IsTrue());
        Assert::That(Triangle::isTriangle(10,10,10),IsTrue());
        Assert::That(Triangle::isTriangle(10,5,10),IsTrue());

    }

    It(InvalidTriangles_ReturnsFalse)
    {
        Assert::That(Triangle::isTriangle(3,2,1),IsFalse());
        Assert::That(Triangle::isTriangle(10,10,20),IsFalse());
    }
};*/


/*    // if ( a % 2 == 0 && b % 2 == 0 )
    // {
    //     return (a+b>c);
    //     return true;
    // }
    // else if (b % 2 == 0 && c % 2 == 0 )
    // {
    //     return (b+c>a);
    //      return true;
    // }
    
    // else if(a % 2 == 0 && c % 2 == 0 )
    //  {
    //     return (a+c>b);
    //      return true;
    //  }
     */