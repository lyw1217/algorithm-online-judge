#include<iostream>
#include<algorithm>
#include<utility>

using namespace std;

//void swap(int x[], int index_1, int index_2, int y[]) {
//	int temp = x[index_1];
//	x[index_1] = x[index_2];
//	x[index_2] = temp;
//
//	// 정렬 할 때 x, y좌표가 함께 이동하게끔
//	temp = y[index_1];
//	y[index_1] = y[index_2];
//	y[index_2] = temp;
//}
//
//int partition(int x[], int start, int end, int y[]) {
//	// 배열의 중간지점을 기준점으로 시작
//	int pivot = x[(start + end) / 2];
//
//	while (start <= end) { // 시작점과 끝점이 교차되는 시점에 반복문 종료
//		while (x[start] < pivot) start++;
//		// 시작점이 기준점보다 더 작은 값이 나올 때까지 시작점을 오른쪽으로 이동
//		while (x[end] > pivot) end--;
//		// 끝점이 기준점보다 더 큰 값이 나올 때까지 끝점을 왼쪽으로 이동
//		if (start <= end) { // 이동하는 과정에서 교차되었는지 다시 확인해주고
//			// 교차되지 않았다면 시작점과 끝점의 값을 스왑
//			swap(x, start, end, y);
//			// 그리고 다시 시작점은 오른쪽으로, 끝점은 왼쪽으로 이동시키면서 반복
//			start++;
//			end--;
//		}
//	}
//	return start;
//}
//
//void quickSort(int x[], int start, int end, int y[]) {
//	// 오른쪽 방의 시작부분을 알려주는 partition 함수
//	int part_right = partition(x, start, end, y);
//
//	// 정렬을 하는 중에, 오른쪽 방의 시작점 바로 왼쪽칸이 시작점이라면
//	// 왼쪽 방은 한 칸짜리 방이므로 더이상 정렬할 필요 없음
//	if (start < part_right - 1) {
//		// 그럼 왼쪽 파티션의 끝나는 지점을 오른쪽 파티션의 시작점 바로 전으로 이동
//		quickSort(x, start, part_right - 1, y);
//	}
//	// 오른쪽 파티션의 시작부분이 끝점보다 작을 때 또 정렬
//	// 만약에 오른쪽 파티션의 시작부분이 끝점이랑 같아진다면 오른쪽 방은 한칸짜리 방
//	if (part_right < end) {
//		// 그럼 오른쪽 파티션의 시작부분부터 끝점까지 다시 정렬
//		quickSort(x, part_right, end, y);
//	}
//
//}

int main() {
	int n, x, y;
	pair<int, int> pos[100000];
	/*int* x_pos = new int[100000];
	int* y_pos = new int[100000];*/

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		/*scanf("%d %d", &x_pos[i], &y_pos[i]);*/
		scanf("%d %d", x, y);
		pos[i] = { x, y };
	}

	/*quickSort(x_pos, 0, n - 1, y_pos);
	quickSort(y_pos, 0, n - 1, x_pos);*/

	for (int i = 0; i < n; i++) {
		/*printf("%d %d\n", x_pos[i], y_pos[i]);*/
	}

	/*delete[] x_pos;
	delete[] y_pos;*/

	return 0;
}