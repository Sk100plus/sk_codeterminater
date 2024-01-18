// Chef has two integers 
// A and B.
// Chef wants to find the minimum value of 
// lcm(A,X)-gcd(B,X) where 
// X is any positive integer.

// Help him determine this value  X.



// APPROACH:
/* OBSERVATION
-> We need to minimum value of lcm(A,X)-gcd(B,X).
-> So lcm must be minimum for this.
-> lcm of x,y is minimum when both are equal(x=y) and THEN lcm=x.
-> So we take X as A for minimum result.
*/

