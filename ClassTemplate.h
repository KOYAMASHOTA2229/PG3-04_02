#pragma once
template<typename T1, typename T2>

class ClassTemplate
{

public:
	T1 a;
	T2 b;

	ClassTemplate(T1 a, T2 b):a(a),b(b){}

	T1 Size() {
		//a‚æ‚èb‚Ì•û‚ª‘å‚«‚¢Žž
		if (a < b)
		{
			//a‚ð•Ô‚·
			return static_cast<T2>(a);
		}
		//a‚Ì•û‚ª‘å‚«‚¢‚Æ‚«
		else {
			//b‚ð•Ô‚·
			return static_cast<T1>(b);
		}
	}
};

