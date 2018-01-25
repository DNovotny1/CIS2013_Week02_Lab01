#include <iostream>
using namespace std;

int main()
	{
		int room_length = 5;
		int room_width =10;
		//float room_radius = 10.3;
		//float room_circle_area = (room_radius * room_radius) * 3.14;
		//bool this_is_always_true = true;

		cout << "enter your length: ";
		
		cin >> room_length;

		cout << "enter your width: ";
		cin >> room_width;


		// == != > < <= >=
		if(room_length == room_width)
			{
				cout << "length and Width are the same" << endl;
			}
		else
			{
				cout << "length and Width are not the same" << endl;
				cout << "length is " << room_length << endl;
				cout << "width is " << room_width << endl;
			}
		if(room_length > room_width)
			{
				cout << "length is greater" << endl;
			}
		else
			{
				cout << "Width is greater" << endl;
			}




		/*// prints out
		cout << "Our first number is " << room_length << endl << "Our second number is " << room_width << endl;
		// Different operators + - / * %
		cout << "multiplied together you get " << 
		  room_length * room_width << endl;
		cout << "Unless the room is a circle " <<
	 	  room_circle_area << endl;*/



	return 0;	
	}