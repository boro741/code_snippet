/********* PERMUTATION *********/

#include<iostream>
#include<algorithm>
#include<unordered_set>

using namespace std;

int main(){
    
    unordered_set<string> dic = {"stop","pots","tops","opts","post","spot"};

    string word = "stop";

    // sorts the word "stop" in lexographic order
    sort(word.begin(),word.end());

    do{
        // dic.count(word) counts the number of occurence of word in dic.
        cout << word << (dic.count(word) ? " Is a word!\n" : "\n");
    } while(next_permutation(word.begin(),word.end()));
    return 0;
}