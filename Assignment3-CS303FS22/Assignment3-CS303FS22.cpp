#include <queue>
#include <iostream>
#include "Assignment3-CS303.h"

using namespace std;

queue<int> q;
queue<int> r = q;

int main(void) {
	q.push(5);
	q.push(4);
	q.push(3);
	q.push(2);
	q.push(1);
	cout << "Queue contents before are" << endl;
	r.push(q.back());
	while (!q.empty())
	{
		cout << q.front() << endl;
		q.pop();
	}
	q.push(q.front());
	q.pop();
	cout << "Queue contents after are" << endl;
	while (!q.empty())
	{
		cout << q.front() << endl;
		q.pop();
	}

	return 0;


}