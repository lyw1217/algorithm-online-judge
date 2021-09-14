#include<iostream>

unsigned long long int square(int num){
	unsigned long long int a = 1;
	for(int i = 1; i < num; i++){
		a *= 10;
	}
	return a;
}

int main(){
    int num;
	unsigned long long int v_num, digit;
	unsigned long long int sum = 0;
	
    std::cin >> num;
	std::cin >> v_num;
	digit = num;
	
    for(int i = 0; i < num; i++){
    	sum += (v_num / square(digit));
		v_num -= (v_num / square(digit) * square(digit));
    	digit--;
    	//std::cout << v_num << std::endl;
	}
    printf("%u", sum);
    
    return 0;
}
