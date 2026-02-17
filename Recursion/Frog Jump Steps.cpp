// Frog Jump Steps ( Count number of hops )
// EASY
// Solved
// A frog jumps either 1, 2, or 3 steps to go to the top. In how many ways can it reach the top of nth step.



// Example 1:
// Input: n = 2
// Output: 2
// Explanation:
// Below are the 2 ways to reach 2nd step:
// i) 1 step + 1 step
// ii) 2 step


int countHops(int n) {
    // Your code here   

	if(n<3){
		return n;
	}else if(n==3){
		return 4;
	}


	return countHops(n-3)+countHops(n-2)+countHops(n-1);
}
