//10. Given an integer array nums , return an array answer such that answer[i] is equal to\
the product of all the elements of nums except nums[i]
#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<int ,5> num={1,2,3,4,5};
    array<int ,5> answers;
    int count=0;
    int index =0;
    int j=0;
    answers.fill(1);
    for(auto i:num)
    {
        if(i==0)
        {
            count++;
            index =i;
        }
    }
    if(count>1)
    {
        answers.fill(0);
    }
    else if(count==1)
    {
        for(int i=0;i<answers.size();i++)
        {
            if(i==index)
            {
               continue;
            }
            answers[i]=0;
        }
        for(int i=0;i<answers.size();i++)
        {
            if(num[i]==0)
                continue;
            answers[index]*=num[i];
        }
    }
    else
    {
       loop: for(int i=0;i<num.size();i++)
        {
            if(i==j)
                continue;
            else
              answers[j]*=num[i];
        }
        if(j<num.size()-1)
        {
            j++;
            goto loop;
        }
    }
    for(auto i:answers)
    {
        cout<<i<<" ";
    }
    return 0;
}
