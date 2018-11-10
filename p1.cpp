#include "std_lib_facilities.h"
#include <map>

int main()
{
    string previous=" ";
    string current;
    map<string,int> words_counter; //tablica asocjacyjna
    int word_position=0;

    while (cin>>current){
        if(previous==current){
            words_counter[current]++;
            cout<<"repeated word: " <<current<< words_counter[current]<<'\n';
        }
        previous=current;
    }
    for(auto& kv: words_counter){
      cout<<kv.first<<" ma wartosc "<<kv.second<<endl;
    }

}
