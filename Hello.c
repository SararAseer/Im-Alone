#include <stdio.h>
#include <stdlib.h>

int length(char *s){
  int i=0;
  while(*s++){
    i++;
    
  }
  return i;

}

int strlen1( char *s ) {
  int i=0;
  while(*s++){
    i++;
    
  }
  return i;
}
 


char * strcpy1( char *dest, char *source ){
  while(*source){
    *dest++=*source++;
  }
  return dest;


}


char * strncpy1( char *dest, char *source, int n){
  while(n--){
    *dest++=*source++;
  }
  return dest;

}

char * strcat1( char *dest, char *source ){
  dest+=strlen(dest);
  while(*source){
      *dest++=*source++;
  }  
  return dest;

}

char * strncat1( char *dest, char *source, int n ){
  dest+=strlen(dest);
  while(n--){
      *dest++=*source++;
  }  
  return dest;

}

int strcmp1( char *s1, char *s2 ){
  int a=(strlen(s1)>=strlen(s2)?strlen(s1):strlen(s2));
  while(a--){
    if(*s1>*s2){
      return 99;
    }
    else if(*s1<*s2){
      return -99;
    }
    *s1++;
    *s2++;
  }
  return 0;
}

char * strchr1( char *s, char c ){
  int yes=1;
  int i=0;
  char b[100]="";
  while(*s++){
    if(*s==c){
      yes=0;
    }
    if(yes==0){
      b[i++]=*s;
    }
  }
  return (yes==0 ? b: NULL);
   
}
char * strstr1( char *s1, char * s2 ){
  while(*s1++){
    if(*s2==*s1){
      char *s3=s1;
      char *s4=s2;
      int i=0;
      while(*s4){
	if(*s3++==*s4++){
	  i++;
	}
	
      }
      if(i==strlen(s2)){
	return s1;
      }
      
    }
    
  }
  return NULL;
}

int main(){
  char *s1="dogasd";
  char s2[100]="catfasf";
  char *s3="pog";
  char *test=strstr1(s1,"ga");
  
  printf("Testing strlen(s1):\n");
  printf("[standard]:%d \n", strlen(s1) );
  printf("[mine]:%d \n", strlen1(s1) );
  
  printf("Testing strcpy(s2,s1):\n");
  printf("[standard]:%s \n", strcpy(s2,s1) );
  strcpy(s2,"cat");
  strcpy1(s2,s1);
  printf("[mine]:%s \n", s2);
  strcpy(s2,"catfasf");

  printf("Testing strncpy(s2,s1,2):\n");
  printf("[standard]:%s \n", strncpy(s2,s1,2) );
  strcpy(s2,"catfasf");
  strncpy1(s2,s1,2);
  printf("[mine]:%s \n", s2);
  strcpy(s2,"catfasf");
  
  printf("Testing  strcat(s2,s1):\n");
  printf("[standard]:%s \n", strcat(s2,s1) );
  strcpy(s2,"catfasf");
  strcat(s2,s1);
  printf("[mine]:%s \n", s2);
  strcpy(s2,"catfasf");

  printf("Testing strncat(s2,s1,2):\n");
  printf("[standard]:%s \n", strncat(s2,s1,2) );
  strcpy(s2,"catfasf");
  strncat(s2,s1,2);
  printf("[mine]:%s \n", s2);
  strcpy(s2,"catfasf");

  printf("Testing  strchr(s2,'a'):\n");
  printf("[standard]:%s \n", strchr(s2,'a') );
  strcpy(s2,"catfasf");
  printf("[mine]:%s \n",  strchr1(s2,'a'));
  strcpy(s2,"catfasf");

  printf("Testing strstr(s2,'at'):\n");
  printf("[standard]:%s \n", strstr(s2,"at") );
  strcpy(s2,"catfasf");
  printf("[mine]:%s \n",  strstr1(s2,"at"));
  strcpy(s2,"catfasf");

  printf("Testing strcmp(s1,s2):\n");
  printf("[standard]:%d \n", strcmp(s1,s2) );
  printf("[mine]:%d \n",  strcmp1(s1,s2));
  printf("Testing strcmp(a,c):\n");
  printf("[standard]:%d \n", strcmp("a","c") );
  printf("[mine]:%d \n",  strcmp1("a","c"));
  printf("Testing strcmp(a,a):\n");
  printf("[standard]:%d \n", strcmp("a","a") );
  printf("[mine]:%d \n",  strcmp1("a","a"));
  
  return 0;
  
}
