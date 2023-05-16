#pragma once


namespace MB {
	class Functor {
	public:
		void operator()(const int& value);

		int get_sum() const;
		int get_count() const;

	private:
		int m_sum = 0;
		int m_count = 0;
	};
}