// WAP that will make a template class to represent queue data structure for different data types. You should define the function outside of the template class.

// implementation of queue class as template

#include <iostream>
#include <cstdlib>
using namespace std;
const int MAX = 20;
template <class T>
class queue
{
private:
    T arr[MAX];
    int rear;

public:
    queue();
    void add(T data);
    T remove();
    int size();
};
template <class T>
queue<T>::queue()
{
    rear = 0;
}
template <class T>
void queue<T>::add(T data)
{
    if (rear >= MAX)
        cout << "queue is full";
    else
        arr[rear++] = data;
}
template <class T>
T queue<T>::remove()
{
    T front;
    if (rear = 0)
    {
        cout << "queue is empty";
    }
    else
    {
        front = arr[0];
        rear--;
        for (int i = 0; i < rear; ++i)
        {
            arr[i] = arr[i + 1];
        }
    }
    return front;
}
template <class T>
int queue<T>::size()
{
    return (rear);
}
int main()
{
    cout << "queue for integer" << endl;
    queue<int> q1;
    q1.add(11);
    q1.add(22);
    q1.add(33);
    cout << "size of queue before removal is: " << q1.size() << endl;
    cout << "item removed from queue: " << q1.remove() << endl;
    cout << "size of queue after one removal: " << q1.size() << endl;

    cout << "\nqueue for floating point number" << endl;
    queue<float> q2;
    q2.add(1.1);
    q2.add(2.2);
    q2.add(3.3);
    cout << "size of queue before removal is: " << q2.size() << endl;
    cout << "item removed from queue: " << q2.remove() << endl;
    cout << "size of queue after one removal: " << q2.size() << endl;

    cout << "\nqueue for character" << endl;
    queue<char> q3;
    q3.add('A');
    q3.add('B');
    q3.add('C');
    cout << "size of queue before removal is: " << q3.size() << endl;
    cout << "item removed from queue: " << q3.remove() << endl;
    cout << "size of queue after one removal: " << q3.size() << endl;
}