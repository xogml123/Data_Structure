#ifndef STACK_HPP
# define STACK_HPP
#include <vector>

template <typename T>
class Stack{
	private:
		vector<T> data;
		int	top;
	public:
		Stack();
		void	push(T item);
		T		pop();
		bool	is_empty();
};
#endif