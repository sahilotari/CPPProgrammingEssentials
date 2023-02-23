#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	// Binary and - &
	// 0&0 = 0, 0 & 1 = 0, 1&0 = 0, 1 & 1 = 1;
	// 5 & 7:
	// 5->   00000101
	// 7->   00000111
	// 5&7-> 00000101 ->5
	cout<<(5&7)<<endl;

	// Binary or - |
	// 0|0 = 0, 1|0 = 1, 0|1 = 1, 1|1 = 1
	// 5 | 7;
	// 5->   00000101
	// 7->   00000111
	// 5|7-> 00000111 ->7
	cout<<(5|7)<<endl;
	// Binary xor - ^
	// 0^0 = 0, 1^1 = 0, 1^0 = 1, 0^1 = 1
	// 5 ^ 7;
	// 5->   00000101
	// 7->   00000111
	// 5^7-> 00000010 ->2
	cout<<(5^7)<<endl;
	// Binary one's complement - ~
	// ~0 = 1, ~1 = 0,  It swaps all the bits
	// 5;
	// 5->   00000101
	//~5->   11111010 -> -6
	cout<<~5<<endl;

	// Binary left shift - <<
	//shift the bits to the left by some factor and new bits on right are replaced by 0s.
	// 5 << 1, number is multiplied by 1
	// a<<b, a is multiplied by 2^b;
	cout<< (5<<2)<<endl;
	// Binary right shift - >>
	//shift the bits to the right by some factor and new bits on left are replaced by 0s.
	// a>>b, a is divided by 2^b;
	cout<<(64>>3)<<endl;

	return 0;
}