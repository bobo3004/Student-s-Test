#include <iostream>
#include <functional>
using namespace std;
namespace X
{
int var;
int print()
{
    cout << var << endl;
}
} // namespace X
namespace Y
{
int var;
int print()
{
    cout << var << endl;
}
} // namespace Y
namespace Z
{
int var;
int print()
{
    cout << var << endl;
}
} // namespace Z
int main()
{
    X::var = 7;
    X::print(); //print X’s var
    using namespace Y;
    {
        var = 9;
        print(); //print Y’s var
    }

    using Z::print;
    using Z::var;
    var = 11;
    print();    //print Z’s var
    Y::print(); //print Y’s var
    X::print(); //print X’s var
}
