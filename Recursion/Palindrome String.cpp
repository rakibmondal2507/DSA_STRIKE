bool pali(string &s, int start, int end){
	if(start>=end){
		return true;
	}
	if(s[start]!=s[end]){
		return false;
	}

	return pali(s, start+1, end-1);
}

bool isPalindrome(string& s) {
    // Your code here
	return pali(s, 0, s.size()-1);
}
