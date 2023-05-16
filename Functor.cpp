#include "Functor.h"


namespace MB {
	void Functor::operator()(const int& value) {
		if (!(value % 3)) {
			m_sum += value;
			m_count++;
		}
	}

	int Functor::get_sum() const {
		return m_sum;
	}

	int Functor::get_count() const {
		return m_count;
	}
}
