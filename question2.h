#ifndef QUESTION2_H
#define QUESTION2_H

using namespace std;


template  <typename T>
class getTogether
{
private:
	T m_first;
	T m_second;
	T m_result;
public:
	getTogether();
	getTogether(T first, T second);
	T getFirst();
	T getSecond();

	T getResult();

	friend ostream& operator<<(ostream &o, getTogether<T> const p)
	{
		o << "Resultado: " << p.m_first + p.m_second << endl;
		return o;
	}

	friend istream& operator>>(istream &i, getTogether<T>  &p)
	{
		i >> p.m_first >> p.m_second;
		return i;
	}

	getTogether<T> operator+(getTogether<T> &p);

	getTogether<T>& operator=(getTogether<T> const &p);

};

template<typename T>
getTogether<T>::getTogether()
{

}

template<typename T>
getTogether<T>::getTogether(T first, T second)
{
	m_first = first;
	m_second = second;
	m_result = first+second;
}

template<typename T>
T getTogether<T>::getFirst()
{
	return m_first;
}

template<typename T>
T getTogether<T>::getSecond()
{
	return m_second;
}

template<typename T>
T getTogether<T>::getResult()
{
	m_result = m_first+m_second;

	return m_result;

}


template<typename T>
getTogether<T> getTogether<T>::operator+(getTogether<T> &p)
{
   T first = m_first + p.m_first;
   T second = m_second + p.m_second;

   return getTogether<T>(first, second);
}


template<typename T>
getTogether<T>& getTogether<T>::operator=(getTogether<T> const &p)
{
	m_first = p.m_first;
	m_second = p.m_second;

	return *this;
}

#endif