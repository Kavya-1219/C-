#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	std::string input;
	char choice;
	std::cout<<"enter a string:";
	std::getline(std::cin,input);
	cout<<"convert to uppercase(U) or lowecase(L) ?:";
	cin>>choice;
	if(choice=='U'||choice=='u'){
		std::transform(input.begin(),input.end(),input.begin(),::toupper);
	}else if(choice=='V'||choice=='v'){
		std::transform(input.begin(),input.end(),input.begin(),::tolower);
	}else{
		cout<<"invalid choice";
	}
	cout<<"converted string:"<<input<<endl;
}

/*
//using class


#include <iostream>
using namespace std;
class Convert {
public:
    string str;     
	void read()
	{
		cout << "Enter the string: ";
        cin >> str;
 
	}
    void toLower() {
        for (int i = 0; str[i] != '\0'; i++) {
            if (str[i] >= 'A' && str[i] <= 'Z')    
                str[i] = str[i] + 32;        
        }
        std::cout << "\nlower case: " << str;
    }
    void toUpper() {
        for (int i = 0; str[i] != '\0'; i++) {
            if (str[i] >= 'a' && str[i] <= 'z')   
                str[i] = str[i] - 32;         
        }
        std::cout << "\nupper case: " << str;
    }
};
int main() {
    Convert c;
    c.read();
    c.toLower();
    c.toUpper();
}*/
