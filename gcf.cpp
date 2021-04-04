#include <iostream>
using namespace std;
int gcf(int num1, int num2);
int main(){
	cout << gcf(25, 5) << endl;

}
int gcf(int num1, int num2){
	int answer;
	if (num1 == num2){
		answer= num1;
	}
	else if(num1>num2){
		for(int i = num1/2; i>0; i--){
			if(num2%i == 0) {
				answer= i;
				break;
			}
		}
	}
	else{
		for(int i = num1/2; i > 0; i--){
			if(num1%i == 0) {
				answer= i;
				break;
			}
		}		
	}
	return answer;
}
