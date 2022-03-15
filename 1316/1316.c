#include <stdio.h>

static int  is_group_word(char *word)
{
    int alpha_bits[26] = {0, };
    int idx = 0;
    int cur_alpha;

    while (word[idx])
    {
        cur_alpha = word[idx] - 'a';
        if (alpha_bits[cur_alpha] == 0)
        {
            alpha_bits[cur_alpha] = 1;
            while (word[idx] && word[idx] == cur_alpha + 'a')
                idx++;
        }
        else
            return (0);
    }
    return (1);
}

int main(void)
{
    int     word_cnt;
    char    word[100];
    int     group_word = 0;

    scanf("%d", &word_cnt);
    while (word_cnt-- > 0)
    {
        scanf("%s", word);
        if (is_group_word(word))
            group_word++;
    }
    printf("%d", group_word);
    return (0);
}