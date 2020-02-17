#include <cstdio>

void swap(int arr[], int index1, int index2) {
    int temp = arr[index1];
    arr[index1] = arr[index2];
    arr[index2] = temp;
}

int partition(int arr[], int start, int end) {
    // 피봇 값은 배열의 중간지점
    int pivot = arr[(start + end) / 2];
    // 시작점과 끝점이 교차되기 전까지만
    while (start <= end) {
        // 시작포인터의 값이 피봇값보다 클 때까지 포인터 이동
        while (arr[start] < pivot) start++;
        // 끝포인터의 값이 피봇값보다 작을 때까지 포인터 이동
        while (arr[end] > pivot) end--;
        // 혹시 반복문을 거치면서 시작점과 끝점이 교차되었는지 확인해보고
        if (start <= end) {
            // 교차되지 않았다면 두 포인터지점의 값을 스왑
            swap(arr, start, end);
            // 스왑 후 시작포인터는 계속 증가, 끝포인터는 계속 감소해가면서
            // 교차될 때까지 반복 수행하면
            start++;
            end--;
        }
    }
    // 시작포인터에 새로 나눌 오른쪽 파티션의 첫 번째 인덱스가 저장됨
    return start;
}

void quickSort(int arr[], int start, int end) {
    // 전체 배열을 좌, 우 2개의 파티션으로 나누고
    // 오른쪽 파티션의 첫 번째 값을 받아옴
    int part_right = partition(arr, start, end);

    // 오른쪽 파티션이 시작점 바로 다음에서 시작한다면
    // 왼쪽 파티션의 데이터는 하나뿐이므로 더이상 정렬할 필요 없음
    // 즉, 오른쪽 파티션의 값과 1 이상 차이 날때 정렬을 수행
    if (start < part_right - 1) {
        // 왼쪽 파티션이므로 끝나는 지점을 오른쪽 파티션의 시작점 바로 전으로 지정
        quickSort(arr, start, part_right - 1);
    }
    // 오른쪽 파티션이 하나 이상일 때 정렬해야하므로
    // 오른쪽 파티션의 시작점이 배열 마지막보다 작을 때 정렬 수행
    if (part_right < end) {
        // 오른쪽 파티션이므로, 시작 지점을 오른쪽 파티션의 시작점으로 지정
        quickSort(arr, part_right, end);
    }
    
}

int main(){
    int n, i;
    int arr[1000];
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    quickSort(arr, 0 , n - 1);

    for (i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}