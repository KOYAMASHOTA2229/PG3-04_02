#pragma once
template<typename T1, typename T2>

class ClassTemplate
{

public:
	T1 a;
	T2 b;

	ClassTemplate(T1 a, T2 b):a(a),b(b){}

	T1 Size() {
		//aよりbの方が大きい時
		if (a < b)
		{
			//aを返す
			return static_cast<T2>(a);
		}
		//aの方が大きいとき
		else {
			//bを返す
			return static_cast<T1>(b);
		}
	}
};

