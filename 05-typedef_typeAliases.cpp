#include<iostream>
#include<vector>

typedef std::vector<std::pair<std::string, int>> pairlist_t;
typedef std::string s_t;

//works better with templates;
using s_t = std::string;
using pairlist_t = std::vector<std::pair<std::string, int>>;

int main(){
    //typedef -> reserved keyword used to create an additional name
                //  (alias) for another data type.
                //  New identifier for an existing type.
                //  Helps with readability and reduces typos.
                //  use when there is a clear benefit
                //  Replace with 'using' (work better w/ templates)

    s_t name = "Yash";
    std::cout << name;

    return 0;
}


