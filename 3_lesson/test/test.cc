#include <iostream>
#include <unordered_map>
#include <string>

int main()
{
    std::unordered_map<std::string,std::string> dict;
    dict.insert(std::make_pair("apple", "苹果"));
    dict.insert(std::make_pair("bit", "比特"));
    dict.insert(std::make_pair("sust", "陕西科技大学"));
    dict.insert(std::make_pair("xatu", "西安工业大学"));

    std::cout << dict["apple"] << std::endl;
    return 0;
}
