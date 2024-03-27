#include<stdio.h>
int reverse_array(short arr[], int length);
int main(void)
{
int result;
int arr[6];
result=reverse_array(arr, 6);
	printf("reverse= %d",result);

reverse_array(arr, 6);
	print_array(arr, 6);

return 0;
}
int reverse_array(short arr[], int length)
{int temp=0;
	for(int i = 0 , j = length - 1 ; i < j ; i++, j--)
	{
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
	return temp;
}




