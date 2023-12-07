#include<stdio.h>
/*void main()
{
	int Ali = 18;
    int *Aslam = &Ali;
	
	printf("%d\n",Ali);
	
	printf("%p\n",&Ali);
	
	printf("%p\n",&Aslam); 	
}
*/


/*void mobile(char name[], int version){
	printf("the name is %s\n and  version is %d\n",name,version);
}
int main(){
	mobile("Google pixal\n", 10);
	mobile("Infinix\n",11);
	mobile("Vivo\n",12);
}
*/


int main (){
	FILE *Ali;
	
	Ali=fopen("Text.txt","w");
	
	fprintf(Ali,"Hello");
	
	fclose(Ali);
	
}


