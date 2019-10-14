#include <iostream>

template<class T,class... A>
T& Global(const A&... Arg) {
	static T V(Arg...);
	return V;
}

int main() {

	Global<int,int>(25)++;
	int N = Global<int,int>(0);//return 26;

	return 0;

}