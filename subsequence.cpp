/******* Subsequence ********/
#include<iostream>

using namespace std;

string print_subs(string input, string output){
    static string s = "";
    if(input.empty()){
        cout << output << endl;
        return;
    }

    // substr(1) returns from next 1 character.
    print_subs(input.substr(1), output);
    print_subs(input.substr(1), output + input[0]);
}

int main(){
    
    string a = "abcd";

    print_subs(a, "");
    return 0;
}