#include<iostream>
#include<cstring>
using namespace std;

class Code{
	protected:
		string title;
		float rating;
		public:
			Code(string s,float r){
				title=s;
				rating=r;
			}
			virtual void display()=0;
};

class Video : public Code{
	float videoLength;
	public:
		Video(string s,float r,float value) : Code(s,r){
			videoLength=value;
		}
		void display(){
			cout<<"This is an Help ful video with title "<<title<<endl;
			cout<<"Video Rating : "<<rating<<" Out of 5 stars "<<endl;
			cout<<"Video Length : "<<videoLength<<" minutes "<<endl;
		}
};

class Text : public Code{
	int textLength;
	public:
		Text(string s,float r,int count) : Code(s,r){
			textLength=count;
		}
		void display(){
			cout<<"This is an Help ful text with title "<<title<<endl;
			cout<<" Rating  of this text : "<<rating<<" Out of 5 stars "<<endl;
			cout<<"Length of text is : "<<textLength<<" words "<<endl;
		}
};

int main()
{
	string title;
	float rating,videoLength;
	int word;
	
	title="Code With Rohit";
	videoLength=5.64;
	rating=4.5;
	Video video(title,rating,videoLength);
//	video.display();
	
	title="Code With Rohit Welcome";
	word=564;
	rating=4.5;
	Text text(title,rating,word);
//	text.display();
	
	Code *code[2];
	code[0]=&video;
	code[1]=&text;
	
	code[0]->display();
	code[1]->display();
	
	return 0;
}

