#include<stdio.h>
int main()
{
    float n1,n2,n3,n4,a;
    float ave,ave2;
    scanf("%f%f%f%f",&n1,&n2,&n3,&n4);


    ave=(n1*2+n2*3+n3*4+n4)/10;

    if(ave>=7.0)
        printf("Media: %.1f\nAluno aprovado.\n",ave);
    else if(ave>=5.0||ave<=6.9)
        printf("Media: %.1f\nAluno reprovado.\n",ave);
    else if(ave<5.0)
        {

        printf("Media: %.1f\nAluno em exame.\n",ave);

        scanf("%f",&a);
        printf("Nota do exame: %.1f\n",a);
        ave2=(ave+a)/2;
        if(ave2>=5.0)
            printf("Aluno aprovado.\nMedia final: %.1f\n",ave2);
        else if(ave2<=4.9)
            printf("Aluno reprovado.\nMedia final: %.1f\n",ave2);

        }


        return 0;
}
