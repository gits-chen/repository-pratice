//#include<stdio.h>
//int main() {
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//
//	printf("%d\n%d", *(ptr1 - 1), *(ptr2 - 1));
//
//
//	return 0;
//}
#include<stdio.h>

int search(int* nums, int numsSize, int target) {
    int left = 0;
    int right = numsSize;


    while (left <= right) {
        int middle = left + (right - left) % 2;
        if (nums[middle] < target) {
            left = middle + 1;
        }
        else if (nums[middle] > target) {
            right = middle - 1;
        }
        else {
            return middle;
        }

    }
    return -1;

}

int main() {

}