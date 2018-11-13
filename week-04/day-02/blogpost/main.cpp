/*BlogPost
- Create a `BlogPost` class that has
- an `authorName`
- a `title`
- a `text`
- a `publicationDate`
- Create a few blog post objects:
- "Lorem Ipsum" titled by John Doe posted at "2000.05.04."
- Lorem ipsum dolor sit amet.
- "Wait but why" titled by Tim Urban posted at "2010.10.10."
- A popular long-form, stick-figure-illustrated blog about almost everything.
- "One Engineer Is Trying to Get IBM to Reckon With Trump" titled by William Turton at "2017.03.28."
- Daniel Hanley, a cybersecurity engineer at IBM, doesn’t want to be the center of attention.
 When I asked to take his picture outside one of IBM’s New York City offices,
 he told me that he wasn’t really into the whole organizer profile thing.*/

#include <iostream>
#include "blogpost.h"

class Blogpost;
int main() {

    Blogpost blogpost("John Doe", "Lorem Ipsum", "Lorem ipsum dolor sit amet.","2000.05.04.");
    Blogpost blogpost1("Tim Urban", "Wait but why", "A popular long-form, stick-figure-illustrated blog about almost everything.","2010.10.10.");
    Blogpost blogpost2("William Turton", "One Engineer Is Trying to Get IBM to Reckon With Trump", "Daniel Hanley, a cybersecurity engineer at IBM, doesn’t want to be the center of attention. When I asked to take his picture outside one of IBM’s New York City offices, he told me that he wasn’t really into the whole organizer profile thing.", "2017.03.28.");

    std::cout <<blogpost.getAuthorName() << " " << blogpost.getTitle()<< " "<<blogpost.getText() <<" " << blogpost.getPublicationDate() << std::endl;
    std::cout <<blogpost1.getAuthorName() << " " << blogpost1.getTitle()<< " "<<blogpost1.getText() <<" " << blogpost1.getPublicationDate() << std::endl;
    std::cout <<blogpost2.getAuthorName() << " " << blogpost2.getTitle()<< " "<<blogpost2.getText() <<" " << blogpost2.getPublicationDate() << std::endl;

    return 0;
}