// Jadea Parchment this program will that calculates and displays the factorial of each element in an integer array.  
#include <stdio.h>

int main(){
    int fact(int n);
    void calculate_fact(int a[],int n,int b[]);
    int i, n;
    printf("Enter the length of the input array:\n");
    scanf("%d",&n);
    //Input Validation
    if (n<=0) {
        printf("Invalid array size %d\n",n);
        printf("Array must be greater than 0");
        return 0;
    }
    int a[n],b[n];
    printf("Enter the array elements:\n");
    for( i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    // function call
    calculate_fact(a,n,b);
    printf("Output Array:\n");    
for( i=0;i<n;i++){
        printf("%d ",b[i]);
    }
    return 0;
}
// Recursive function
int fact(int n)
{
    if(n<=1){
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}
//Function that calculates the factorial 
void calculate_fact(int a[],int n,int b[])
{
	int i;
    for( i=0;i<n;i++){
        b[i]=fact(a[i]);
    }
}
