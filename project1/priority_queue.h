#pragma once

#include <queue>

template <typename T> 
class TemplatePriorityQueue {
	public:
		TemplatePriorityQueue();
		virtual ~TemplatePriorityQueue();
		bool Empty() const;
		const T& Top() const;
		const int Size();
		void Push(const T&);
		void Pop();	
	private:
		std::priority_queue<T> storage_;
};
