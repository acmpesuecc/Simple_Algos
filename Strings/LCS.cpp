#include <bits/stdc++.h>


using namespace std;

// Program to find Length of Longest Common Subsequence of 2 strings.

int LCS(string A, string B, int m, int n)
{

    // Base Condition reached end of string from last character
	
	if (m == 0 || n == 0)
		return 0;

	// if there is char match -> rec call for increasing length by 1 and decreasing string size by 1
	if (A[m - 1] == B[n - 1])
		return LCS(A, B, m - 1, n - 1) + 1;

    // if char didnt match
	return max(LCS(A,B, m, n - 1), LCS(A,B, m - 1, n));
}

int main()
{
	string A = "HACKTOBER", B = "ACMPESUECC";

	cout << "The length of LCS is " <<
			LCS(A, B, A.size(), B.size())<<"\n";


     A = "ABCDBAB", B = "BCDBAE";

	cout << "The length of LCS is " <<
			LCS(A, B, A.size(), B.size())<<"\n";


	return 0;
}
