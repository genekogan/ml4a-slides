#include "ofApp.h"



void ofApp::CriticalIssues() {

    s = slideshow.addSlide("Animals are machines (Descartes)");
    s->addText(h4, ofColor(0), "home.cogeco.ca/~drheault/ee_readings/West/Descartes.pdf", 0.01, 0.01, 0.9);
    s->addMovie("aspca", "/Users/gene/bin/misc/stock/Robot Lives Matter (ASPCA Commercial).mp4", true, 0.1, 0.2, 0.8, 0.7);
    
    s = slideshow.addSlide("Who's afraid of the singularity?");
    s->addText(h2, ofColor(0), "\"Will robots inherit the earth? Yes, but they will be our children.\" - Marvin Minsky", 0.1, 0.1, 0.7);
    s->addMovie("millenium fx baby", "/Users/gene/bin/misc/stock/animatronic_baby.mp4", true, 0.1, 0.25, 0.8, 0.7);
    
    s = slideshow.addSlide("Trolley problem (Philippa Foot)");
    s->addImage("trolley", "/Users/gene/bin/misc/stock/trolley.jpg", 0.2, 0.15, 0.6, 0.65);
    
    s = slideshow.addSlide("Trolley problem variatons (via Nick Hubbard)");
    s->addImage("trolley", "/Users/gene/bin/misc/stock/trolley_variant.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Manufacturing mood");
    s->addImage("fb", "/Users/gene/bin/misc/stock/fbthumb.jpg", 0.0, 0.1, 0.5, 0.5);
    s->addText(h3, ofColor(0), "May 2016: suppress conservative news in trending bars", 0.5, 0.2, 0.4);
    s->addText(h3, ofColor(0), "June 2016: secret mood study in 2012 with 700k users", 0.5, 0.3, 0.4);
    s->addText(h3, ofColor(0), "\"We are a tech company, not a media company\" - Mark Zuckerberg", 0.5, 0.4, 0.4);
    s->addText(h3, ofColor(0), "44% of US adults get their news on Facebook (Pew, 2016)", 0.5, 0.5, 0.4);
    
    s = slideshow.addSlide("Algorithmic censorship");
    s->addImage("napalm", "/Users/gene/bin/misc/stock/napalmgirl.jpg", 0.1, 0.1, 0.55, 0.7);
    s->addText(h3, ofColor(0), "Facebook censoring Phan Thị Kim Phúc", 0.15, 0.81, 0.75);
    s->addText(h4, ofColor(0), "https://www.theguardian.com/technology/2016/sep/08/facebook-mark-zuckerberg-napalm-girl-photo-vietnam-war", 0.1, 0.94, 0.8);
    
    s = slideshow.addSlide("Selective advertising");
    s->addText(h3, ofColor(0), "CMU study: women shown fewer high paying job ads on Google", 0.15, 0.21, 0.75);
    s->addText(h3, ofColor(0), "AdFisher - 17k fake profiles", 0.15, 0.31, 0.75);
    s->addText(h3, ofColor(0), "We don't know why -- trade secret", 0.15, 0.41, 0.75);
    s->addText(h3, ofColor(0), "\"How would a woman know to apply for a job she never saw advertised? How might a black community learn that it were being overpoliced by software?\" - Kate Crawford", 0.15, 0.51, 0.75);
    s->addText(h4, ofColor(0), "http://www.cmu.edu/news/stories/archives/2015/july/online-ads-research.html", 0.15, 0.95, 0.75);
    
    s = slideshow.addSlide("Terror Tuesdays");
    s->addImage("napalm", "/Users/gene/bin/misc/stock/obama.jpg", 0.0, 0.0, 0.5, 0.5);
    s->addImage("obama terror fun", "/Users/gene/bin/misc/obama-terror.png", 0.5, 0.0, 0.5, 0.5);
    s->addImage("obama terror fun", "/Users/gene/bin/misc/stock/nsa-skynet-slide.jpg", 0.5, 0.5, 0.5, 0.5);
    s->addText(h2, ofColor(0), "NSA Skynet", 0.12, 0.6, 0.82);
    s->addText(h3, ofColor(0), "\"We kill people based on metadata\" - Michael Hayden", 0.02, 0.7, 0.45);
    s->addText(h3, ofColor(0), "\"If you torture the data long enough, it will confess\" - Ronald Coase", 0.02, 0.8, 0.45);
    s->addText(h4, ofColor(0), "https://www.theguardian.com/commentisfree/2016/feb/21/death-from-above-nia-csa-skynet-algorithm-drones-pakistan", 0.05, 0.9, 0.82);
    
    s = slideshow.addSlide("\"Can't we just drone this guy?\"");
    s->addImage("napalm", "/Users/gene/bin/misc/stock/clinton-drones.jpg", 0.0, 0.0, 0.6, 1.0);
    s->addImage("napalm", "/Users/gene/bin/misc/stock/clinton-drone-assange.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Predictive policing");
    s->addImage("pred policing", "/Users/gene/bin/misc/propublica-recidivism.png", 0.0, 0.0, 1.0, 0.7);
    s->addText(h2, ofColor(0), "ProPublica vs. Northpointe re: recidivism", 0.12, 0.75, 0.82);
    s->addText(h3, ofColor(0), "Vicious cycle: more arrests (to meet quotas) make algorithms favor poor areas more", 0.12, 0.82, 0.82);
    s->addText(h4, ofColor(0), "https://www.propublica.org/article/machine-bias-risk-assessments-in-criminal-sentencing", 0.05, 0.9, 0.82);
    
    s = slideshow.addSlide("AP Hacking + Flash crash");
    s->addImage("flash crash", "/Users/gene/Pictures/Screenshots/flashcrash_tweet.png", 0.0, 0.0, 1.0, 0.5);
    s->addText(h3, ofColor(0), "S&P 500 temporarily lost $136B after the hack", 0.15, 0.6, 0.8);
    s->addText(h3, ofColor(0), "stock market algorithms are designed to undercut markets by anticipating and acting quickly to make risky transactions", 0.15, 0.7, 0.8);
    s->addText(h4, ofColor(0), "https://papers.ssrn.com/sol3/papers.cfm?abstract_id=2602857", 0.05, 0.9, 0.82);
    
    s = slideshow.addSlide("Alternatives");
    s->addText(h3, ofColor(0), "\"A social-systems approach could investigate, for instance, how the app AiCure — which tracks patients’ adherence to taking prescribed medication and transmits records to physicians — is changing the doctor–patient relationship. Such an approach could also explore whether the use of historical data to predict where crimes will happen is driving overpolicing of marginalized communities. Or it could investigate why high-rolling investors are given the right to understand the financial decisions made on their behalf by humans and algorithms, whereas low-income loan seekers are often left to wonder why their requests have been rejected.\" - Kate Crawford, Ryan Calo\n\nhttp://www.nature.com/news/there-is-a-blind-spot-in-ai-research-1.20805", 0.02, 0.05, 0.82);
    
    s = slideshow.addSlide("AI Effect");
    s->addText(h3, ofColor(0), "\"Practical AI successes, computational programs that actually achieved intelligent behavior, were soon assimilated into whatever application domain they were found to be useful in, and became silent partners alongside other problem-solving approaches, which left AI researchers to deal only with the \"failures,\" the tough nuts that couldn't yet be cracked.\" - Pamela McCorduck", 0.05, 0.1, 0.85);
    s->addText(h3, ofColor(0), "\"This paradox resulted from the fact that whenever an AI research project made a useful new discovery, that product usually quickly spun off to form a new scientific or commercial specialty with its own distinctive name. These changes in name led outsiders to ask, Why do we see so little progress in the central field of artificial intelligence?\" - Marvin Minsky", 0.05, 0.5, 0.85);

}