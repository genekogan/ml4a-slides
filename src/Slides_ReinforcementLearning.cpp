#include "ofApp.h"


void ofApp::ReinforcementLearning()
{
//    s = slideshow.addSlide("The Glass Bead Game (1943) - Herman Hesse");
//    s->addText(h3, ofColor(0), "A Game, for example, might start from a given astronomical configuration, or from the actual theme of a Bach fugue, or from a sentence out of Leibniz or the Upanishads, and from this theme, depending on the intentions and talents of the player, it could either further explore and elaborate the initial motif or else enrich its expressiveness by allusions to kindred concepts... It represented an elite, symbolic form of seeking for perfection, a sublime alchemy, an approach to that Mind which beyond all images and multiplicities is one within itself -- in other words, to God.", 0.1, 0.2, 0.75);

    s = slideshow.addSlide("The Glass Bead Game");
    s->addImage("glass bead game", "/Users/gene/bin/misc/glassbead.jpg", 0.0, 0.05, 0.36, 0.9);
    s->addText(h3, ofColor(0,0,20), "A Game, for example, might start from a given astronomical configuration, or from the actual theme of a Bach fugue, or from a sentence out of Leibniz or the Upanishads, and from this theme, depending on the intentions and talents of the player, it could either further explore and elaborate the initial motif or else enrich its expressiveness by allusions to kindred concepts... It represented an elite, symbolic form of seeking for perfection, a sublime alchemy, an approach to that Mind which beyond all images and multiplicities is one within itself -- in other words, to God.", 0.38, 0.2, 0.5);
    //    s->addNote("hesse is describing GBG, a game played by an devoted caste of intellectuals, sequestered from the rest of society at a monastery-like academy, centuries into the future in the highlands of central Europe in a province called Castalia (Switzerland). the game is described as this perfect synthesis of art, science, literature, and history. players take turns moving glass stones around the board by making deep connections among the many intellectual pursuits of mankind -- for example, finding an analogy between the notes of a mozart sonata to the constellations of the night sky, or contrasting the laws of quantum mechanics with Hegelian economics, and so on.");
    //    s->addNote("a curious thing about the book is that nowhere in its nearly 600 pages are the actual rules of the game precisely described. only made reference to in various allusions. it's as if hesse is hinting at something which can't be expressed, or fully described by rules... our creativity, the vast interconnectedness of our knowledge, even the very essence of human intelligence itself... something which can't be put into words.");
    s->addNote("game played by a devoted caste of intellectuals, sequestered from society in a monastery-like academy, centuries into the future, in a province of Europe called Castalia (Switzerland).");
    s->addNote("a perfect synthesis of art, humanities, science, literature, and history");
    s->addNote("players take turns moving glass stones around a board, making analogies between various intellectual disciplines of mankind");
    s->addNote("notes of a mozart sonata to the constellations of the night sky");
    s->addNote("contrasting quantum mechanics with hegelian economics");
    s->addNote("600 pages, rules never described, except by passing reference or allusions");
    s->addNote("can't be expressed, or fully described by rules, put into words");
    s->addNote("our creativity, the interconnectedness of our knowledge, essence of human intelligence itself");

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
    
//    s = slideshow.addSlide("Why is Go hard??");
//    s->addText(h2, ofColor(0), "tic-tac-toe boards: 765", 0.2, 0.1, 0.8);
//    s->addText(h2, ofColor(0), "planck times since big bang: 10^62", 0.2, 0.17, 0.8);
//    s->addText(h2, ofColor(0), "atoms in universe: 10^80", 0.2, 0.24, 0.8);
//    s->addText(h2, ofColor(0), "chess boards: 10^120", 0.2, 0.31, 0.8);
//    s->addText(h2, ofColor(0), "go boards: 10^170", 0.2, 0.38, 0.8);
//    s->addImage("gostates", "/Users/gene/bin/misc/stock/alphagogamestates.jpg", 0.4, 0.47, 0.6, 0.5);

    s = slideshow.addSlide("\"I felt the board\"");
    s->addImage("go", "/Users/gene/bin/misc/stock/Go.jpg", 0, 0, 1, 1);
    s->addRect(ofColor(255,160), 0.005, 0.04, 0.45, 0.26);
    s->addText(h3, ofColor(0), "tic-tac-toe boards: 765", 0.01, 0.05, 0.6);
    s->addText(h3, ofColor(0), "planck times since big bang: 10^62", 0.01, 0.1, 0.6);
    s->addText(h3, ofColor(0), "atoms in universe: 10^80", 0.01, 0.15, 0.6);
    s->addText(h3, ofColor(0), "chess boards: 10^120", 0.01, 0.2, 0.6);
    s->addText(h3, ofColor(0), "go boards: 10^170", 0.01, 0.25, 0.6);
    s->addNote("common to hear this terminology. describe reasons for moves ambiguously, \"i felt the board\", like it came from some deep intuition built up from years of experience");
    s->addNote("fascinated with me because no one described chess this way: \"i felt the rook\"");
    s->addNote("chess is analytical. in libraries, volumes are devoted just to listing common opening sequences");
    s->addNote("players talk of mentally playing out many possible game sequences");
    s->addNote("doesn't scale for go, because of the math.");
    s->addNote("you know chess positions vs atoms in universe, but go moves are 50 OOM more vast. incredible");
    s->addNote("impossible for a human to evaluate even tiny fraction");
    s->addNote("go players rely on something more mysterious, abstract, intuitive, experiential");
    s->addNote("indeed, a beautiful and interesting game");

    
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
    
    /// RECENT
    
    s = slideshow.addSlide("Reinforcement learning with unsupervised auxiliary tasks");
    s->addImage("DeepMind maze", "/Users/gene/bin/misc/deepmind_maze.gif", 0.15, 0.1, 0.7, 0.7);
    s->addText(h3, ofColor(0), "https://deepmind.com/blog/reinforcement-learning-unsupervised-auxiliary-tasks/", 0.1, 0.05, 0.9);
    
    s = slideshow.addSlide("DeepMind + StarCraft");
    s->addMovie("starcraft", "/Users/gene/bin/misc/starcraft-deepmind.mp4", true, 0, 0, 1, 1);

    
    

    
    /*
    s = slideshow.addSlide("Lee Se-dol vs. AlphaGo");
    s->addImage("go", "/Users/gene/bin/misc/stock/alphago-vs-leesedol.jpg", 0, 0.3, 0.8, 0.7);
    s->addImage("go", "/Users/gene/bin/misc/stock/leesedol.jpg", 0.5, 0.0, 0.5, 0.5);
    s->addText(h2, ofColor(0), "\"I will do my best to play a beautiful and interesting game\"", 0.05, 0.06, 0.44);
    s->addNote("reminded during the AlphaGo/Lee Sedol match");
    s->addNote("DeepMind created AI which beat top Go player");
    s->addNote("landmark moment in AI for reasons i will return to");
    s->addNote("2-player strategy board game, played with stone pieces rather than glass ones");
    s->addNote("described by its players in abstract, almost poetic terms, its nature can't be put into words");
    s->addNote("first encountered this with Lee's quote, which resonated with me");
    
    
    s = slideshow.addSlide("Chess vs. Go");
    s->addImage("autoencoder", "/Users/gene/bin/misc/stock/kasparov.jpg", 0, 0.3, 0.48, 0.4);
    s->addImage("autoencoder", "/Users/gene/bin/misc/stock/chess-fritz-analysis.jpg", 0.52, 0.0, 0.48, 1.0);
    s->addText(h3, ofColor(0), "1996-97: DeepBlue vs Gary Kasparov", 0.01, 0.2, 0.5);
    s->addNote("this is why Go is harder for computers than chess");
    s->addNote("DeepBlue beat Kasparov 20 years ago");
    s->addNote("expert function created by team of grandmasters, knowledge of rules specifically encoded, special positions. very complex, heuristics");
    s->addNote("that and brute force computation");
    s->addNote("too many Go states, so a different algorithm was developed");
    s->addNote("differences between DeepBlue and AlphaGo are similar to between human chess and go players");
 */
}