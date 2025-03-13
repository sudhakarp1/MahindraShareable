#include <string>
#include <map>
#include <iostream>
using namespace std;

class MediaPlayer {
public:
	static map<string, MediaPlayer*> mediaTable;
	virtual void play() const = 0;
	static MediaPlayer* getMedia(string type) { return mediaTable[type]; }
};


class AudioPlayer : public MediaPlayer {
public:
	virtual void play() const { cout << "AudioPlayer()" << endl; }
	struct Reg {
		Reg() {
			mediaTable["AP"] = new AudioPlayer();
		}
	};
	static Reg reg; //needs to be defined
};

class MP3Player : public AudioPlayer {
public:
	void play() const { cout << "MP3Player()" << endl; }
	struct Reg {
		Reg() {
			mediaTable["MP3"] = new MP3Player();
		}
	};
	static Reg reg; //needs to be defined
};




class VideoPlayer : public MediaPlayer {
public:
	virtual void play() const { cout << "VideoPlayer()" << endl; }
	class Reg {
	public:
		Reg() {
			mediaTable["VP"] = new VideoPlayer();
		}
	};
	static Reg reg; //needs to be defined
};
class MP4Player : public VideoPlayer {
public:
	void play() const { cout << "MP4Player()" << endl; }
	struct Reg {
		Reg() {
			cout << "MP4" << endl;
			mediaTable["MP4"] = new MP4Player();
		}
	};
	static Reg reg; //needs to be defined
};


map<string, MediaPlayer*> MediaPlayer::mediaTable;
AudioPlayer::Reg   AudioPlayer::reg;
VideoPlayer::Reg   VideoPlayer::reg;
MP3Player::Reg   MP3Player::reg;
MP4Player::Reg   MP4Player::reg;



class MKVPlayer: public VideoPlayer{
public:
	void play() const { cout << "MKVPlayer()" << endl; }
	struct Reg {
		Reg() {
			cout<<"MKV"<<endl;
			mediaTable["MKV"] = new MKVPlayer();
		}
	};
	static Reg reg; //needs to be defined
};
MKVPlayer::Reg MKVPlayer::reg;


int main() {
	string type = "AP"; //names could be read from a file
	MediaPlayer* p = MediaPlayer::getMedia(type); //get the shape from the Table
	p->play();

	type = "MKV";
	p = MediaPlayer::getMedia(type); //get the shape from the Table
	p->play();

	return 0;
}
