//---------Multiply by 31 -------
// #include <stdio.h>

// int main() {
//   int x;
//   scanf("%d", &x);
//   print/f("%d\n", (x << 5) - x);
//   return 0;
// }
//--------------divide by 32 ----------------------
// #include <stdio.h>

// int main() {
//   int x;
//   scanf("%d", &x);
//   printf("%d\n", (x >> 5));
//   return 0;
// }
//---------------Multiply by 65-----------------
// #include <stdio.h>

// int main() {
//   int x;
//   scanf("%d", &x);
//   printf("%d\n", (x << 6) + x);
//   return 0;
// }
// *********** no. is perfect or not ************:)
// #include <stdio.h>
// int main() {
//   int x, sum = 0;
//   scanf("%d", &x);
//   for (int i = 1; i < x; i++) {
//     if (x % i == 0) {
//       sum += i;
//       printf("factors are %d\n", i);
//     }
//   }
//   if (sum == x) {
//     printf("Perfect no.\n");
//   } else {
//     printf("Not a perfect no.\n");
//   }
// }
// ________________ factorial of a no._____________
// #include <stdio.h>
// int main() {
//   int x;
//   long long int fact = 1;
//   scanf("%d", &x);
//   for (int i = 1; i <= x; i++) {
//     fact = fact * i;
//   }
//   printf("The factorial of %d is %lld\n", x, fact);
// }
// ___________________no. is armstrong or not _____________
// #include <math.h>
// #include <stdio.h>
// int main() {
//   int x, b = 0, t1, t2, sum = 0;
//   scanf("%d", &x);
//   t1 = x;
//   t2 = x;
//   while (x > 0) {
//     x = x / 10;
//     b++;
//   }
//   while (t1 > 0) {
//     int r = t1 % 10;
//     sum = sum + pow(r, b);
//     t1 = t1 / 10;
//   }
//   if (sum == t2) {
//     printf("armstrong\n");
//   } else {
//     printf("not an armstrong\n");
//   }
//   return 0;
// }
// ________________ no. is strong/krishnamurthy/robinson/peterson no. or not
// _____________
 //#include <stdio.h>
 // int x, temp, b, fact = 1, sum =0;
//  scanf("%d", &x);  
 // temp = x;
//  while (x) {
//    b = x % 10;
 //    for (int i = 1; i <= b; i++) {
//       fact = fact * i;
 //    }
 //      sum = sum + fact;
//     x=x/10;
 //    fact = 1;
 //  }
 //  if (sum == temp) {
      //   printf("Strong\n");
 //  } else {
//     printf("not\n");
//   }
//   return 0;
// }
 // write a  neon no. (kaafi time laga ise krne me)
// #include<stdio.h>
// #include<math.h>>
// int main(){
//   int x,temp,sqr,b,sum=0,t;
//   scanf("%d",&x);
//   temp=x;
  
//   sqr = temp*temp;
//   t=sqr;
//   while(sqr){
//   b=sqr%10;
//     sum=sum+b;
//   sqr= sqr/10;
//   }
//   printf("square of the given no. is %d\n",t);
//   printf("sum of digits = %d\n",sum);
//  if(temp==sum){
//    printf("%d is a neon no.\n",temp);
//  }
//   else{
//     printf("%d is not a neon no.\n",temp);
//   }
//   return 0;
// }
 //_______________ decimal to binary..  ____________
// #include<stdio.h>
// int main(){
//   int x,b,sum =0,m=1;
//   scanf("%d",&x);
//   while(x){
//     b=x%2;
//     sum = sum +(b*m);
//     m = m*10;
//     x=x/2;
//   }
//   printf("%d\n",sum);

//   return 0;
// }
// _______________find avg of all odd no. in given range___
// #include<stdio.h>
// int main(){
//   int n,sum =0,avg,c;
//   scanf("%d",&n);
//   for(int i=1;i<=n;i++){
//     if(i%2!=0){
//   sum+=i;
//     }
//       c = i/2;
//   }
// avg = sum/c;
//   printf("sum of all odd no. = %d\n",sum);
//   printf("The average of all odd no. in the given range = %d",avg);
//   return 0;
// }
// ______________multiply two no. without multiplication operator
// #include<stdio.h>
// int main(){
// int x,y,pro=0;
//   scanf("%d",&x);
//   scanf("%d",&y);
//   while(y>0){
//     pro = pro + x;
//     y--;
//   }
 
//   printf("%d\n",pro);

//   return 0;
// }
// ++++ all leap year in the given range++++
// #include<stdio.h>
// int main(){
//   int n_year;
//   scanf("%d",&n_year);
//   for(int i=1;i<=n_year;i++){
//   if(i%400==0){
//   printf("%d is a Leap year\n",i);
//   }
//     else if (i%4==0 && i%100==0){
//     printf("%d is Not a leap year\n",i);
//     }
//   }
//   return 0;
// }
// _______all odd no. from m to n_____
// #include<stdio.h>
// int main(){
// int m,n;
//   scanf("%d",&m);
//   scanf("%d",&n);
//   for(int i=m;i<=n;i++){
//     if(i%2!=0){
//       printf("%d\n",i);
//     }
//   }

//   return 0;
// }
// ____pattern 1_______
// #include<stdio.h>
// int main(){
// for(int i=1;i<=4;i++){
//   printf("1 2 3 4 5\n");
// }

//   return 0;
// }
// _____pattern 2_____
// #include<stdio.h>
// int main(){
// for(int i=1;i<=4;i++){
//   printf("* ****\n");
// }

//   return 0;
// }
//  ++++++pattern 3+++++++++++
// #include<stdio.h>
// int main(){
// for(int i=1;i<=4;i++){
//   for(int j=1;j<=i;j++){
//     printf("%d",j);
//   }
//   printf("\n");
// }

//   return 0;
// }
// _____pattern 4______
// #include<stdio.h>
// int main(){
// for(int i=1;i<=4;i++){
//   for(int j=1;j<=i;j++){
//     printf("%d",i);
//   }
//   printf("\n");
// }

//   return 0;
// }
// ++++pattern 5 +++++++
// #include<stdio.h>
// int main(){
// for(int i=1;i<=4;i++){
//   for(int j=1;j<=i;j++){
//     printf("*");
//   }
//   printf("\n");
// }

//   return 0;
// }
//†††††† Pattern 6 †††
// #include<stdio.h>
// int main(){
// for(int i=65;i<=69;i++){
//   for(int j=65;j<=i;j++){
//     printf("%c",j);
//   }
//   printf("\n");
// }

//   return 0;}
// !!!!!!!!pattern 7!!!!!!!!!!
// #include<stdio.h>
// int main(){
//   int k=1;
//   for(int i=1;i<=5;i++){
//     for(int j=1;j<=i;j++){
//   printf(" %d ",k);
//       k++;
//     if(k>9){
//       k=1;
//     }
//     }
//     printf("\n");
//   }
//   return 0;
// }
// ________pattern 8(side triangle)_____
// #include<stdio.h>
// int main(){
// for(int i=1;i<=5;i++){
//   for(int j=1;j<i;j++){
//     printf(" ");
//   }
//   for(int k=5;k>=i;k--){
//     printf("*");
//   }
//   printf("\n");
// }
//   return 0;
// }
// <<<<<<pattern 9(ulta triangle)>>>>>>>
// #include<stdio.h>
// int main(){
// for(int i=1;i<=5;i++){
//   for(int j=1;j<i;j++){
//     printf(" ");
//   }
//   for(int k=5;k>=i;k--){
//     printf("* ");
//   }
//   printf("\n");
// }
//   return 0;
// }
// |||||||pattern 10(# and * pattern) ||||||||
// #include<stdio.h>
// int main(){
// for(int i=1;i<=5;i++){
//   for(int j=5;j>=i;j--){
//     if(j%2==0){
//       printf("#");
//     }
//     else{
//       printf("*");
//     }
//   }
//   printf("\n");
// }
//   return 0;
// }
// ******** pattern 11(0and 1)**********
// #include<stdio.h>
// int main(){
// for(int i=1;i<=5;i++){
//   for(int j=1;j<=i;j++){
//     if((i+j)%2==0){
//       printf(" 1 ");
//     }
//     else{
//       printf(" 0 ");
//     }
//   }
//   printf("\n");
// }
//   return 0;
// }
// $$$$$$$ magic no. with nested loop $$$$$$
// #include<stdio.h>
// int main(){
// int x,r,sum=0;
//   scanf("%d",&x);
//   while(x>9){
// while(x>0)    {
//   r=x%10;
//   sum = sum + r;
//   x=x/10;
// }
//     x=sum;
//     sum =0;
//   }
//   if(x==1){
//     printf("Magic no\n");
//   }
//   else{
//     printf("Not a Magic no\n");
//   }
//   return 0;
// }
//  pattern(same no. in every row)
// #include<stdio.h>
// int main(){
// for(int i=1;i<=5;i++){
//   for(int j=1;j<=5;j++){
//     printf("%d",i);
//   }
//   printf("\n");
// }
//   return 0;
// }
// ****** pattern(small aaaa and all) ******
// #include<stdio.h>
// int main()
// {
//    for(int i=65;i<=69;i++){
//      for(int j=65;j<=69;j++){
//        if(i%2==0){
//          printf("%c",i);
//        }
//        else{
//          printf("%c",i+32);
        
//        }
//      }
//      printf("\n");
//    }

//    return 0;
// }
//  pattern (khatarnaak)
// #include<stdio.h>
// int main()
// {
// for(int i=1;i<=5;i++){
//   for(int j=1;j<=5;j++){
//     if(j<=(5-i)){
//       printf("1");
//     }
//     else{
//       printf("%d",i);
//     }
//   }
//   printf("\n");
// }

//    return 0;
// }
// pattern (khatarnaak 2 ABCD wala)
// #include<stdio.h>
// int main()
// {
// char ch='A';
//   int n;
//   scanf("%d",&n);
//   for(int i=1;i<=n;i++){
//     for(int j=1;j<=n;j++){
//       if(j==1 || i==1 || j==n || i==n){
//         printf("*");
//       }
//       else{
//         printf("%c",ch++);
//       }
//       if(ch>'Z'){
//       ch='A';
//       }
//     }
//     printf("\n");
//   }

//    return 0;
// }
// pattern (khatarnaak 3)
// #include<stdio.h>
// int main(){
// for(int i=1;i<=5;i++){
//   for(int j=i;j>=1;j--){
// printf("%d",j);
//   }
//   printf("\n");
// }
  
//   return 0;
// }
// pattern (nayab)
// #include<stdio.h>
//  int main(){
//   for(int i=1;i<=5;i++){
//     for(int j=1;j<=i;j++){
      
//       if(j==1 || i==5 || i==j){
//         printf("*");
//       }
//      else{
//        printf(" ");
//      }
//     }
//     printf("\n");
//   }
   
// return 0;
//    }
// +++++++++ diamond +++++++
// #include<stdio.h>
//  int main(){
//     for(int i=1;i<5;i++){
//       for(int j=i;j<5;j++){
//         printf(" ");}
//       for(int j=1;j<=i;j++){
//         printf("* ");}
//       printf("\n");
//     }
//    for(int i=1;i<=5;i++){
//      for(int j=1;j<i;j++){
//       printf(" ");
//        }
//      for(int j=i;j<=5;j++){
//        printf("* ");
//      }
//      printf("\n");
//    }
   
// return 0;
//    }
//++++++++ hollow diamond +++++++++
//  #include<stdio.h>
//  int main(){
//     for(int i=1;i<5;i++){
//       for(int j=i;j<5;j++){
//         printf(" ");}
//       for(int j=1;j<=i;j++){
//         if(j==i || j==1){
//         printf("* ");}
//         else{
//           printf("  ");
//         }
//         }
//       printf("\n");
//     }
//    for(int i=1;i<=5;i++){
//      for(int j=1;j<i;j++){
//       printf(" ");
//        }
//      for(int j=i;j<=5;j++){
//        if(j==i || j==5){
//        printf("* ");}
//        else{
//          printf("  ");
//        }
//      }
//      printf("\n");
//    }
   
// return 0;
//    }
//  _______ given no. is member of fibonacci series or not _____
// #include<stdio.h>
// int main(){
// int n,a=0,b=1,c=0;
//   scanf("%d",&n);
//   for(int i=1;i<=n;i++){
//     // printf("%d",c);
//     a=b;
//     b=c;
//     c=a+b;
//   if(c==n){
//     printf("%d is a member of fabonacci series",c);
//     break;
//   }}
//   else{
//     printf("Not");}
//   return 0;
// }
// to check the bit at given position is set(1) or unset(0)
// #include<stdio.h>
// int main(){
//   int a,b;
//   scanf("%d%d",&a,&b);
//   a&(1<<(b-1))?printf("Set"):printf("Unset");
  
//   return 0;
//   }
//++++++ khatarnaak sa pattern ulta seedha ++++++
// #include<stdio.h>
// int main(){
//   int k=1,l;
// for(int i=1;i<=5;i++){
//   l=k+i-1;
//   for(int j=0;j<i;j++,k++){
//     if(i%2==1){
//     printf(" %d ",k);
//    }
// else{
//   printf(" %d ",l--);
//   }
// }
    
//   printf("\n");
// }
//   return 0;
//   }
// ___________ to count frequency of any value __________
// #include<stdio.h>
// int main(){
// int n;
//   scanf("%d",&n);
//   int c=0,a[n],value;
//   for(int i=0;i<n;i++){
//     scanf("%d",&a[i]);
//   }
//   scanf("%d",&value);
//   for(int i =0;i<n;i++){
//   if(a[i]==value){
//     c++;
//   }}
      
// printf("%d occurs %d times\n",value,c);
  
  
//   return 0;
// }
//__________ left rotate an array by r times of rotations___
// #include<stdio.h>
// int main(){
//   int n,c;
//   scanf("%d",&n);
//   int a[n];
//   int r;
//   scanf("%d",&r);
//   r=r%n;// to reduce no. of rotations..
//   for(int i=0;i<n;i++){
//     scanf("%d",&a[i]);}
//   for(int j=0;j<=r;j++){
//   for(int i=0;i<n;i++){
//     if(i==0){
//       c=a[i];
//     }
//     else{
//       a[i-1]=a[i];
//     }
//     }
//       a[n-1]=c;}
//   for(int i=0;i<n;i++){
//     printf("%d",a[i]);}
//     return 0;
//   }
// _________ even array and odd array
// #include <stdio.h>
// int main()
// {
//   int n,j=0,k=0,b[10],c[10];
//   scanf("%d",&n);
//   int a[n];
//   for(int i=0;i<n;i++){
//     scanf("%d",&a[i]);
//   }
//   for(int i=0;i<n;i++){
//     if(a[i]%2==0){
//       b[j]=a[i];
//       j++;
//     }
//     else{
//       c[k]=a[i];
//       k++;
//     }
//   }
//   printf("Even array is:\n");
//   for(int i=0;i<j;i++){
//     printf("%d",b[i]);
//   }
//   printf("\n");
//   printf("Odd array is :");
//   for(int i=0;i<k;i++){
//     printf("%d",c[i]);
//   }
//   return 0;}

//   max element in array

// #include <stdio.h>
// int main()
// {
//   int n;
//   scanf("%d",&n);
//   int a[n];
//   for(int i=0;i<n;i++){
//     scanf("%d",&a[i]);
//   }
//   for(int i=0;i<n;i++){
//     if(a[0]<a[i]){
//       a[0]=a[i];
//     }
//   }
//   printf("%d",a[0]);
//   return 0;
// }
// ________ second smallest and second largest ____
// #include<stdio.h>
// int main(){
// int n,t;
//   scanf("%d",&n);
// int a[n];
// for(int i=0;i<n;i++){
// scanf("%d",&a[i]);
// }
// for(int i=0;i<n-1;i++){
// for(int j=0;j<n-1-i;j++){
// if(a[j]>a[j+1]){
// t=a[j];
// a[j]=a[j+1];
// a[j+1]=t;
// }
// }
// }
// printf("Second smallest is %d and second largest is %d",a[1],a[n-2]);
//   return 0;
// }
// ________ search the element and print its position__
// #include<stdio.h>
// int main(){
// int n,e,t,c;
//   scanf("%d",&n);
//   scanf("%d",&e);
// int a[n];
// for(int i=0;i<n;i++){
// scanf("%d",&a[i]);
// }
//   for(int i=0;i<n;i++){
// if(e==a[i]){
// t=a[i];
// c++;
// }}
//   if(e==t){
// printf("%d",c);
//   }
//   else{
// printf("Not found\n");
//   }
// return 0;
// }
// ____ descending order _______
// #include<stdio.h>
// int main(){
// int t,a[5]={1,5,6,2,4};
//   for(int i=0;i<4;i++){
// for(int j=0;j<4-i;j++){
// if(a[j]<a[j+1]){
// t=a[j];
// a[j]=a[j+1];
// a[j+1]=t;
// }
// }
//   }
//   for(int i=0;i<5;i++){
// printf("%d",a[i]);
//   }
// return 0;
// }
// ________ sum of rows and columns -______
// #include<stdio.h>
// int main(){
// int n;
// scanf("%d",&n);
//   int a[n][n];
//   for(int i=0;i<n;i++){
// for(int j=0;j<n;j++){
// scanf("%d",&a[i][j]);
// }
//   }
//   for(int i=0;i<n;i++){
// int sum =0;
//     for(int j=0;j<n;j++){
// sum = sum +a[i][j];
//       printf(" %d ",a[i][j]);
//     }
// printf("  %d",sum);
//     printf("\n");
//   }
//   for(int i=0;i<n;i++){
// int sum =0;
// for(int j=0;j<n;j++){
// sum = sum +a[j][i];
// }   
//   printf(" %d",sum);
//   }

// }
//_______ display boundary elements in matrix form___
// #include<stdio.h>
// int main(){
// int n;
//   scanf("%d",&n);
// int a[n][n];
//   for(int i=0;i<n;i++){
// for(int j=0;j<n;j++){
// scanf("%d",&a[i][j]);
// }}
//  for(int i=0;i<n;i++)   {
// for(int j=0;j<n;j++){
// if(i==0 || j==n-1 || i==n-1 || j==0){
// printf(" %d ",a[i][j]);
// }
//    else{
//  printf(" 0 ");
//    }
// }
//    printf("\n");
//  }
// }
// ____ transpose of a matrix_____
// #include<stdio.h>
// int main(){
// int n;
//   scanf("%d",&n);
// int a[n][n],trans[n][n];
//   for(int i=0;i<n;i++){
// for(int j=0;j<n;j++){
// scanf("%d",&a[i][j]);
// }}
//     for(int i=0;i<n;i++){
// for(int j=0;j<n;j++){
// trans[j][i]=a[i][j];}}
//     for(int i=0;i<n;i++){
// for(int j=0;j<n;j++){
// printf(" %d ",trans[i][j]);
// }
//       printf("\n");
//     }
// }
// ________ sum of diagonal elements and anti diagonal
// #include<stdio.h>
// int main(){
// int n,sum=0,sum1=0;
//   scanf("%d",&n);
// int a[n][n];
//   for(int i=0;i<n;i++){
// for(int j=0;j<n;j++){
// scanf("%d",&a[i][j]);
// }}
//     for(int i=0;i<n;i++){
// for(int j=0;j<n;j++){
// if(i==j){
// sum+=a[i][j];
// }
// }
//     }
    
//   printf("sum of diagonal elements is %d\n",sum);
//   for(int i=0;i<n;i++){
// for(int j=0;j<n;j++){
// if((i+j)==n-1){
// sum1+=a[i][j];
// }
// }
//   }
//   printf("sum of antidiagonal elements is %d",sum1);

// }
// ______ addition of matrices -_____
// #include<stdio.h>
// int main(){
// int n;
//   scanf("%d",&n);
// int a[n][n],b[n][n],c[n][n];
//   for(int i=0;i<n;i++){
// for(int j=0;j<n;j++){
// scanf("%d",&a[i][j]);
// }}
// for(int i=0;i<n;i++){
// for(int j=0;j<n;j++){
// scanf("%d",&b[i][j]);
// }
// }
//   for(int i=0;i<n;i++){
// for(int j=0;j<n;j++){
// c[i][j]=a[i][j] + b[i][j];
// }
//   }
//   for(int i=0;i<n;i++){
// for(int j=0;j<n;j++){
// printf(" %d ",c[i][j]);
// }
//     printf("\n");
//   }

// }
// _____identity matrix or not ____
// #include<stdio.h>
// int main(){
// int n,c=0;
//   scanf("%d",&n);
// int a[n][n];
//   for(int i=0;i<n;i++){
// for(int j=0;j<n;j++){
// scanf("%d",&a[i][j]);
// }}
//   for(int i=0;i<n;i++){
// for(int j=0;j<n;j++){
// if(i==j && a[i][j]!=1){
//   c=-1;
// break;
//   }
//   else if(i!=j && a[i][j]!=0){
//   c=-1;
//     break;

//   }
// }
//   }
//   if(c==0){
// printf("identity matrix\n");
//   }
//   else{
//     printf("Not\n");
//   }}
// __________sparse or dense matrix ______
// #include<stdio.h>
// int main(){
// int n,c=0,p=0;
// scanf("%d",&n);
// int a[n][n];
// for(int i=0;i<n;i++){
// for(int j=0;j<n;j++){
// scanf("%d",&a[i][j]);
// }
// }
// for(int i=0;i<n;i++){
// for(int j=0;j<n;j++){
// if(a[i][j]==0){
// c++;
// }
//   else if(a[i][j]!=0){
//     p++;
//   }
// }
// }
//   if(c>p){
// printf("Sparse matrix\n");
//   }
// else{
// printf("Dense matrix");
// } 
// }
//  ________ dterminant ______
// #include<stdio.h>
// int main(){
// int n,det=0;
// scanf("%d",&n);
// int a[n][n];
// for(int i=0;i<n;i++){
// for(int j=0;j<n;j++){
// scanf("%d",&a[i][j]);
// }
// }
//   det = a[0][0]*((a[1][1]*a[2][2]) - (a[2][1]*a[1][2])) - a[0][1]*((a[0][1]*a[2][2]) - (a[2][0]*a[1][2])) + a[0][3]*((a[1][0]*a[2][1]) - (a[2][0]*a[1][1])); 

// printf("%d",det);
  
// }
// _______product of matrix _______
// #include<stdio.h>
// int main(){
// int n;
// scanf("%d",&n);
// int a[n][n],b[n][n],c[n][n];
// for(int i=0;i<n;i++){
// for(int j=0;j<n;j++){
// scanf("%d",&a[i][j]);
// }
// }
//   for(int i=0;i<n;i++){
// for(int j=0;j<n;j++){
// scanf("%d",&b[i][j]);
// }
// }
// for(int i=0;i<n;i++){
// for(int j=0;j<n;j++){
// c[i][j]=0;
//   for(int k=0;k<n;k++){
// c[i][j]=c[i][j]+ (a[i][k]*b[k][j]);
//   }
// }
// }
//   for(int i=0;i<n;i++){
// for (int j=0;j<n;j++){
// printf(" %d ",c[i][j]);
// }
//     printf("\n");
//   }
// }
//  ________ upper and lower triangular matrix ___
// #include<stdio.h>
// int main(){
// int n;
// scanf("%d",&n);
// int a[n][n];
// for(int i=0;i<n;i++){
// for(int j=0;j<n;j++){
// scanf("%d",&a[i][j]);
// }
// }
//   printf("Upper triangular matrix\n");
// for(int i=0;i<n;i++){
// for(int j=0;j<n;j++){
// if(i<=j){
// printf(" %d ",a[i][j]);
// }
  
// }
//   printf("\n");
// }
//    printf("lower triangular matrix\n");
// for(int i=0;i<n;i++){
// for(int j=0;j<n;j++){
// if(i>=j){
// printf(" %d ",a[i][j]);
// }
  
// }
//   printf("\n");
// }

  
// }
//  ________ Check given integer is even or odd using function________
// #include<stdio.h>
// void check(int a){
//   if(a%2==0){
//     printf("%d is Even\n",a);
//   }
//   else{
//     printf("%d is Odd\n",a);
//   }
//   }
//   int main(){
//     int a;
//     scanf("%d",&a);
//     check(a);
//     check(17);
//     check(20);
// }
// ____ prime no. or not using function ____
// #include<stdio.h>
// int prime(int a){
// int c=0;
//   for(int i=1;i<=a;i++){
//     if(a%i==0){
//       c++;
//     }
//   }
//   if(c==2){
//     printf("Prime\n");
//   }
//   else{
//     printf("Not prime\n");
//   }
// }
//   int main(){
//     int a;
//     scanf("%d",&a);
//     prime(a); 
// }
// _______ all n digit prime no. and power also ______
// #include<stdio.h>
// int power(int a,int b){
//   int c=1;
//     for(int i=1;i<=b;i++){
//     c=c*a;
//   }
//   return c;
// }
// int prime(int a){
// int c=0;
//   for(int i=1;i<=a;i++){
//     if(a%i==0){
//     c++;
//     }
//     }
//   if(c==2){
//     return 1;
//   }
//   else{
//     return 0;
//   }
//   }
//   int main(){
//     int a;
//     scanf("%d",&a);
//     for(int i=power(10,a-1);i<power(10,a);i++){
//       if(prime(i)){
//       printf("%d\n",i);
//     }}
// }
// ______ merge two arrays _____
/*include<stdio.h>

int main()
{
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    int A[a],B[b],c[a+b];
    for(int i=0;i<a;i++){
    scanf("%d",&A[i]);
    c[i]=A[i];}
    int j=a;
    for(int i=0;i<b;i++){
    scanf("%d",&B[i]);
    c[j]=B[i];
    j++;}
    for(int i=0;i<(a+b);i++){
    printf("%d",c[i]);}
    return 0;
}*/
// _________ meal charge of a customer _______
// #include<stdio.h>
// float charge(float a){
// float tax=0,tip=0,total_charge=0,total_bill=0;
//   tax = a*(20/100);
//   total_charge = tax+a;
//   tip= (total_charge)*(15/100);
//   total_bill= tip + total_charge;
//   return total_bill;
// }
// int main(){
// float a;
//   scanf("%f",&a);
//   printf("%f",charge(a));
//   return 0;
// }
// _____ quadratic equation ____
// #include<stdio.h>
// int quad(int a,int b,int c){
// int d;
// d= (b*b) - 4*a*c;
//   if(d>0){
//     printf("Real roots\n");
//   }
//   else{
//     printf("Roots are imaginary\n");
//   }
// }
// int main(){
// int a,b,c;
//   scanf("%d%d%d",&a,&b,&c);
// quad(a,b,c);
// }
// _____ factorial _____
// int fact(int a){
// int c=1;
// for(int i=1;i<=a;i++){
// c=c*i;
// }
//   return c;
// }
// int main(){
// int a;
// scanf("%d",&a);
// printf("%d",fact(a));
// }
// _____find sum of two variables using pointer _____
// #include<stdio.h>
// int main(){
// int a=19,b=15,*p,*q,sum;
// p=&a;
// q=&b;
//   sum=*p+*q;
//   printf("%d",sum);
// }
// ____fumction that will scan two var
// #include <stdio.h>
// void scan(int *a,int *b){
//   scanf("%d%d",a,b);
// }
// int main(){
//   int a,b;
//   scan(&a,&b);
//   printf("%d %d",a,b);
  
// }
// _____ scan array and to print array (functons)___
// #include<stdio.h>
// void scan(int *p,int n){
//   for(int i=0;i<n;i++){
//     scanf("%d",p+i);
//   }
// }
// void print(int *p,int n){  //n--> no. of elements
//   for(int i=0;i<n;i++){
//     printf("%d",*(p+i));
//   }
// }
// int main(){
//   int a[100],b=5;
//   scan(a,b);
//   print(a,b);
// }
// __funct. to find sum of ele. of array by taking arr as prameter ____
// #include <stdio.h>
// void sum(int *p,int n){
//   int sum =0;
//   for(int i=0;i<n;i++){
//     sum+=*(p+i);
//   }
//   printf("%d",sum);
// }
// int main(){
//   int a[4]={1,2,3,4},b=4;
//   int *p=a;
//   sum(p,b);
// }
// __one to scan 2d array and printf___
// #include<stdio.h>
// void scan(int *p,int r,int c){
//   for(int i=0;i<r;i++){
//     for(int j=0;j<c;j++){
//       scanf("%d",p++);
//     }
//   }
// }
// void print(int *p,int r,int c){
//    for(int i=0;i<r;i++){
//     for(int j=0;j<c;j++){
//       printf("%d ",*(p++));}
//      printf("\n");}
// }
// int main(){
//   int r,c;
//   scanf("%d%d",&r,&c);
//   int a[r][c];
//   scan(a,r,c);
//   print(a,r,c);
// }
// ___string from user and reverse it ____
// #include <stdio.h>
// #include <string.h>
// int main(){
//   char s[100];
//   scanf("%s",s);
//   strrev(s);
//   puts(s);
  
//   }
// ____no. of alphabets _____
// int main(){
//   int a=0,b=0,c=0,d=0;
//   char s[100];
//   scanf("%[^\n]s",s);
//   for(int i=0;i<'\0',i++){
//     if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z')){
//       a++;
//     }
//     else if((s[i]>='0' && s[i]<='9')){
//       b++;
//     }
//     else if (s[i]==' '){
//       c++;
//     }
//     else{d++;}
//   }
//   printf("%d %d %d %d",a,b,c,d);
// }
// ____string is pangram or not ____
#include<stdio.h>
int main(){

  
}