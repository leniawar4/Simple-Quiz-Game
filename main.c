#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define cls system("clear")

int m_total_point = 0;
int m_answer;

void m_Hello_Screen()
{
    printf("\t Welcome to the game\n\n");
    printf("[>]\t Press 7 to start game\n");
    printf("[>]\t Press 0 to quit game\n");
}

void m_Count_Point(int m_value)
{
    m_total_point += m_value;
}

void m_Check_Answers (int m_value, int m_good_answer)
{
    if (m_value == m_good_answer)
    {
        printf("[:)]\t Correct Answer\n");
        int m_point = 5;
        printf("[>]\t You got %d points\n\n", m_point);
        m_Count_Point(m_point);
        sleep(1);
        cls;
    }
    else
    {
        printf("[:(]\t Wrong Answer\n");
        int m_point = 0;
        printf("[>]\t You got %d points\n\n", m_point);
        m_Count_Point(m_point);
        sleep(1);
        cls;
    }
}

void m_Question_1()
{
    printf("[1]\t Which one is the first search engine in internet?\n\n");
    printf("[>] 1) Google\n");
    printf("[>] 2) Archie\n");
    printf("[>] 3) Wais\n");
    printf("[>] 4) Altavista\n\n");

    printf("[>]\t Enter You Answer : ");
    scanf("%d", &m_answer);
    printf("\n\n");
    m_Check_Answers(m_answer, 2);
}

void m_Question_2()
{
    printf("[2]\t Which one is the first web browser in invented in 1990?\n\n");
    printf("[>] 1) Internet Explorer\n");
    printf("[>] 2) Mosaic\n");
    printf("[>] 3) Mozilla\n");
    printf("[>] 4) Nexus\n\n");

    printf("[>]\t Enter You Answer : ");
    scanf("%d", &m_answer);
    printf("\n\n");
    m_Check_Answers(m_answer, 4);
}

void m_Check_Value (int m_value)
{
    if (m_value == 7) 
    {
        printf("[>]\t The game has started !\n\n");
        cls;
        m_Question_1();
        m_Question_2();
    }
    else if (m_value == 0)
    {
        printf("[>]\t The game has ended !\n\n");
    }
    else 
    {
        printf("[>]\t Invalid Value please try again !\n\n");
    }
}

int main () 
{
    int m_num;
    m_Hello_Screen();
    printf("[<]\t Type num :\t");
    scanf("%d", &m_num);
    cls;
    m_Check_Value(m_num);
    cls;
    printf("[Success]\t Total Point = %d\n\n", m_total_point);
    return 0;
}