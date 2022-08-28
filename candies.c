//You have gathered N bags of candy and you want to distribute the candy amongst M kids. The i-th bag contains Ci pieces of candy. You want to make sure that every kid get the same amount of candy and that the number of pieces of candy they receive is the greatest possible. You can open each bag and mix all pieces of candy before distributing them to the kids.

//How many pieces of candy will remain after you share the candy amongst kids, based on the rules described above?

#include<stdio.h>

int remaining_candy(int candies[],int bags,int kids)
{
  int i,rem;
  int sum=0;
  for(i=0;i<bags;i++)
  {
    sum=sum+candies[i];
  }
    rem=sum%kids;
    return rem;
}
int main()
{
    int kids, bags;
    int candies[bags];
    scanf("%d%d",&bags,&kids);
    for (int i=0;i<bags;i++)
    {
       scanf("%d",candies[i]);
    }
    int rem=remaining_candy(candies,bags,kids);
   printf("Case #%d: ", rem);
    return 0;
}