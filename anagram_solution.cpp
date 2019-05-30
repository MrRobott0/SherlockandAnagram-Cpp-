#include <bits/stdc++.h>
#include <map>
#include <vector>

using namespace std;
vector<string> substrings;

void subString(string s, int n) {
//Creates a vector of substrings created from the main string
  for (int i = 0; i < n; i++){
    for (int len = 1; len <= n - i; len++) {
        if (i==0 && len==n){
          //Prevents creating a substring that is the same as the main full string
          continue;
        }
        substrings.push_back(s.substr(i, len));
    }
  }
}


int sherlockAndAnagrams(string s) {
  
  //Create a vector of all possible substrings 
  subString(s, s.length());

  map<char, int> mymap[substrings.size()];
  map<char, int>::iterator it;
  int counter = 0;

  //Then make an array of MAPS, a map for each substring 
  //Each letter is a key and the amount of times that letter is in the
  //substring is paired with the key. 
  for(int i=0; i <substrings.size(); i++){
    for(int j=0; j<substrings[i].length(); j++){
        it = mymap[i].find(substrings[i][j]);

        // New letter found, add to map
        if (it == mymap[i].end()){
            mymap[i].insert(pair<char, int>(substrings[i][j],1));
            
        // Letter already in map increase its # of appearence by 1
        } else {
            mymap[i][substrings[i][j]]++; 
        }
    }
  }

  //Then itterate through all the MAPs comparing them with each other
  //Each matching map is counted
  for (int i=0; i<substrings.size(); i++){
      for (int j=i+1; j<substrings.size(); j++){
          if (mymap[i] == mymap[j]) counter++;
      }
  }

  substrings.clear();
  return counter;
}

int main(){
  return 0;
}
