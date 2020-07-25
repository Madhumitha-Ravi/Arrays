
// A program to find the longest word in a string 
#include <iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;

string LongestWord(string sen) {
  
  // code goes here  
  map<int,string,greater<int>> MyWordsMap;
  string word ="";
  for(int i=0; i<sen.length();i++)
  {
    if (isalnum(sen[i]))
    {
        word += sen[i];
    }
    if(sen[i] == ' ')
    {
      if(word.length() != 0)
      {
        MyWordsMap.insert({word.length(),word});
        word.clear();
      }
    }
  }
  if(word.length() != 0)
  {
      MyWordsMap.insert({word.length(),word});
  }
  
  if (MyWordsMap.size() >0)
  {
    return MyWordsMap.begin()->second;
  }
  
  return "";

}

int main(void) { 
   
  // keep this function call here
  string sInpt;
  cin>>sInpt;
  cout << LongestWord(sInpt);
  return 0;
    
}
