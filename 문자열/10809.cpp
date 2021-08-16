// 10809번 - 알파벳 찾기

#include <iostream>
#include <string>

using namespace std;

int main(){
	string str = "";
	
	char alphabet[26];
	
	cin >> str;
	
	for(int i = 0; i < 26; i++){
		alphabet[i] = 'a' + i;
		for(int j = 0; ; j++){
			if(j > str.length()){
				cout << "-1";
				break;
			}
			if(alphabet[i] == str[j]){
				cout << j;
				break;
			}
		}
		cout << " ";
	}
	
	return 0;
}
