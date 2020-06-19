        printf("%d is not a prime number",n);
    else
        printf("%d is a prime number",n);
}
void main()
{
int n;
printf("Enter no : "); //enter the number
scanf("%d",&n);
if(n<0)
    {
    printf("Please enter a positive integer");
    }
else
    prime(n);
}
