#include <iostream>

using namespace std;

class Point
{
	public:
		void setPoint(int x, int y)	//实现setPoint函数
		{
			xPos = x;
			yPos = y;
		}

		void printPoint()	//实现printPoint函数
		{
			cout<< "x = " << xPos << endl;
			cout<< "y = " << yPos << endl;
		}

		private:
			int xPos;
			int yPos;
};

int main()
{
	Point M;			//用定义好的类创建一个对象点M
	M.setPoint(10, 20);	//设置M的x, y值
	M.printPoint();		//输出M的信息

	return 0;
}
