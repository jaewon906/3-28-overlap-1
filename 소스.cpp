#include <iostream>
using namespace std;

class square
{
	int square_left_down1[2];
	int square_right_up1[2];
	int square_left_down2[2];
	int square_right_up2[2];
public:
	void input()
	{
		cout << "입력1 : (x1,y1) (x2,y2) " << endl;
		cin >> square_left_down1[0]; //사각형1 x1
		cin >> square_left_down1[1]; //사각형1 y1
		cin >> square_right_up1[0];  //사각형1 x2
		cin >> square_right_up1[1];  //사각형1 y2

		cout << "입력2 : (x1,y1) (x2,y2) " << endl;
		cin >> square_left_down2[0]; //사각형2 x1
		cin >> square_left_down2[1]; //사각형2 y1
		cin >> square_right_up2[0];  //사각형2 x2
		cin >> square_right_up2[1];  //사각형2 y2

	}
	void function1() /* 1) 사각형 1의 y2 와 사각형 2의 y1 이 같고,
					 사각형 1의 x2 와 사각형 2의 x1 이 같으면 overlap

					 2) 사각형 1의 x1 와 사각형 2의 x1 이 같고,
					 사각형 1의 y2 와 사각형 2의 y1 이 같으면 overlap

					 3) 사각형 1의 y2 와 사각형 2의 y1 이 같고,
					 사각형 1의 x1 와 사각형 2의 x2 이 같으면 overlap

					 4) 사각형 1의 y2 와 사각형 2의 y1 이 같고,
					 사각형 1의 x1 와 사각형 2의 x2 이 같으면 overlap

					 5) 사각형 1의 y1 와 사각형 2의 y1 이 같고,
					 사각형 1의 x1 와 사각형 2의 x1 이 같으면 overlap */
	{
		if ((square_right_up1[1] == square_left_down2[1]) && (square_right_up1[0] == square_left_down2[0]) ||
			(square_left_down1[0] == square_left_down2[0]) && (square_right_up1[1] == square_left_down2[1]) ||
			(square_right_up1[1] == square_left_down2[1]) && (square_left_down1[0] == square_right_up2[0]) ||
			(square_right_up1[1] == square_left_down2[1]) && (square_left_down1[0] == square_right_up2[0]) ||
			(square_left_down1[1] == square_left_down2[1]) && (square_left_down1[0] == square_left_down2[0]))
		{
			cout << "overlap";

		}
		else
		{
			cout << "no overlap";
		}
	}

};

int main()
{
	square s;
	s.input();
	s.function1();
	return 0;
}