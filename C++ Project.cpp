#include <iostream>
#include <string>
using namespace std;

class Test {
    string text;

    public:
    Test(const string& n):text(n){};
    void print_text(){cout<<text<<endl;}
};

int main()
{
    Test t("Gay");
    t.print_text();

    return 0;
}