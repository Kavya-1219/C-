#include <iostream>
#include<cstdlib>
int main() {
    char input[20];
    int  number;
    bool isInt=true;
    
    std::cout<<"enter value:";
    std::cin>>input;
    
    for(int i=0;input[i]!='\0';i++){
    	if(input[i] < '0'|| input[i]>'9')
    	{
    		isInt=false;
    		break;
		}
	}

if(isInt){
	number = atoi(input);
	if(number%2==0){
		std::cout<<number<<" is even";
	}

else{
	std::cout<<number<<" is odd";
}
}
else{
	std::cout<<"input error";
}
 return 0;
}
