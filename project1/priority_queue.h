#include <queue>

template <typename T> 
class TemplatePriorityQueue {
	public:
		TemplatePriorityQueue();
		~TemplatePriorityQueue();
		bool Empty() const;
		const T& Top() const;
		const int Size();
		void Push(const T&);
		void Pop();	
	private:
		std::priority_queue<T> storage_;
};
