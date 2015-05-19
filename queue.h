#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
#define N 10000

class It{
    public:
        It();
        ~It();
        int* next();
        friend class Queue;
    protected:
    private:
        int* ddq;
        int* dq;
};

class Queue {
    public:
        Queue();
        void append(int);
        It* createIterator();
    protected:
    private:
        int num[N];
        int n;

};


#endif // QUEUE_H_INCLUDED
