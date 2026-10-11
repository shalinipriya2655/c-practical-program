/*Stack Implementation using arrays*/
 # include <stdio.h>
 # include <conio.h>
 # include <stdlib.h>
 # define size 5
 struct stack
 { 
     int s[size];
     int top; 
}st;
int stfull()
 { 
 if(st.top>=size-1)
 return 1; 
else return 0;
 }
 void push(int item)
 {
 st.top++;
 st.s[st.top] =item;
 }
 int stempty( )
  {
  if(st.top==-1)
 return 1;
 else return 0;
 } 
int pop()
 {
 int item;
 item=st.s[st.top];
 st.top--;
 return(item);
 }
 void display()
 {
 int i;
 if(stempty())
    printf("Stack Is Empty!\n");
 else 
{
  for(i=st.top;i>=0;i--)
 printf("\n%d",st.s[i]);
 }
}
 void main(void)
 {
 int item,ch;
 char ans;
 st.top = -1;
 clrscr();
 printf("<-----Stack using Array----->\n");
 while(1) 
{
 printf("\n1.Push\n2.Pop\n3.Display\n4.exit\n");
 printf("Enter Your Choice:\n"); 
scanf("%d",&ch); 
switch(ch)
 {
 case 1: printf("Enter The item to be pushed:\n");
 scanf("%d",&item);
 if(stfull())
   printf("Stack is Full!\n");
 else
 push(item);
 break;
 case 2: if(stempty())
    printf("Empty stack!\n");
 else
 {
 item=pop();
 printf("The popped element is %d\n",item);
 } 
break;
 case 3: display(); 
         break;
 case 4:
 exit(0);
 } 
} 
getch();
 } 
