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
		cout << "�Է�1 : (x1,y1) (x2,y2) " << endl;
		cin >> square_left_down1[0]; //�簢��1 x1
		cin >> square_left_down1[1]; //�簢��1 y1
		cin >> square_right_up1[0];  //�簢��1 x2
		cin >> square_right_up1[1];  //�簢��1 y2

		cout << "�Է�2 : (x1,y1) (x2,y2) " << endl;
		cin >> square_left_down2[0]; //�簢��2 x1
		cin >> square_left_down2[1]; //�簢��2 y1
		cin >> square_right_up2[0];  //�簢��2 x2
		cin >> square_right_up2[1];  //�簢��2 y2

	}
	void function1() /* 1) �簢�� 1�� y2 �� �簢�� 2�� y1 �� ����,
					 �簢�� 1�� x2 �� �簢�� 2�� x1 �� ������ overlap

					 2) �簢�� 1�� x1 �� �簢�� 2�� x1 �� ����,
					 �簢�� 1�� y2 �� �簢�� 2�� y1 �� ������ overlap

					 3) �簢�� 1�� y2 �� �簢�� 2�� y1 �� ����,
					 �簢�� 1�� x1 �� �簢�� 2�� x2 �� ������ overlap

					 4) �簢�� 1�� y2 �� �簢�� 2�� y1 �� ����,
					 �簢�� 1�� x1 �� �簢�� 2�� x2 �� ������ overlap

					 5) �簢�� 1�� y1 �� �簢�� 2�� y1 �� ����,
					 �簢�� 1�� x1 �� �簢�� 2�� x1 �� ������ overlap */
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