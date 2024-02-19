#include <stdio.h>
void linearSearch(int n,int a[n])
{
    int num, pos=0;
    printf("\nEnter the number to be searched :");
    scanf("%d",&num);
    for(int i=0; i<n; i++)
    {
        if(a[i]==num)
        {
            printf("The element %d is in the array at position %d",num,i);
            pos++;
            break;
        }
    }
    if(pos==0)
        printf("The given element is not in the array");
}
void arrayReversal(int n,int a[n])
{
    for(int i=0; i<n/2; i++)
    {
        a[i]+=a[n-i-1];
        a[n-i-1]=a[i]-a[n-i-1];
        a[i]-=a[n-i-1];
    }
    printf("Reversed Array :\n");
    for(int i=0; i<n;i++)
        printf("%d ",a[i]);
}
void updateArray(int n, int a[n])
{
    for(int i=0; i<n; i++)
    {
        if(i%2==0)
            a[i]*=2;
        else
            a[i]+=5;
    }
    printf("Updated Array :\n");
    for(int i=0; i<n;i++)
        printf("%d ",a[i]);
}
void insertElement(int n, int a[n+1])
{
    int num,pos;
    
    printf("Enter the number to be inserted :");
    scanf("%d",&num);
    printf("Enter the position at which number to be inserted :");
    scanf("%d",&pos);
    for(int i=n; i>=pos;i--)
        a[i+1]=a[i];
        
    a[pos]=num;
    printf("Updated Array :\n");
    for(int i=0; i<=n;i++)
        printf("%d ",a[i]);
}
void deleteElement(int n, int a[n])
{
    int pos;
    printf("Enter the position at which the element is to be deleted : ");
    scanf("%d",&pos);
    for(int i=pos;i<n;i++)
        a[i]=a[i+1];

    printf("Updated Array :\n");
    for(int i=0; i<n-1;i++)
        printf("%d ",a[i]);
}
void main()
{
    int n;
    printf("Enter the size of the array :");
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        printf("Enter the element a[%d] :",i);
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n;i++)
        printf("%d ",a[i]);

    int func,func1;
    printf("\nDo you want to perform any function on array(Enter 1 if yes) :");
    scanf("%d",&func);
    while(func==1)
    {
        int choice;
        printf("\nEnter your choice :\n1. Linear Search \n2. Array Reversal\n3. Update the elements of the array(multiply the elements at even indices by two and add 5 to the element at odd indices)\n4. Inserting an element at the specified position.\n5. deleting an element at the specified position \n");
        scanf("%d",&choice);
    
        switch(choice)
        {
            case 1:
                linearSearch(n,a);
                break;
            case 2:
                arrayReversal(n,a);
                break;
            case 3:
                updateArray(n,a);
                break;
            case 4:
                insertElement(n,a);
                break;
            case 5:
                deleteElement(n,a);
                break;
            default:
                printf("CHOOSE A VALID OPTION");
        }
        printf("\nDo you still want to perform any operation(Enter 1 if yes) : ");
        scanf("%d",&func1);
        if(choice == 4)
            n=n+1;

        else if(choice == 5)
            n=n-1;

        if(func1==1)
            continue;
        
        else
            break;
    }
} 