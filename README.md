# SherlockandAnagram-Cpp-
C++ Solution to "Sherlock and Anagrams" puzzle at HackerRank

This solution creates a vector of strings, each string in the vector being a substring of the main string to be tested.
To avoid haveing to make checks on the combination of characters in the substrings during comparisons, the substrings are mapped out.
An array of maps is created, per substring each char is a key and the amount of time the char is in the string is the value paired to the key. example string "abac" pair<'a', 2>. 

As a result, similar substrings will produce mating Maps, example substring "abby" and "baby" will map out exactly the same. 
Once all the substrings have been mapped, you can itterate through them and compare them with each other. map[1] == map[2]
keep a counter for every match and return that value in the end.

Hope this provides a good explination and feel free to edit and improve upon the logic and readme files!

-MrRobott0
