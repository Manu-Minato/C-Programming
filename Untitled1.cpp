#include<stdio.h>
int main(){

 int n=5;
 for(int i=1;i<=n;i++){
 	for(int j=1;j<=i;j++){
 		if(j==1 || j==i){
 			printf("%c",i+64);
		 }
		 else{
		 	printf(" ");
		 }
		 
	 }
	 for(int j=1;j<=n-i;j++){
	 	printf(" ");
	 }
	 	for(int j=1;j<=i;j++){
 		if(j==1 || j==i){
 			printf("%c",i+64);
		 }
		 else{
		 	printf(" ");
		 }
		 
	 }
	 
	 printf("\n");
 	
 }
 return 0;
}
