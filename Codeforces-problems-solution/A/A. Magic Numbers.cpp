#include <iostream>
#include <string>
#include <regex>
int main ()
{
    const char cstr[] ="subject";
    std::string s("subject");
    std::regex e("(subx)(.*)");


    std::cmatch cm;
    std::regex_match( cstr,cm,e,std::regex_constants::match_default );

    std::cout << "the matches were: ";
    for (unsigned i=0; i<cm.size(); ++i) std::cout<<cm[i]<<std::endl;


    //std::cout<<std::endl;

    return 0;
}





///string s;cin>>s;regex_match(s,regex("(1|14|144)*"))?cout<<"YES":cout<<"NO"; ///GNU C++11

