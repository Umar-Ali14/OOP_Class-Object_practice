 #include<iostream>
#include<cstdlib>
using namespace std;

class integerList
{
	private:
		int *p;
		int size;
		
		bool isValid(int index)
		{
			if(index >=0 && index < size)
				return true;
			else
				return false;
		}
	
	public:
		
		integerList(int sz)
		{
			size = sz;
			p = new int[size];
			
			for(int i=0; i<size; i++)
				p[i] = 0;
		}
		
		void setElement(int index, int val)
		{
			if( isValid(index) )
				p[index] = val;
			else
			{
				cout << "Error: invalid index in the assignment of value at index = " << index << endl;
				exit(-1);
			}
		}
		
		void getElement(int index)
		{
			if( isValid(index) )
				cout << "The value at index = " << index  << " :" << p[index] << endl;
			else
				cout << "Error: invalid index in getting the value at index = " << index << endl;

		}
		
		~integerList()
		{
			cout << "object destroying .... " << endl;
			delete [] p;
		}
		
		
};

int main()
{
	integerList obj(5);

	for(int j=0; j<5; j++)
		obj.getElement(j);
	
	for(int i=0; i<5; i++)
		obj.setElement(i , i*10);
		
	for(int j=0; j<5; j++)
		obj.getElement(j);
	
}








