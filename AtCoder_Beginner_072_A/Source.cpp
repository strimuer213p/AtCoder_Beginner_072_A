/*
問題文
X 秒を測れる砂時計があります。はじめ上のパーツに砂が X [g] あり、1 秒間に 1 [g] 砂が落ちます。なお、上のパーツにもう砂が残っていない場合は砂は落ちません。
t 秒後に上のパーツに残っている砂は何gでしょう。
*/

#include<iostream>

int main() {
	int x, t;
	std::cin >> x >> t;

	std::cout << (x > t ? x - t : 0) << std::endl;

	return 0;
}