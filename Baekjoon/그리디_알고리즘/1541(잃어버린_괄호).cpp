// 1541번 - 잃어버린 괄호

#include <cstdio>
#include <iostream>
#include <vector>
#include <sstream>
#include <string>

using namespace std;
// 마이너스 뒤에 있는 숫자들 전부 괄호
// 다음 마이너스 나올 때까지
// - 기준 스플릿 후에 내부 값 다 더하고
// 더한 값을 앞에서부터 차례로 빼주기
vector<string> split(string str, char Delimiter) {
    istringstream iss(str);             // istringstream에 str을 담는다.
    string buffer;                      // 구분자를 기준으로 절삭된 문자열이 담겨지는 버퍼
 
    vector<string> result;
 
    // istringstream은 istream을 상속받으므로 getline을 사용할 수 있다.
    while (getline(iss, buffer, Delimiter)) {
        result.push_back(buffer);               // 절삭된 문자열을 vector에 저장
    }
 
    return result;
}

int main (void) {
    string s;

    getline(cin, s);

    vector<string> brackets = split(s, '-');
    int sum = 0;
    for (int i=0; i<brackets.size(); i++) {
        vector<string> tmp = split(brackets[i], '+');
        int brackets_sum = 0;
        for (int j=0; j<tmp.size(); j++) {
            //printf("tmp[%d] = %d\n", j, stoi(tmp[j]));
            brackets_sum += stoi(tmp[j]);
        }
        //printf("brackets_sum = %d\n", brackets_sum);
        if (i==0) sum += brackets_sum;
        else      sum -= brackets_sum;
    }

    printf("%d", sum);
}