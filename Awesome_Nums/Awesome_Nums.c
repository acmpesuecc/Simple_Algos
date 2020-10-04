//Naive Straightforward Approach,
// For each number starting from the given number till 2 ,
// Get each digit and check if it is prime

#include<stdio.h>

int main()
{
    int answer=0;
    int given_number;
    printf("Enter the given number \n");
    scanf("%d",&given_number);

    for(int i=2;i<=given_number;i++)
    {
        int temp_num=i;
        while(temp_num>0)
        {
            int digit=temp_num%10;
            if(digit==2 || digit == 3 || digit==5 || digit==7 )
            {
                answer++;
                break; // we break as we need atleast 1 prime;
            }
            temp_num/=10;
        }
    }
    printf("The answer is %d\n",answer);
    return 0;
}