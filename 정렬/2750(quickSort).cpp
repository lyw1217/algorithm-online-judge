// 2750번 - 수 정렬하기

#include <cstdio>

void swap(int arr[], int index1, int index2) {
    int temp = arr[index1];
    arr[index1] = arr[index2];
    arr[index2] = temp;
}

int partition(int arr[], int start, int end) {
    // �Ǻ� ���� �迭�� �߰�����
    int pivot = arr[(start + end) / 2];
    // �������� ������ �����Ǳ� ��������
    while (start <= end) {
        // ������������ ���� �Ǻ������� Ŭ ������ ������ �̵�
        while (arr[start] < pivot) start++;
        // ���������� ���� �Ǻ������� ���� ������ ������ �̵�
        while (arr[end] > pivot) end--;
        // Ȥ�� �ݺ����� ��ġ�鼭 �������� ������ �����Ǿ����� Ȯ���غ���
        if (start <= end) {
            // �������� �ʾҴٸ� �� ������������ ���� ����
            swap(arr, start, end);
            // ���� �� ���������ʹ� ��� ����, �������ʹ� ��� �����ذ��鼭
            // ������ ������ �ݺ� �����ϸ�
            start++;
            end--;
        }
    }
    // ���������Ϳ� ���� ���� ������ ��Ƽ���� ù ��° �ε����� �����
    return start;
}

void quickSort(int arr[], int start, int end) {
    // ��ü �迭�� ��, �� 2���� ��Ƽ������ ������
    // ������ ��Ƽ���� ù ��° ���� �޾ƿ�
    int part_right = partition(arr, start, end);

    // ������ ��Ƽ���� ������ �ٷ� �������� �����Ѵٸ�
    // ���� ��Ƽ���� �����ʹ� �ϳ����̹Ƿ� ���̻� ������ �ʿ� ����
    // ��, ������ ��Ƽ���� ���� 1 �̻� ���� ���� ������ ����
    if (start < part_right - 1) {
        // ���� ��Ƽ���̹Ƿ� ������ ������ ������ ��Ƽ���� ������ �ٷ� ������ ����
        quickSort(arr, start, part_right - 1);
    }
    // ������ ��Ƽ���� �ϳ� �̻��� �� �����ؾ��ϹǷ�
    // ������ ��Ƽ���� �������� �迭 ���������� ���� �� ���� ����
    if (part_right < end) {
        // ������ ��Ƽ���̹Ƿ�, ���� ������ ������ ��Ƽ���� ���������� ����
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