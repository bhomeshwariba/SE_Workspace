// 2) Build two classes, InstagramUploader and YouTubeUploader, each with a method 
//    uploadContent(). Both should extend a base class SocialMediaUploader and override 
//    uploadContent() to print a message showing how uploading works differently for 
//    Instagram and YouTube.
#include <iostream>
using namespace std;

class SocialMediaUploader
{
public:
    virtual void uploadContent()
    {
        cout<<"Uploading content to social media..."<<endl;
    }
};

class InstagramUploader : public SocialMediaUploader
{
public:
    void uploadContent() override
    {
        cout<<"Instagram: Uploading photo or reel..."<<endl;
    }
};

class YouTubeUploader : public SocialMediaUploader
{
public:
    void uploadContent() override
    {
        cout<<"YouTube: Uploading video..."<<endl;
    }
};

main()
{
    InstagramUploader instagram;
    YouTubeUploader youtube;

    instagram.uploadContent();
    youtube.uploadContent();


}
