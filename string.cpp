/****************** How to reverse string ******************/
// #include<iostream>
// #include<algorithm>
// #include<string>
// using namespace std;

// Only printing reverse
// void RversedString(string str)
// {
//    for (int i=str.length()-1; i>=0; i--)
//       cout << str[i]; 

// 	// Using while loop
// 	// string rev_str;
// 	// int len = str.length();
//     // while (len > 0)
//     // {
//     //     rev_str += str[len-1];
//     //     len--;
//     // }
//     // cout<<rev_str;
// }

// own method
// int RversedString(string str){
// 	int n = str.length(); // n=6
// 	for(int i=0; i<n/2; i++){ // 0 1 2
// 		swap(str[i], str[n-i-1]);
// 	}
// 	cout<<str;
// 	return 0;
// }

// using in-build reverse method in algorithm
// int RversedString(string str){
// 	reverse(str.begin(), str.end()); // this method comes from algorithm.h
// 	cout<<str;

// 	return 0;
// }

// Reverse string using the constructor of string class/template
// void RversedString(string str){
//     //Use of reverse iterators
//     string rev = string(str.rbegin(),str.rend());
//     cout<<rev<<endl;
// }

// int main(){
//     string str= "vikash";
// 	RversedString(str);

//     return 0;
// }



/*************** Find the number of occurrences pf a character in a string ******************/
// #include<iostream>
// using namespace std;

// int count(string str, char h){
//     int count = 0;
//     for (int i = 0; i < str.length(); i++)
//     {
//         if(str[i] == h){
//             count++;
//         }
//     }
//     return count;
// }

// int main(){
//     string str = "vikashhh";
//     char ch = 'h';

//     cout<<count(str, ch);

//     return 0;
// }


/**************** To check whether two given strings are anagram of each other or not *************/
// anagrams words : listen = silent, triangle = integral
// #include <bits/stdc++.h>
// using namespace std;

// /* function to check whether two strings are anagram of
// each other */
// bool areAnagram(string str1, string str2)
// {
// 	// Get lengths of both strings
// 	int n1 = str1.length();
// 	int n2 = str2.length();

// 	// If length of both strings is not same, then they cannot be anagram
// 	if (n1 != n2)
// 		return false;

// 	// Sort both the strings
// 	sort(str1.begin(), str1.end());
// 	sort(str2.begin(), str2.end());

// 	// Compare sorted strings
// 	for (int i = 0; i < n1; i++)
// 		if (str1[i] != str2[i])
// 			return false;

// 	return true;
// }

// int main()
// {
// 	string str1 = "abcd";
// 	string str2 = "dabc";
	
// 	// Function Call
// 	if (areAnagram(str1, str2))
// 		cout << "The two strings are anagram of each other";
// 	else
// 		cout << "The two strings are not anagram of each "
// 				"other";

// 	return 0;
// }

/************* How do you calculate the number of vowels and consonants in a string **************/
// #include<iostream>
// using namespace std;

// int main(){
//     string str = "vikasheee";

//     // Getting length of string
//     int len = str.length();

//     int vowelsCount = 0;
//     int consonantCount = 0;
//     for (int i = 0; i < len; i++)
//     {
//         if (str[i] == 'a' or str[i] == 'e' or str[i] == 'i' or str[i] == 'o' or str[i] == 'u')
//         {
//             vowelsCount++;
//         }
//         else
//         {
//             consonantCount++;
//         }
        
//     }
//     cout<<"Number of vowels in a string is: "<<vowelsCount<<endl;
//     cout<<"Number of consonant in a string is: "<<consonantCount<<endl;
    

//     return 0;
// }

/************* frequency of characters in a string *********************/


// C++ implementation to print the character and
// its frequency in order of its occurrence
// #include <bits/stdc++.h>
// using namespace std;
 
// #define SIZE 26
 
// // function to print the character and its frequency
// // in order of its occurrence
// void printCharWithFreq(string str)
// {
//     // size of the string 'str'
//     int n = str.size();
 
//     // 'freq[]' implemented as hash table
//     int freq[SIZE]; // 26 alphabet
 
//     // initialize all elements of freq[] to 0
//     memset(freq, 0, sizeof(freq));
 
//     // // accumulate frequency of each character in 'str'
//     for (int i = 0; i < n; i++)
//         freq[str[i] - 'a']++;
 
//     // // traverse 'str' from left to right
//     for (int i = 0; i < n; i++) {
 
//         // if frequency of character str[i] is not
//         // equal to 0
//         if (freq[str[i] - 'a'] != 0) {
 
//             // print the character along with its
//             // frequency
//             cout << str[i] << freq[str[i] - 'a'] << " ";
 
//             // update frequency of str[i] to 0 so
//             // that the same character is not printed
//             // again
//             freq[str[i] - 'a'] = 0;
//         }
//     }
// }
 
// // Driver program to test above
// int main()
// {
//     string str = "vikashvaa";
//     printCharWithFreq(str);
//     return 0;
// }