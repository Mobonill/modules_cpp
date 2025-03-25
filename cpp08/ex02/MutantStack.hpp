/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobonill <mobonill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 14:59:14 by mobonill          #+#    #+#             */
/*   Updated: 2025/03/25 16:53:40 by mobonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack>
#include <string>
#include <queue>

template <typename T, typename MutantStack = std::stack<T>>
class MutantStack {

	class iterator {

		private:
			std::queue<T> fifo;

		public:
			iterator(const MutantStack<T>& stack) {
				MutantStack tmp = stack;
				std::stack<T> queue;
				
				while (!tmp.empty())
				{
					queue.push(tmp.top());
					tmp.pop();
				}
				while (!queue.empty())
				{
					fifo.push(queue.top());
					queue.pop();
				}
			}
			iterator++()
	};

	private:

	public:
		MutantStack() {};
		~MutantStack() {};
		MutantStack(const MutantStack& copy) {};
		MutantStack<T>& operator=(const MutantStack<T>& rhs);

};

MutantStack<T>& MutantStack::operator=(const MutantStack<T>& rhs) {

}

























        // Vérifie si l'itérateur a encore des éléments
        bool hasNext() const { return !fifoQueue.empty(); }

        // Accède à l'élément actuel
        T next() {
            T value = fifoQueue.front();
            fifoQueue.pop();
            return value;
        }