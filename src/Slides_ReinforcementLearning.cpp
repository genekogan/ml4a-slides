#include "ofApp.h"


void ofApp::ReinforcementLearning()
{
    s = slideshow.addSlide("The Glass Bead Game (1943) - Herman Hesse");
    s->addText(h3, ofColor(0), "A Game, for example, might start from a given astronomical configuration, or from the actual theme of a Bach fugue, or from a sentence out of Leibniz or the Upanishads, and from this theme, depending on the intentions and talents of the player, it could either further explore and elaborate the initial motif or else enrich its expressiveness by allusions to kindred concepts... It represented an elite, symbolic form of seeking for perfection, a sublime alchemy, an approach to that Mind which beyond all images and multiplicities is one within itself -- in other words, to God.", 0.1, 0.2, 0.75);
    
    s = slideshow.addSlide("Lee Se-dol");
    s->addText(h3, ofColor(0), "I will do my best to play a beautiful and interesting game.", 0.05, 0.4, 0.95);
    
    s = slideshow.addSlide("Reinforcement learning");
    s->addImage("autoencoder", "/Users/gene/bin/misc/stock/reinforcement-learning2.jpg", 0.1, 0.1, 0.8, 0.8);
    
    s = slideshow.addSlide("RL is the cherry on the cake");
    s->addImage("lecun RL", "/Users/gene/bin/misc/stock/yann_lecun_RL.png", 0, 0.05, 1, 0.95);
    s->addText(h4, ofColor(0), "https://www.facebook.com/yann.lecun/posts/10153426023477143", 0.1, 0.0, 0.9);
    
    s = slideshow.addSlide("Applications of reinforcement learning");
    s->addImage("dog", "/Users/gene/bin/misc/stock/ai_dog.jpg", 0.0, 0.0, 0.5, 0.4);
    s->addImage("robot", "/Users/gene/bin/misc/stock/robotics_rl.png", 0.0, 0.5, 0.5, 0.6);
    s->addText(h4, ofColor(0), "http://robotics.naist.jp/~akihiko-y/researches.php", 0.1, 0.0, 0.9);
    s->addText(h2, ofColor(0), "Robotics\nOperations management\nFinance\nGames", 0.52, 0.2, 0.5);

    
    // VIDEO GAMES
    s = slideshow.addSlide("Reinforcement learning + Atari games");
    s->addImage("autoencoder", "/Users/gene/bin/misc/stock/reinforcement_learning.png", 0, 0.05, 1, 0.95);
    s->addText(h4, ofColor(0), "http://www.iclr.cc/lib/exe/fetch.php?media=iclr2015:silver-iclr2015.pdf", 0.1, 0.0, 0.9);
    
    s = slideshow.addSlide("Learning to play Atari Games");
    s->addMovie("Seaquest", "/Users/gene/bin/misc/stock/Deep Q network learning to play Seaquest-5WXVJ1A0k6Q.mp4", true, 0, 0, 0.5, 0.5);
    s->addMovie("Pong", "/Users/gene/bin/misc/stock/Deep Q network learning to play Pong-60pwnLB0DqY.mp4", true, 0.5, 0.5, 0.5, 0.5);
    s->addMovie("Breakout", "/Users/gene/bin/misc/stock/Google DeepMind's Deep Q-learning playing Atari Breakout-V1eYniJ0Rnk.mp4", true, 0, 0.5, 0.5, 0.5);
    s->addMovie("Space Invaders", "/Users/gene/bin/misc/stock/Deep Q network playing Space Invaders-ZisFfiEdQ_E.mp4", true, 0.5, 0.0, 0.5, 0.5);
    
    s = slideshow.addSlide("Deep Q Learning + Pong");
    s->addMovie("MCTS", "/Users/gene/bin/misc/stock/Deep Q network learning to play Pong-60pwnLB0DqY.mp4", true, 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "https://www.youtube.com/watch?v=60pwnLB0DqY", 0.1, 0.0, 0.9);
    
    s = slideshow.addSlide("Deep Q Learning + Breakout");
    s->addMovie("MCTS", "/Users/gene/bin/misc/stock/Google DeepMind's Deep Q-learning playing Atari Breakout-V1eYniJ0Rnk.mp4", true, 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "https://www.youtube.com/watch?v=V1eYniJ0Rnk", 0.1, 0.0, 0.9);
    
    s = slideshow.addSlide("Deep Q Learning + Seaquest");
    s->addMovie("MCTS", "/Users/gene/bin/misc/stock/Deep Q network learning to play Seaquest-5WXVJ1A0k6Q.mp4", true, 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "https://www.youtube.com/watch?v=5WXVJ1A0k6Q", 0.1, 0.0, 0.9);
    
    s = slideshow.addSlide("Deep Q Learning + Space Invaders");
    s->addMovie("MCTS", "/Users/gene/bin/misc/stock/Deep Q network playing Space Invaders-ZisFfiEdQ_E.mp4", true, 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "https://www.youtube.com/watch?v=ZisFfiEdQ_E", 0.1, 0.0, 0.9);
    
    // HOW TO STRUCTURE IT
    s = slideshow.addSlide("Markov Decision Process");
    s->addImage("autoencoder", "/Users/gene/bin/misc/stock/markov_decision_process.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Challenges");
    s->addText(h2, ofColor(0), "dynamical system", 0.2, 0.1, 0.8);
    s->addText(h2, ofColor(0), "time matters", 0.2, 0.2, 0.8);
    s->addText(h2, ofColor(0), "delayed reward / credit assignment problem", 0.2, 0.3, 0.8);
    s->addText(h2, ofColor(0), "low quality information", 0.2, 0.4, 0.8);
    s->addText(h1, ofColor(200, 0, 0), "==> Deep Q-learning", 0.2, 0.55, 0.8);
    
    s = slideshow.addSlide("Convnets to the rescue");
    s->addImage("joystick + convnet", "/Users/gene/bin/misc/stock/joystick_convnet.png", 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "http://home.uchicago.edu/~arij/journalclub/papers/2015_Mnih_et_al.pdf", 0.1, 0.0, 0.9);
    
    s = slideshow.addSlide("t-SNE of Space Invader game states ");
    s->addImage("atari t-SNE", "/Users/gene/bin/misc/stock/atari-t-SNE.png", 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "http://home.uchicago.edu/~arij/journalclub/papers/2015_Mnih_et_al.pdf", 0.1, 0.0, 0.9);
    
    s = slideshow.addSlide("Super Mario craziness");
    s->addMovie("Mario", "/Users/gene/bin/misc/stock/Super mario impossível level expert-r4LbPv6nMzs.mp4", true, 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "https://www.youtube.com/watch?v=pQS7HkfVgOU", 0.1, 0.0, 0.9);
    //https://www.youtube.com/watch?v=auklT6q9WMs
    
    s = slideshow.addSlide("RL Robotics irl");
    s->addMovie("Mario", "/Users/gene/bin/misc/stock/swingbot-reinforcement-learning.mp4", true, 0, 0.05, 1, 0.9);
    s->addText(h4, ofColor(0), "https://www.youtube.com/watch?v=Lt-KLtkDlh8", 0.1, 0.0, 0.9);
    
    // tic tac toe
    s = slideshow.addSlide("Tic tac toe");
    s->addImage("tic tac toe", "/Users/gene/bin/misc/stock/tic-tac-toe.jpg", 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "http://www.devx.com/dotnet/Article/34912", 0.1, 0.0, 0.9);
    
    s = slideshow.addSlide("What about chess? too many nodes!");
    s->addImage("autoencoder", "/Users/gene/bin/misc/stock/chess-game-tree.jpg", 0, 0.04, 1, 0.96);
    s->addText(h4, ofColor(0), "https://www.flickr.com/photos/quadralectics/4391267493", 0.01, 0.0, 0.8);
    
    s = slideshow.addSlide("Deep Blue vs. Gary Kasparov (1996-97)");
    s->addImage("autoencoder", "/Users/gene/bin/misc/stock/kasparov.jpg", 0, 0, 0.7, 0.5);
    s->addImage("autoencoder", "/Users/gene/bin/misc/stock/kasparov-facepalm.jpg", 0, 0.51, 0.7, 0.48);
    s->addImage("autoencoder", "/Users/gene/bin/misc/stock/deep-blue-rack.jpg", 0.7, 0, 0.3, 1);
    
    s = slideshow.addSlide("Chess game tree + score (1)");
    s->addImage("Chess game tree", "/Users/gene/bin/misc/stock/chess-tree2.png", 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "https://kevinbinz.com/2015/02/28/the-chess-supertree/", 0.1, 0.0, 0.9);
    
    s = slideshow.addSlide("Chess game tree + score (2)");
    s->addImage("autoencoder", "/Users/gene/bin/misc/stock/chess-tree.png", 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "http://neo4j.com/blog/graphgist-of-the-week-september-5-2014/", 0.1, 0.0, 0.9);
    
    s = slideshow.addSlide("Monte Carlo Tree Search");
    s->addImage("autoencoder", "/Users/gene/bin/misc/stock/mcts.png", 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "http://stackoverflow.com/questions/23803186/monte-carlo-tree-search-implementation-for-tic-tac-toe", 0.1, 0.0, 0.9);
    
    s = slideshow.addSlide("Exploration vs exploitation");
    s->addImage("multi armed bandit", "/Users/gene/bin/misc/stock/MultiArmedBandit.jpg", 0.1, 0.1, 0.8, 0.8);
    s->addText(h4, ofColor(0), "http://research.microsoft.com/en-us/projects/bandits/", 0.01, 0.0, 0.9);
    
    s = slideshow.addSlide("Expanding large search trees");
    s->addImage("autoencoder", "/Users/gene/bin/misc/stock/game-tree.png", 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "http://thenewstack.io/google-ai-beats-human-champion-complex-game-ever-invented/", 0.1, 0.0, 0.9);
    
    s = slideshow.addSlide("DeepBlue : evaluation function + MCTS");
    s->addImage("autoencoder", "/Users/gene/bin/misc/stock/chess-fritz-analysis.jpg", 0, 0, 0.5, 1);
    s->addMovie("MCTS", "/Users/gene/bin/misc/stock/MCTS.mp4", true, 0.5, 0.0, 0.5, 1);
    s->addText(h4, ofColor(0), "https://www.youtube.com/watch?v=pQS7HkfVgOU (Jérémie Decock)", 0.01, 0.0, 0.9);
    s->addText(h4, ofColor(0), "http://chess.stackexchange.com/questions/518/are-there-consumer-level-game-play-analysis-systems-that-overlay-the-analysis-on", 0.01, 0.98, 0.9);
    
    // GO!
    s = slideshow.addSlide("AlphaGo vs. Lee Se-dol");
    s->addImage("autoencoder", "/Users/gene/bin/misc/stock/alphago-vs-leesedol.jpg", 0, 0.3, 0.8, 0.7);
    s->addImage("autoencoder", "/Users/gene/bin/misc/stock/leesedol.jpg", 0.5, 0.0, 0.5, 0.5);
    
    s = slideshow.addSlide("Go rules");
    s->addImage("autoencoder", "/Users/gene/bin/misc/stock/Go.jpg", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Why is Go hard??");
    s->addText(h2, ofColor(0), "tic-tac-toe boards: 765", 0.2, 0.1, 0.8);
    s->addText(h2, ofColor(0), "planck times since big bang: 10^62", 0.2, 0.17, 0.8);
    s->addText(h2, ofColor(0), "atoms in universe: 10^80", 0.2, 0.24, 0.8);
    s->addText(h2, ofColor(0), "chess boards: 10^120", 0.2, 0.31, 0.8);
    s->addText(h2, ofColor(0), "go boards: 10^170", 0.2, 0.38, 0.8);
    s->addImage("gostates", "/Users/gene/bin/misc/stock/alphagogamestates.jpg", 0.4, 0.47, 0.6, 0.5);
    
    s = slideshow.addSlide("Policy network + Value network");
    s->addImage("gostates", "/Users/gene/bin/misc/stock/alphago-policy-network.jpg", 0, 0.05, 1, 0.8);
    s->addText(h4, ofColor(0), "policy network alone predicts next move 57% of the time!!", 0.2, 0.88, 0.8);
    
    s = slideshow.addSlide("Policy network training");
    s->addImage("gostates", "/Users/gene/bin/misc/stock/alphago-policynet-convnet.png", 0, 0.05, 0.9, 0.9);
    s->addText(h4, ofColor(0), "http://www.slideshare.net/ckmarkohchang/alphago-in-depth (Mark Chang)", 0.2, 0.0, 0.8);
    s->addText(h4, ofColor(0), "generalized techniques, no expert knowledge (AGI?)", 0.2, 0.92, 0.8);
    
    s = slideshow.addSlide("Value network training through self-play");
    s->addImage("gostates", "/Users/gene/bin/misc/stock/alphago-training.png", 0.1, 0.1, 0.8, 0.8);
    s->addText(h4, ofColor(0), "http://www.slideshare.net/ckmarkohchang/alphago-in-depth (Mark Chang)", 0.2, 0.0, 0.8);
    
    // IT GETS HARDER
    s = slideshow.addSlide("It gets harder");
    s->addImage("doom", "/Users/gene/bin/misc/stock/doom.jpg", 0.1, 0.1, 0.8, 0.8);
    s->addText(h3, ofColor(0), "http://thenewstack.io/google-ai-beats-human-champion-complex-game-ever-invented/", 0.1, 0.0, 0.9);
}