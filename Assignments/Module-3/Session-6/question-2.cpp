// 2) Build a class called InstaStory with a protected property storyViews. Create a
//    subclass called SponsoredStory that can access and display the storyViews value.

#include <iostream>
using namespace std;

class InstaStory {
protected:
    int storyViews;

public:
    InstaStory() {
        storyViews = 1500;
    }
};

class SponsoredStory : public InstaStory {
public:
    void displayViews() {
        cout<<"Story Views:"<<storyViews<<endl;
    }
};
main() {
    SponsoredStory story;

    story.displayViews();


}
