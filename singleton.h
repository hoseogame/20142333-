#pragma once
template <typename T>
class singleton
{
private:
	static T * _instance;
public:
	static T * getInstance()
	{
		if (_instance == NULL)
		{
			_instance = new T;
		}
		return _instance;
	}
	static void ReleaseSingle()
	{
		delete _instance;
		_instance = NULL;
	}

public:
	singleton() {}
	~singleton() {}
};

template <typename T>
T * singleton<T>::_instance = NULL;