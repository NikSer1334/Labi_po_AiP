#include "lr.h"
int lr1()

{
  printf("Laboratory work selected 1. ENTER THE VALUES OF THE VARIABLES\n");
  float L,t1,t2,Vc,v1,v0,vt;
  scanf("%f",&L) ;
  scanf("%f",&t1) ;
  scanf("%f",&t2) ;
    v1=L/t1;
    v0=L/t2;
    Vc=(v1+v0)/2;
    if (v1>v0) 
       { 
           vt=v1-Vc;
       }
    else
        {
        vt=v0-Vc;
        }

    printf("Vt=%f",vt);

    return 0;
  }

int lr1d()
{
  printf("Selected laboratory work 1/Additional task.\n");
    float L,t1,t2,Vc,v1,v0,vt;
  scanf("%f",&L) ;
  scanf("%f",&t1) ;
  scanf("%f",&t2) ;
if (t1 < 0 || t2 < 0) 
   {
        printf("Err!\n");
        return 1;
    }
    
    v1=L/t1;
    v0=L/t2;
    vt=(v1-v0)/2;
    if (v1>v0) 
       { 
           printf("Vt=%f",vt);

           return 0;

       }
    else
        {
        printf("Error- negative flow velocity\n");
        return 1;
        }
}



  #include <stdio.h>

  int lr2()

  {
    float s,a;
    int n,i,k;
    printf("Laboratory work 2 is selected. ENTER THE NUMBER N\n");
    scanf("%i",&n);
    s=0.;
    i=0;
    k=1;
    while (i<n)
        {
        a=(3.0+i)/(1+i*3.0);
        s=s+a*k;
        k=-k;
        i=i+1;

        }
    printf ("s=%f",s );
    return 0;
  }
int lr2d()
{
    printf("Selected laboratory work 2/Additional task.\n");
    float s,a;
    int n,i,k;
    scanf("%i",&n);
    s=0.;
    i=0;
    k=1;

    do {
        a=(3.0+i)/(1+i*3.0);
        s=s+a*k;
        k=-k;
        i=i+1;
    } while (i <= n);

    printf("The sum of the first %d numbers of the series: %f\n", n, s);
    return 0;
}



  #include <stdio.h>
  #define TRUE 1 
  #define FALSE 0
    
  int lr3() 
  
  {
    printf("Laboratory work is selected 3. ENTER THE LINE\n");
      int c;
      int flag;
      int cnt = 0;
      int letterFound = FALSE;

      while ((c = getchar()) != '&') 
      {
          if ((c == 'a' || c == 'e' || c == 'i' || c == 'o' 
          || c == 'u' || c == 'A' || c == 'E' || c == 'I' 
          || c == 'O' || c == 'U'))
              letterFound = TRUE;

          if((c == ' ' || c == '\n' || c == '\t') && letterFound == TRUE)   
          {
              cnt += 1;
              letterFound = FALSE;
          }
      }

      printf("%d", cnt);

      return 0;
  }
#define TRUE 1 
#define FALSE 0
  
int lr3d() 
{
    printf("Selected laboratory work 3/Additional task.\n");
    int c;
    int flag;
    int cnt = 0;
    int letterFound = FALSE;

    while ((c = getchar()) != '&') 
    {
        if ((c == 'A' || c == 'E' || c == 'I' 
        || c == 'O' || c == 'U'))
            letterFound = TRUE;

        if((c == ' ' || c == '\n' || c == '\t') && letterFound == TRUE)   
        {
            cnt += 1;
            letterFound = FALSE;
        }
    }

    printf("%d", cnt);

    return 0;
}


#define N 10

int lr5(void) 
{
  printf("Laboratory work 5 is selected. ENTER 10 NUMBERS IN ANY ORDER \n");
    int x[N];
    int temp;
    int i;

    for(i = 0; i < N; i++) 
   {
        scanf("%d", &x[i]);
    }

    for(i = 0; i < N/2; i++) 
   {
        temp = x[i];
        x[i] = x[N-1-i];
        x[N-1-i] = temp;
    }

    for(i = 0; i < N; i++) 
   {
        printf("%d ", x[i]);
    }
    printf("\n");

    return 0;
}


#define N 10

int lr5d(void) 
 {
  printf("Laboratory work 5 has been selected.An additional task. \n");
    int x[N];
    int temp;
    int i, j;

    for(i = 0; i < N; i++) 
    {
        scanf("%d", &x[i]);
    }

    for(i = 0, j = N - 1; i < j; i++, j--)
      {
        temp = x[i];
        x[i] = x[j];
        x[j] = temp;
    }

    for(i = 0; i < N; i++)
      {
        printf("%d ", x[i]);
    }
    printf("\n");

    return 0;
}
// лаба 6, дз 6
#define K 3
#define S 4

int lr6(void) {
    int x[K][S];
    int i, j;
     printf("Laboratory work is selected 6. Follow the commands on the screen\n");
    for (i = 0; i < K; i++) {
        printf("Enter the line elements %d:\n", i+1);
        for (j = 0; j < S; j++) {
            scanf("%d", &x[i][j]);
        }
    }


    for (i = 0; i < K; i++) {
        int isMirror = 1;
        for (j = 0; j < S / 2; j++) {
            if (x[i][j] != x[i][S - 1 - j]) {
                isMirror = 0;
                break;
            }
        }
        if (isMirror) {
            for (j = 0; j < S; j++) {
                x[i][j] = 0;
            }
        }
    }

  
    for (i = 0; i < K; i++) {
        printf("Строка %d:\n", i+1);
        for (j = 0; j < S; j++) {
            printf("%4d ", x[i][j]);
        }
        printf("\n");
    }

    return 0;
}



#define S 4

void comb_sort(int arr[][S], int size) {
    int gap = size;
    int swapped = 1;

    while (gap > 1 || swapped) {
        if (gap > 1) {
            gap = gap * 10 / 13;
            if (gap == 0) {
                gap = 1;
            }
        }

        swapped = 0;
        for (int i = 0; i < size - gap; i++) {
            for (int j = 0; j < N; j++) {
                if (arr[i][j] > arr[i + gap][j]) {
                    int temp = arr[i][j];
                    arr[i][j] = arr[i + gap][j];
                    arr[i + gap][j] = temp;
                    swapped = 1;
                }
            }
        }
    }
}

int lr6d(void)
{
    int x[S][S]; 
    int i, j;
     printf("Selected laboratory work 6/Additional task \n");
    // ввод массива
    for (i = 0; i < S; i++) {
        printf("Enter the line elements %d:\n", i+1);
        for (j = 0; j < S; j++) {
            scanf("%d", &x[i][j]);
        }
    }

   
    for (i = 0; i < S; i++) {
        int isMirror = 1;
        for (j = 0; j < S / 2; j++) {
            if (x[i][j] != x[i][S - 1 - j]) {
                isMirror = 0;
                break;
            }
        }
        if (isMirror) {
            for (j = 0; j < S; j++) {
                x[i][j] = 0;
            }
        }
    }

   
    for (i = 0; i < S; i++) {
        comb_sort(x, i);
    }


    for (i = 0; i < S ; i++) {
        printf("Строка %d:\n", i+1);
        for (j = 0; j < S; j++) {
            printf("%4d ", x[i][j]);
        }
        printf("\n");
    }

    return 0;
}



int lr7(void)
{
    printf("Selected laboratory work 7.\n");
    long z; 
    printf("z = ");
    scanf("%ld", &z); 

    long y = 0; 

    while(z)
    {
        y = (y << 1) | (z & 1); 
        z >>= 1; 
    }

    printf("result: %ld\n", y); 

    return 0;
}

//лаба 4, дз 4

#define YES 1
#define NO 0
#define MAXLINE 1000

void process_line4(char buffer[], int n);
int lr4(void)
{ 
    printf("Laboratory work 4 has been selected. Enter a line. After that, enter the number of letters after which you will need to delete all the words\n");
    char line[MAXLINE];
    int n;
    fgets(line, MAXLINE, stdin);
    scanf("%d", &n);
    process_line4(line, n);
    for (int i = 0; line[i] != '\0'; i++) {
        putchar(line[i]);
    }
    return 0;
}

void process_line4(char buffer[], int n) 
{
    int len = 0;
    int pos = 0;
    int word_start = -1;
    int word_length = 0;

    while (buffer[len] != '\0') {
        len++;
    }

    for (int i = 0; i < len; i++) {
        char c = buffer[i];

        if (c == ' ' || c == '.' || c == ',' || c == '\n' || c == '\0') {
            if (word_start != -1 && word_length > n) {
                word_start = -1;
                word_length = 0;
                continue;
            }

            if (word_start != -1) {
                for (int j = word_start; j < i; j++) {
                    buffer[pos++] = buffer[j];
                }
                word_start = -1;
                word_length = 0;
            }

            buffer[pos++] = c;
        } else {
            if (word_start == -1) {
                word_start = i;
            }

            word_length++;
        }
    }

    buffer[pos] = '\0';
}

#define YES 1
#define NO 0
#define MAXLINE 1000

void process_line14(char buffer[], int n);

int lr4d(void) {
    char line[MAXLINE];
    int n;

    fgets(line, MAXLINE, stdin);
    scanf("%d", &n);

    process_line14(line, n);

    puts(line);
    return 0;
}

void process_line14(char buffer[], int n) {
    printf("Selected laboratory work 4/Additional task \n");
    int len = 0;
    int pos = 0;
    int word_start = -1;
    int word_length = 0;
    int has_l = NO;

    while (buffer[len] != '\0') {
        len++;
    }

    for (int i = 0; i < len; i++) {
        char c = buffer[i];
        if (c == ' ' || c == '.' || c == ',' || c == '\n' || c == '\0') {
            if (word_start != -1 && word_length > n && has_l == NO) {
                word_start = -1;
                word_length = 0;
                has_l = NO;
                continue;
            }

            if (word_start != -1) {
                for (int j = word_start; j < i; j++) {
                    buffer[pos++] = buffer[j];
                }
                word_start = -1;
                word_length = 0;
                has_l = NO;
            }

            buffer[pos++] = c;
        } else {
            if (word_start == -1) {
                word_start = i;
            }

            word_length++;

            if (c == 'l') {
                has_l = YES;
            }
        }
    }

    buffer[pos] = '\0';
}
