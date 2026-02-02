// Given a string s, convert all uppercase characters to lowercase. Lowercase characters remain unchanged.

// Example 1:
// Input: s = ABCddE
// Output: abcdde
// Example 2:
// Input: s = LMNOppQQ
// Output: lmnoppqq

string toLower(string &s) {
    // Your code here

	for(int i=0; i<s.size(); i++){
		if(s[i]>= 'A' && s[i]<='Z'){
			s[i] = 'a' +(s[i]-'A');
		}
	}
	return s;
}
