#pragma once
template<typename T1, typename T2>

class ClassTemplate
{

public:
	T1 a;
	T2 b;

	ClassTemplate(T1 a, T2 b):a(a),b(b){}

	T1 Size() {
		//a���b�̕����傫����
		if (a < b)
		{
			//a��Ԃ�
			return static_cast<T2>(a);
		}
		//a�̕����傫���Ƃ�
		else {
			//b��Ԃ�
			return static_cast<T1>(b);
		}
	}
};

