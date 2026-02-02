               MALLOC
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    int *array;
    int sum=0;
    //get length
    printf("Enter the number of element:");
    scanf("%d", &n);
    array = (int*)malloc(n *sizeof(int));
    //validation
    if(array == NULL)
    {
        printf("Memory not allocated \n");
        return 0;
    }
    else
    {
        printf("Memory allocated and the allocated memory is %d \n",n);
    }
    printf("Enter %d number by adding a gap for each numbers \n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
        sum+=array[i];
    }
    printf("The sum of all element is: %d \n",sum);
    
    //destroy the memory
    free(array);
    printf("Memory deleted successfully");
    return 0;
}

output:
Enter the number of element:3
Memory allocated and the allocated memory is 3 
Enter 3 number by adding a gap for each numbers 
1
2
3
The sum of all element is: 6 
Memory deleted successfully

=== Code Execution Successful ===

                      REALLOC

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,sum=0,*array,m;
    printf("Enter the number of element:");
    scanf("%d",&n);
    array=(int*)malloc(n*sizeof(int));
   if(array==0)
   {
       printf("The memory is not allocated\n");
   }
   else
   {
       printf("Memory allocated and memory is %d\n",n);
   }
   printf("Enter %d of numbers by adding:",n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&array[i]);
       sum+=array[i];
   }
   printf("The sum of element %d:\n",sum);
   printf("Enter the new total element:");
   scanf("%d",&m);
   array=(int*)realloc(array,m*sizeof(int));
   if(array==NULL)
   {
       printf("Memory is not allocated\n");
   }
   else
   {
       printf("Memory is  allocated\n");
       printf("Enter the new adding elements:");
   }
   for(i=n;i<m;i++)
   {
       scanf("%d",&array[i]);
       sum+=array[i];
   }
   printf("The sum is %d\n",sum);
   free(array);
   printf("memory is deleted");
   return 0;
}


output:
Enter the number of element:2
Memory allocated and memory is 2
Enter 2 of numbers by adding:10
20
The sum of element 30:
Enter the new total element:3
Memory is  allocated
Enter the new adding elements:30
The sum is 60
memory is deleted

=== Code Execution Successful ===