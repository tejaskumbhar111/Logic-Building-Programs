#include <iostream>
using namespace std;

class Arithmatic // Encapsulation bcoz Class is there
{
public:
    double No1;
    double No2;

    Arithmatic(double A, double B)
    {
        No1 = A;
        No2 = B;
    }
    double Addition()
    {
        double Ans;
        Ans = No1 + No2;
        return Ans;
    }
    double Substraction()
    {
        double Ans;
        Ans = No1 - No2;
        return Ans;
    }
};

int main()

{
    Arithmatic aobj1(10.5, 11.6);
    Arithmatic aobj2(20, 21);

    cout << aobj1.Addition() << "\n";
    cout << aobj2.Addition() << "\n";
    cout << aobj1.Substraction() << "\n";
    cout << aobj2.Substraction() << "\n";

    return EXIT_SUCCESS;
}