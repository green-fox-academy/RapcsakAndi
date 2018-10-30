#include <iostream>
#include <string>


int main() {

    std::string url("https//www.reddit.com/r/nevertellmethebots");

    // Accidentally I got the wrong URL for a funny subreddit. It's probably "odds" and not "bots"
    // Also, the URL is missing a


    std::string Url = "https//www.reddit.com/r/nevertellmethebots";
    std::string Old = "bots";
    std::string New = "odds";
    Url.replace(Url.find(Old),Old.size(),New);

    int x = Url.find("//");

    Url.insert(x, ":");

    std::cout << Url << std::endl;


    return 0;
}