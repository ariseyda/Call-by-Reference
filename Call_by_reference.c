#include<stdio.h>

//Call by Reference

int main(){
	
	int x,y;
	
	printf("Please enter two integers:");
	scanf("%d %d",&x,&y);
	
	callby_reference(&x,&y);
	
	printf("x:%d and y:%d",x,y);
	
	
	return 0;
}

void callby_reference(int *px,int *py){
	
    int temp;
    temp=*px;
    *px=*py;
    *py=temp;
	
	printf("x:%d and y:%d\n",*px,*py);
	
}

