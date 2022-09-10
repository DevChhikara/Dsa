#include<iostream>
using namespace std;

//ques to find displacement of a person if given the directions he moves in a form of a string 
//given ques the person moves in a 2d plane either in x axis or in y axis 
//give the  output the smallest number of moves he have to make to get htere in form of a string 

int main(){

	char route[1000];
	cin.getline(route,1000);


	int x = 0;
	int y = 0;


	for(int i=0; route[i]!='\0'; i++){

		switch(route[i]){
			case 'N': y++;
					  break;

			case 'S': y--;
					 break;

			case 'E': x++;
					break;

			case 'W': x--;
					break;

		}
	}

	cout<<"Final x and y is "<<x<<","<<y<<endl;

	
	if(x>=0 and y>=0){

		while(y--){
			cout<<"N";
		}
		while(x--){
			cout<<"E";
		}

	}





}