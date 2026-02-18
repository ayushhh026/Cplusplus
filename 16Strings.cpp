#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string str = "gfg";
    string rev = str;

    reverse(rev.begin(), rev.end());

    cout << (str == rev ? "Palindrome" : "Not Palindrome");

    return 0;
}
