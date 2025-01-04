#include <string>
#include <vector>
#include <list>
#include <iostream>

class TestClass
{
    int f1;
    double f2;
    std::string f3;

public:
    TestClass() : f1{}, f3{"small string"} {}
    int getF1() const { return f1; }
};

int main()
{
    std::list<TestClass> tc;
    
    std::cout << "Size of TestClass " << sizeof(TestClass) << '\n';
    std::cout << "Size of std::string " << sizeof(std::string) << '\n';
    
    for (int i = 0; i < 1000; ++i)
    {
        tc.emplace_back();
    }
    
    int s{};
    for (auto const& elem : tc)
    {
        s += elem.getF1();
    }
    std::cout << "s " << s << '\n';
}
