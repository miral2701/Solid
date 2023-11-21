#include<iostream>
using namespace std;

struct IWorker
{
	virtual void DoWork() = 0;
};
class Worker :public IWorker
{
public:
	void DoWork(){
		cout << "I do work as a worker";
	}
};
class SeasoneWorker :public IWorker
{
public:
	void DoWork() {
		cout << "I do work as a season worker";

	}
};


class Manager
{
	IWorker* worker;
public:
	Manager(IWorker *inj_worker):worker(inj_worker){}
	~Manager() { delete worker; }
	void DoSomething()
	{
		worker->DoWork();
	}
};

void ManageIt()
{
	Manager manager1(new Worker());
	manager1.DoSomething();
}
int main() {

}