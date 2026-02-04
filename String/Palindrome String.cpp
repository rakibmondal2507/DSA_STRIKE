// You are given a string s. Your task is to determine if the string is a palindrome. A string is considered a palindrome if it reads the same forwards and backGiven a string s, determine if it is a valid palindrome. A string is a valid palindrome when:



// • It reads the same forwards and backwards

// • You only consider alphanumeric characters (letters and digits, ignoring everything else)

// • You are case-insensitive (treat uppercase and lowercase as the same)


// Return true if s is a valid palindrome, or false otherwisewards.

// Example 1:
// Input: s = abba
// Output: true
// Explanation:
// s is a palindrome

bool isPalindrome(string& s) {
    // Your code here

	int start=0, end=s.size()-1;

	while(start<end){
		// if(s[start]!=s[end]){
		// 	return false;
		// }else{
		// 	start++ , end--;
		// }

		if(s[start]==s[end]){
			start++, end--;
		}else{
			return false;
		}
	}
	return true;
}
