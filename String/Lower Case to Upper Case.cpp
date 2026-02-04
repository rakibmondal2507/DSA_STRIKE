// Given a string str containing only lowercase letters, generate and return a new string with all letters converted to uppercase.

// Example 1:
// Input: str = coderarmy
// Output: CODERARMY
// Explanation:
// coderarmy upper case is CODERARMY

string toUpper(string &str) {
    // Your code here

	for(int i=0; i<str.size();i++){
		if(str[i]>='a' && str[i]<='z'){
			// str[i] = (str[i]-'a') + 'A';
			// str[i] = str[i]-32; //(97-65)
			str[i]= str[i]-('a'-'A');
		}
	}

	return str;
}
