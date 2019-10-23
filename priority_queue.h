#include <queue>

template <typename T> 
class TemplatePriorityQueue {
	private:
		std::priority_queue<T> storage;
	public:
		TemplatePriorityQueue();
		~TemplatePriorityQueue();
		
		bool empty() const;
		const T& top() const;
		int size();
		void push(const T&);
		void pop();	
};
