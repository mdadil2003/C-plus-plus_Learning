// 5. A social media app wants to count the number of hashtags (#) and mentions (@) in a post.

#include <iostream>

using namespace std;

void countHashtagsMentions(string post)
{
    int hashtags = 0;
    int mentions = 0;

    for (int i = 0; post[i] != '\0'; i++)
    {
        if (post[i] == '#')
            hashtags++;

        if (post[i] == '@')
            mentions++;
    }

    cout << "Hashtags: " << hashtags << endl;
    cout << "Mentions: " << mentions << endl;
}

int main()
{
    string post;

    cout << "Enter your post: ";
    getline(cin, post);

    countHashtagsMentions(post);

    return 0;
}

