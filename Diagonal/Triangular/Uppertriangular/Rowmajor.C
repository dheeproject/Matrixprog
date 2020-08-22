#include <stdio.h>
#include <stdlib.h>
struct matrix
{
    int n;
    int *A;
};
void set(struct matrix *m, int i, int j, int x)
{
    if(i>=j)
    {
        m->A[i*(i-1)/2+(j-1)]=x;
    }
}
int get(struct matrix m, int i,int j)
{
    if(i>=j)
        return m.A[i*(i-1)/2+j-1];
    else
        return 0;
}
void Display(struct matrix m)
{
    for(int i=1;i<=m.n;i++)
    {
        for(int j=1;j<=m.n;j++)
        {
            if(i>=j)
                printf("%d ",m.A[i*(i-1)/2+(j-1)]);
            else
                printf("0 ");
        }
        printf("\n");
    }
}

int main()
{
    struct matrix fi;
    int x1,size;
    printf("Enter the dimension");
    scanf("%d",&fi.n);
    fi.A=(int*)malloc(fi.n*sizeof(int));
    printf("Enter the elements in diagonal matrix\n");
    for(int i=1;i<=fi.n;i++)
    {
        for(int j=1;j<=fi.n;j++)          //input can be given as
        {                                 //  3
            scanf("%d",&x1);              //1 0 0
            if(i>=j)                      //2 3 0
            {                             //4 5 6
             set(&fi,i,j,x1);
            }
        }

    }
    Display(fi);
    printf("\n");
    printf("%d",get(fi,1,1));//You can give any index
    free(fi.A);
    return 0;
}
