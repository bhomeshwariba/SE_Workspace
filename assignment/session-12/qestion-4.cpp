// 4) Build a structure called InstaProfile with fields: username (string),
//    followers (integer), and a nested structure Bio with fields: description
//    (string) and age(integer). Initialize an InstaProfile variable with your 
//    own details and display all fields.

#include <stdio.h>
struct InstaProfile
{
    char username[50];
    int followers;

    struct Bio
    {
        char description[100];
        int age;
    } bio;
};
main()
{
    struct InstaProfile p = {
        "Bhomeshwari",
        1200,
        {"Coding Learner", 21}
    };

    printf("Username: %s\n", p.username);
    printf("Followers: %d\n", p.followers);
    printf("Description: %s\n", p.bio.description);
    printf("Age: %d\n", p.bio.age);


}
