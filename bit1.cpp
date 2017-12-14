#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
std::string input("llama,goat,cow");
std::ostringstream o;

std::string word;

std::istringstream i(input);
while (std::getline(input, word, ','))
    o << "@" << word << ",";

std::string result(o.str(), o.str().size()-1);

// show the result:
std::cout << result;
}
