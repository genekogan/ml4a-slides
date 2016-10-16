#include "ofApp.h"


void ofApp::RNNs(){
    s = slideshow.addSlide("Recurrent Neural Networks");
    s->addText(h3, ofColor(0), "Feedforward neural net", 0.1, 0.0, 0.4);
    s->addText(h3, ofColor(0), "Recurrent neural net", 0.65, 0.0, 0.4);
    s->addImage("nn_simple", "/Users/gene/bin/misc/stock/rnn/nn_simple.png", 0.0, 0.1, 0.3333, 0.8);
    s->addImage("rnn_simple", "/Users/gene/bin/misc/stock/rnn/rnn_simple.png", 0.5, 0.1, 0.5, 0.8);
    
    // FEEDFORWARD VS RECURRENT
    s = slideshow.addSlide("Feedforward Neural Networks");
    s->addImage("nn_multilayer", "/Users/gene/bin/misc/stock/rnn/multilayer_feedforward.png", 0.0, 0.0, 0.65, 0.5);
    s->addImage("nn_lenet", "/Users/gene/bin/misc/stock/lenet.png", 0.0, 0.5, 0.65, 0.5);
    s->addImage("nn_simple", "/Users/gene/bin/misc/stock/rnn/nn_simple.png", 0.66, 0.0, 0.34, 0.7);
    s->addText(h3, ofColor(0), "Training optimizes prediction/association\nFixed inputs & outputs\nInternally static\nActivations can be useful", 0.7, 0.7, 0.3);
    
    s = slideshow.addSlide("Recurrent Neural Networks");
    s->addText(h3, ofColor(0), "Feedforward neural net", 0.1, 0.0, 0.4);
    s->addText(h3, ofColor(0), "Recurrent neural net", 0.65, 0.0, 0.4);
    s->addImage("nn_simple", "/Users/gene/bin/misc/stock/rnn/nn_simple.png", 0.0, 0.1, 0.3333, 0.8);
    s->addImage("rnn_complex", "/Users/gene/bin/misc/stock/rnn/rnn_complex.png", 0.5, 0.1, 0.5, 0.8);
    s->addBreakpoint();
    s->addImage("rnn_simple", "/Users/gene/bin/misc/stock/rnn/rnn_simple.png", 0.5, 0.1, 0.5, 0.8);
    
    s = slideshow.addSlide("RNN sequence");
    s->addText(h3, ofColor(0), "Property: not commutative,\nso we can train it on sequenced {x,y}", 0.7, 0.2, 0.3);
    s->addImage("rnn_1", "/Users/gene/bin/misc/stock/rnn/rnn_stacked_1.png", 0.05, 0.1, 0.6, 0.8);
    s->addBreakpoint();
    s->addImage("rnn_2", "/Users/gene/bin/misc/stock/rnn/rnn_stacked_2.png", 0.05, 0.1, 0.6, 0.8);
    s->addBreakpoint();
    s->addImage("rnn_3", "/Users/gene/bin/misc/stock/rnn/rnn_stacked_3.png", 0.05, 0.1, 0.6, 0.8);
    s->addBreakpoint();
    s->addImage("rnn_4", "/Users/gene/bin/misc/stock/rnn/rnn_stacked_4.png", 0.05, 0.1, 0.6, 0.8);
    
    s = slideshow.addSlide("RNN trained on hello world");
    for (int i=0; i<10; i++){
        s->addImage("helloworld_"+ofToString(i), "/Users/gene/bin/misc/stock/rnn/rnn_text_hw_"+ofToString(i)+".png", 0, 0, 1, 1);
        s->addBreakpoint();
    }
    
    s = slideshow.addSlide("Sequences of text");
    s->addImage("helloworld", "/Users/gene/bin/misc/stock/rnn/rnn_stacked_helloworld.png", 0, 0.2, 1, 0.8);
    s->addText(h3, ofColor(0), "Training on 'hello world'", 0.1, 0.05, 0.9);
    s->addText(h3, ofColor(0), "Can sample text from the RNN!", 0.1, 0.15, 0.9);
    
    s = slideshow.addSlide("LSTM (Hochreiter and Schmidhuber)");
    s->addImage("LSTM", "/Users/gene/bin/misc/stock/rnn/LSTM.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Shakespeare LSTM (Andrej Karpathy)");
    s->addImage("math lstm", "/Users/gene/bin/misc/stock/rnn/lstm_shakespeare.png", 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "http://karpathy.github.io/2015/05/21/rnn-effectiveness/", 0.01, 0.01, 0.99);
    s = slideshow.addSlide("XML LSTM (Andrej Karpathy)");
    s->addImage("xml lstm", "/Users/gene/bin/misc/stock/rnn/lstm_xml.png", 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "http://karpathy.github.io/2015/05/21/rnn-effectiveness/", 0.01, 0.01, 0.99);
    s = slideshow.addSlide("Linux LSTM (Andrej Karpathy)");
    s->addImage("linux lstm", "/Users/gene/bin/misc/stock/rnn/lstm_linux.png", 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "http://karpathy.github.io/2015/05/21/rnn-effectiveness/", 0.01, 0.01, 0.99);
    
    s = slideshow.addSlide("LaTeX LSTM (Justin Johnson)");
    s->addImage("math lstm", "/Users/gene/bin/misc/stock/rnn/LaTeX-LSTM1.png", 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "http://karpathy.github.io/2015/05/21/rnn-effectiveness/", 0.01, 0.01, 0.99);
    s = slideshow.addSlide("LaTeX LSTM (Justin Johnson)");
    s->addImage("math lstm", "/Users/gene/bin/misc/stock/rnn/LaTeX-LSTM2.png", 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "http://karpathy.github.io/2015/05/21/rnn-effectiveness/", 0.01, 0.01, 0.99);
    
    s = slideshow.addSlide("Recipes (Tom Brewe)");
    s->addImage("recipes_lstm", "/Users/gene/bin/misc/stock/rnn/lstm_recipes.png", 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "https://gist.github.com/nylki/1efbaa36635956d35bcc", 0.01, 0.01, 0.99);
    
    s = slideshow.addSlide("Deep Drumpf");
    s->addImage("helloworld", "/Users/gene/bin/misc/stock/rnn/deepdrumpf.png", 0, 0, 1, 1);
    s = slideshow.addSlide("Deep Drumpf");
    s->addImage("helloworld", "/Users/gene/bin/misc/stock/rnn/deepdrumpf_t0.png", 0.2, 0.1, 0.6, 0.8);
    s = slideshow.addSlide("Deep Drumpf");
    s->addImage("helloworld", "/Users/gene/bin/misc/stock/rnn/deepdrumpf_t1.png", 0.2, 0.1, 0.6, 0.8);
    
    s = slideshow.addSlide("From:kogan.gene@gmail.com");
    s->addImage("gmail lstm", "/Users/gene/bin/text-learning/results/gmail.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("War and Peace (Tolstoy)");
    s->addImage("war and peace lstm", "/Users/gene/bin/text-learning/results/warandpeace.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Emojis (Kyle McDonald)");
    s->addImage("emojis", "/Users/gene/bin/text-learning/results/kcimc_emoji1.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Emojis (Kyle McDonald)");
    s->addImage("emojis", "/Users/gene/bin/text-learning/results/kcimc_emoji2.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Mario levels RNN (Adam Geitgey)");
    s->addMovie("Mario RNN", "/Users/gene/bin/misc/stock/rnn/mario_rnn.mp4", true, 0.1, 0.1, 0.8, 0.8);
    s->addText(h4, ofColor(0), "https://medium.com/@ageitgey/machine-learning-is-fun-part-2-a26a10b68df3#.g94ivdoej", 0.01, 0.03, 0.99);
    
    s = slideshow.addSlide("LSTM Sci-fi assistant (Robin Sloan)");
    s->addMovie("LSTM helper", "/Users/gene/bin/misc/stock/robinsloan-lstm-author.mp4", true, 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "https://twitter.com/robinsloan/status/725068953383362560", 0.01, 0.0, 0.99);
    
    s = slideshow.addSlide("RNN (sequence to sequence)");
    s->addImage("RNN seq2seq", "/Users/gene/bin/misc/stock/rnn/rnn_seq_seq.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Seq 2 seq (language translation)");
    s->addImage("RNN seq2seq", "/Users/gene/bin/misc/stock/rnn/yoda_seq2seq.jpg", 0, 0, 1, 0.5);
    s->addImage("RNN seq2seq", "/Users/gene/bin/misc/stock/rnn/grammar_tree.png", 0, 0.6, 1, 0.4);
    s->addText(h3, ofColor(0), "instead of...", 0.2, 0.5, 0.6);
    
    // UNIT TO SEQ
    s = slideshow.addSlide("RNN (unit to sequence)");
    s->addImage("RNN unit2seq", "/Users/gene/bin/misc/stock/rnn/rnn_unit_seq.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Image captioning (Li, Karpathy)");
    s->addImage("captioning", "/Users/gene/bin/misc/stock/rnn/captioning-architecture.png", 0.5, 0.0, 0.5, 0.5);
    s->addImage("captioning", "/Users/gene/bin/misc/stock/rnn/captioning-visual-semantic-alignment.png", 0, 0.5, 1, 0.5);
    s->addText(h3, ofColor(0), "+ localization for each predicted word", 0.01, 0.4, 0.5);
    s->addText(h4, ofColor(0), "http://cs.stanford.edu/people/karpathy/deepimagesent/", 0.01, 0.01, 0.99);
    
    s = slideshow.addSlide("Image captioning (Li, Karpathy)");
    s->addImage("captioning", "/Users/gene/bin/misc/stock/rnn/captioning-examples.png", 0, 0.06, 1, 0.94);
    s->addText(h4, ofColor(0), "http://cs.stanford.edu/people/karpathy/deepimagesent/", 0.01, 0.01, 0.99);
    
    s = slideshow.addSlide("NeuralTalk and Walk (Kyle McDonald)");
    s->addMovie("NeuralTalk and Walk", "/Users/gene/bin/misc/stock/rnn/NeuralTalk and Walk-HD.mp4", true, 0.0, 0.1, 1.0, 0.8);
    s->addText(h4, ofColor(0), "https://vimeo.com/146492001", 0.01, 0.01, 0.99);
    
    s = slideshow.addSlide("Visual Semantic Alignment (Li, Karpathy)");
    s->addImage("visual semantic alignment", "/Users/gene/bin/misc/stock/rnn/captioning-visual-semantic-align.png", 0, 0, 0.5, 1);
    s->addImage("visual semantic alignment", "/Users/gene/bin/misc/stock/rnn/captioning-architecture.png", 0.5, 0, 0.5, 0.5);
    s->addImage("visual semantic alignment", "/Users/gene/bin/misc/stock/rnn/captioning-visual-semantic-align-architecture.png", 0.5, 0.5, 0.5, 0.5);
    
    s = slideshow.addSlide("Dense captioning (Li, Karpathy, Johnson)");
    s->addImage("densecap", "/Users/gene/bin/misc/stock/rnn/densecap.png", 0, 0.06, 1, 0.94);
    s->addText(h4, ofColor(0), "http://cs.stanford.edu/people/karpathy/densecap/", 0.01, 0.01, 0.99);
    
    s = slideshow.addSlide("Dense captioning (Li, Karpathy, Johnson)");
    s->addImage("densecap", "/Users/gene/bin/misc/stock/rnn/densecap_architecture.png", 0, 0.06, 1, 0.94);
    s->addText(h4, ofColor(0), "http://cs.stanford.edu/people/karpathy/densecap/", 0.01, 0.01, 0.99);
    
    s = slideshow.addSlide("Semantic object parsing (http://arxiv.org/abs/1603.07063)");
    s->addImage("lstm", "/Users/gene/bin/misc/stock/rnn/semantic-object-parsing.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Handwriting LSTM (http://arxiv.org/abs/1308.0850)");
    s->addImage("lstm", "/Users/gene/bin/misc/stock/rnn/handwriting-lstm.png", 0, 0, 1, 1);
    
    // SEQUENCE TO UNIT
    s = slideshow.addSlide("RNN (sequence to unit)");
    s->addImage("RNN seq2unit", "/Users/gene/bin/misc/stock/rnn/rnn_seq_unit.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Generating images from captions (Mansimov et al)");
    s->addImage("attention", "/Users/gene/bin/misc/stock/rnn/caption_to_image.png", 0, 0, 1, 0.5);
    s->addImage("attention", "/Users/gene/bin/misc/stock/rnn/caption_to_image_architecture.png", 0, 0.5, 1, 0.5);
    s->addText(h4, ofColor(0), "http://arxiv.org/abs/1511.02793", 0.01, 0.0, 0.99);
    
    // vis attention
    s = slideshow.addSlide("Visual Attention (Ba, Mnih, Kavukcuoglu)");
    s->addImage("attention", "/Users/gene/bin/misc/stock/rnn/attention.png", 0, 0, 1, 0.21);
    s->addText(h4, ofColor(0), "http://arxiv.org/abs/1412.7755", 0.01, 0.9, 0.99);
    s->addMovie("Attention", "/Users/gene/bin/misc/stock/rnn/attention.mp4", true, 0.0, 0.22, 1.0, 0.78);
    
    s = slideshow.addSlide("DRAW (Gregor et al)");
    s->addText(h4, ofColor(0), "http://arxiv.org/abs/1502.04623", 0.01, 0.00, 0.99);
    s->addMovie("DRAW", "/Users/gene/bin/misc/stock/rnn/DRAW.mp4", true, 0.0, 0.1, 1.0, 0.8);
    
    s = slideshow.addSlide("RNN (sequence to sequence, synced)");
    s->addImage("RNN seq2seq synced", "/Users/gene/bin/misc/stock/rnn/rnn_seq_seq_sync.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("RNN draws fake Kanji");
    s->addImage("kanji", "/Users/gene/bin/misc/stock/hardmaru_kanji.png", 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "http://blog.otoro.net/2015/12/28/recurrent-net-dreams-up-fake-chinese-characters-in-vector-format-with-tensorflow/", 0.01, 0.9, 0.99);
}

