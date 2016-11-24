#pragma once
#include<iostream>


#include "MyForm.h"
#include<stdio.h>
#include<math.h>
#include "MyForm.h"
#include "c:\opencv\build\include\opencv\cv.h"
#include "c:\opencv\build\include\opencv\highgui.h"
#include"c:\opencv\build\include\opencv2\objdetect\objdetect.hpp"
#include "c:\opencv\build\include\opencv2\highgui\highgui.hpp"
#include "c:\opencv\build\include\opencv2\imgcodecs\imgcodecs.hpp"

#include<vector>


#include<opencv\cv.h>
#include<opencv\highgui.h>
#include<opencv2\objdetect\objdetect.hpp>
#include<opencv2\highgui\highgui.hpp>
#include<opencv2\imgproc\imgproc.hpp>
#include <time.h>
using namespace cv;
using namespace std;





namespace testtt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace std;

	int min=3;
	int blinkingnum=0;
	int start_or_stop=0;
	int camerastatenum;
	
	


	/// <summary>
	/// MyForm에 대한 요약입니다.
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: 생성자 코드를 여기에 추가합니다.
			//
		}

	protected:
		/// <summary>
		/// 사용 중인 모든 리소스를 정리합니다.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^  LblCount;
	private: System::Windows::Forms::NumericUpDown^  blinknum;

	private: System::Windows::Forms::Label^  LblTerm;
	private: System::Windows::Forms::GroupBox^  Time;
	private: System::Windows::Forms::RadioButton^  min7;


	private: System::Windows::Forms::RadioButton^  min5;

	private: System::Windows::Forms::RadioButton^  min3;

	private: System::Windows::Forms::Label^  LblStatus;
	private: System::Windows::Forms::Label^  label1;


	private: System::Windows::Forms::Button^  BtnStart;

	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  LblCameraState;




	private: System::ComponentModel::IContainer^  components;
	protected:

	protected:


	private:
		/// <summary>
		/// 필수 디자이너 변수입니다.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// 디자이너 지원에 필요한 메서드입니다.
		/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->LblCount = (gcnew System::Windows::Forms::Label());
			this->blinknum = (gcnew System::Windows::Forms::NumericUpDown());
			this->LblTerm = (gcnew System::Windows::Forms::Label());
			this->min3 = (gcnew System::Windows::Forms::RadioButton());
			this->Time = (gcnew System::Windows::Forms::GroupBox());
			this->min7 = (gcnew System::Windows::Forms::RadioButton());
			this->min5 = (gcnew System::Windows::Forms::RadioButton());
			this->LblStatus = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->BtnStart = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->LblCameraState = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->blinknum))->BeginInit();
			this->Time->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// LblCount
			// 
			this->LblCount->AccessibleName = L"";
			this->LblCount->AutoSize = true;
			this->LblCount->ForeColor = System::Drawing::Color::Black;
			this->LblCount->Location = System::Drawing::Point(19, 76);
			this->LblCount->Name = L"LblCount";
			this->LblCount->Size = System::Drawing::Size(57, 12);
			this->LblCount->TabIndex = 0;
			this->LblCount->Text = L"기준 횟수";
			this->LblCount->Click += gcnew System::EventHandler(this, &MyForm::LblCount_Click);
			// 
			// blinknum
			// 
			this->blinknum->AccessibleName = L"blinknum";
			this->blinknum->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->blinknum->Location = System::Drawing::Point(139, 74);
			this->blinknum->Name = L"blinknum";
			this->blinknum->Size = System::Drawing::Size(94, 21);
			this->blinknum->TabIndex = 1;
			this->blinknum->Tag = L"";
			this->blinknum->UseWaitCursor = true;
			this->blinknum->ValueChanged += gcnew System::EventHandler(this, &MyForm::blinknum_ValueChanged);
			// 
			// LblTerm
			// 
			this->LblTerm->AutoSize = true;
			this->LblTerm->Location = System::Drawing::Point(19, 122);
			this->LblTerm->Name = L"LblTerm";
			this->LblTerm->Size = System::Drawing::Size(57, 12);
			this->LblTerm->TabIndex = 2;
			this->LblTerm->Text = L"시간 간격";
			this->LblTerm->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// min3
			// 
			this->min3->AutoSize = true;
			this->min3->Checked = true;
			this->min3->Location = System::Drawing::Point(0, -2);
			this->min3->Name = L"min3";
			this->min3->Size = System::Drawing::Size(41, 16);
			this->min3->TabIndex = 3;
			this->min3->TabStop = true;
			this->min3->Text = L"3분";
			this->min3->UseVisualStyleBackColor = true;
			this->min3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::min3_CheckedChanged);
			// 
			// Time
			// 
			this->Time->Controls->Add(this->min7);
			this->Time->Controls->Add(this->min5);
			this->Time->Controls->Add(this->min3);
			this->Time->Location = System::Drawing::Point(155, 122);
			this->Time->Name = L"Time";
			this->Time->Size = System::Drawing::Size(94, 88);
			this->Time->TabIndex = 4;
			this->Time->TabStop = false;
			this->Time->Enter += gcnew System::EventHandler(this, &MyForm::Time_Enter);
			// 
			// min7
			// 
			this->min7->AutoSize = true;
			this->min7->Location = System::Drawing::Point(0, 42);
			this->min7->Name = L"min7";
			this->min7->Size = System::Drawing::Size(41, 16);
			this->min7->TabIndex = 5;
			this->min7->TabStop = true;
			this->min7->Text = L"7분";
			this->min7->UseVisualStyleBackColor = true;
			this->min7->CheckedChanged += gcnew System::EventHandler(this, &MyForm::min7_CheckedChanged);
			// 
			// min5
			// 
			this->min5->AutoSize = true;
			this->min5->Location = System::Drawing::Point(0, 20);
			this->min5->Name = L"min5";
			this->min5->Size = System::Drawing::Size(41, 16);
			this->min5->TabIndex = 4;
			this->min5->TabStop = true;
			this->min5->Text = L"5분";
			this->min5->UseVisualStyleBackColor = true;
			this->min5->CheckedChanged += gcnew System::EventHandler(this, &MyForm::min5_CheckedChanged);
			// 
			// LblStatus
			// 
			this->LblStatus->AutoSize = true;
			this->LblStatus->Font = (gcnew System::Drawing::Font(L"굴림", 12));
			this->LblStatus->Location = System::Drawing::Point(63, 218);
			this->LblStatus->Name = L"LblStatus";
			this->LblStatus->Size = System::Drawing::Size(40, 16);
			this->LblStatus->TabIndex = 5;
			this->LblStatus->Text = L"상태";
			this->LblStatus->Click += gcnew System::EventHandler(this, &MyForm::LblStatus_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(30, 222);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 12);
			this->label1->TabIndex = 6;
			// 
			// BtnStart
			// 
			this->BtnStart->AccessibleName = L"BtnStart";
			this->BtnStart->Font = (gcnew System::Drawing::Font(L"굴림", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->BtnStart->ForeColor = System::Drawing::Color::Red;
			this->BtnStart->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BtnStart.Image")));
			this->BtnStart->Location = System::Drawing::Point(21, 12);
			this->BtnStart->Name = L"BtnStart";
			this->BtnStart->Size = System::Drawing::Size(55, 52);
			this->BtnStart->TabIndex = 8;
			this->BtnStart->Text = L"START";
			this->BtnStart->UseVisualStyleBackColor = true;
			this->BtnStart->Click += gcnew System::EventHandler(this, &MyForm::BtnStart_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 198);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(45, 36);
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// LblCameraState
			// 
			this->LblCameraState->AutoSize = true;
			this->LblCameraState->Font = (gcnew System::Drawing::Font(L"굴림", 19));
			this->LblCameraState->ForeColor = System::Drawing::Color::Lime;
			this->LblCameraState->Location = System::Drawing::Point(116, 248);
			this->LblCameraState->Name = L"LblCameraState";
			this->LblCameraState->Size = System::Drawing::Size(133, 26);
			this->LblCameraState->TabIndex = 10;
			this->LblCameraState->Text = L"카메라 off";
			this->LblCameraState->Click += gcnew System::EventHandler(this, &MyForm::LblCameraState_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 295);
			this->Controls->Add(this->LblCameraState);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->BtnStart);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->LblStatus);
			this->Controls->Add(this->LblTerm);
			this->Controls->Add(this->LblCount);
			this->Controls->Add(this->blinknum);
			this->Controls->Add(this->Time);
			this->ForeColor = System::Drawing::SystemColors::WindowText;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->blinknum))->EndInit();
			this->Time->ResumeLayout(false);
			this->Time->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
	private: System::Void notifyIcon1_MouseDoubleClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		//  시간간격
	}
	private: System::Void TableLayout_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		//윈도 창
	}
	private: System::Void BtnStart_Click(System::Object^  sender, System::EventArgs^  e) {
		
		start_or_stop += 1;
		if (start_or_stop == 1)
		{
			BtnStart->Text = L"STOP";
			LblCameraState->Text = L"카메라 on";
		}
		else if (start_or_stop == 2)
		{
			BtnStart->Text = L"START";
			start_or_stop -= 2;
			LblCameraState->Text = L"카메라 off";

		}
		
		
		
		




		int jo = 1;
		int count = 0;
		
		CascadeClassifier face_cascade, face_cascade2, face_cascade3, face_cascade4, eye_cascade, eye_cascade2, eye_cascade3;
		if (!face_cascade.load("C:/opencv/build/etc/haarcascades/haarcascade_frontalface_alt2.xml")) {
			printf("Error loading cascade file for face");
			

		}

		if (!face_cascade2.load("C:/opencv/build/etc/haarcascades/haarcascade_frontalface_default.xml")) {
			printf("Error loading cascade file for face2");
			

		}

		if (!face_cascade3.load("C:/opencv/build/etc/haarcascades/haarcascade_frontalface_alt_tree.xml")) {
			printf("Error loading cascade file for face3");
			
		}

		if (!face_cascade4.load("C:/opencv/build/etc/haarcascades/haarcascade_frontalface_alt.xml")) {
			printf("Error loading cascade file for face4");
			

		}


		if (!eye_cascade.load("C:/opencv/build/etc/haarcascades/haarcascade_eye.xml")) {
			printf("Error loading cascade file for eye");
			

		}

		if (!eye_cascade2.load("C:/opencv/build/etc/haarcascades/haarcascade_lefteye_2splits.xml")) {
			printf("Error loading cascade file for eye");
			

		}

		if (!eye_cascade3.load("C:/opencv/build/etc/haarcascades/haarcascade_righteye_2splits.xml")) {
			printf("Error loading cascade file for eye");
		

		}


		VideoCapture capture(0); //-1, 0, 1 device id
		if (!capture.isOpened())
		{
			printf("error to initialize camera");
			
		}
		Mat cap_img, gray_img;
		vector<Rect> faces, eyes, seteyes;

		

		time_t timer;
		struct tm *t;

		timer = time(NULL);
		t = localtime(&timer);

		int firstsec = t->tm_sec;
		int firstmin = t->tm_min;
			
		
		int openeye = 0;
		while (1)
		{
			while (!(firstsec < t->tm_sec && firstmin +min < t->tm_min ))
			{

			int eye = 0;
			int eyeone = 0;
			

			capture >> cap_img;


			cvtColor(cap_img, gray_img, CV_BGR2GRAY);
			cv::equalizeHist(gray_img, gray_img);

			face_cascade.detectMultiScale(gray_img, faces, 1.1f, 4, CASCADE_FIND_BIGGEST_OBJECT | CASCADE_DO_ROUGH_SEARCH, cvSize(40, 40), cvSize(300, 300));
			if (!(faces.size() > 0))
			{
				face_cascade2.detectMultiScale(gray_img, faces, 1.1f, 4, CASCADE_FIND_BIGGEST_OBJECT | CASCADE_DO_ROUGH_SEARCH, cvSize(40, 40), cvSize(300, 300));
			}
			else if (!(faces.size() > 0))
			{
				face_cascade3.detectMultiScale(gray_img, faces, 1.1f, 4, CASCADE_FIND_BIGGEST_OBJECT | CASCADE_DO_ROUGH_SEARCH, cvSize(40, 40), cvSize(300, 300));
			}
			else if (!(faces.size() > 0))
			{
				face_cascade4.detectMultiScale(gray_img, faces, 1.1f, 4, CASCADE_FIND_BIGGEST_OBJECT | CASCADE_DO_ROUGH_SEARCH, cvSize(40, 40), cvSize(300, 300));
			}



			for (int i = 0; i < faces.size();i++)
			{
				cv::Point pt1(faces[i].x + faces[i].width, faces[i].y + faces[i].height);
				cv::Point pt2(faces[i].x, faces[i].y);
				faces[i].height *= 0.6;
				Mat faceROI = gray_img(faces[i]);

				eye_cascade.detectMultiScale(faceROI, eyes, 1.1, 2, 0 | CV_HAAR_SCALE_IMAGE, cv::Size(22, 22));
				if (eyes.size() > 0)
				{
					Mat eyeroi = gray_img(eyes[i]);
					eye = 1;
					eye_cascade.detectMultiScale(faceROI, seteyes, 1.1, 2, 0 | CV_HAAR_SCALE_IMAGE, cv::Size(22, 22));
					if (seteyes.size() > 0)
					{
						openeye = 1;
						jo = 1;

						

					}
				}

				for (size_t j = 0; j< eyes.size(); j++)
				{
					//Point center(faces[i].x+eyes[j].x+eyes[j].width*0.5, faces[i].y+eyes[j].y+eyes[j].height*0.5);
					cv::Point center((double)faces[i].x + (double)eyes[j].x + (double)eyes[j].width*0.5, (double)faces[i].y + (double)eyes[j].y + (double)eyes[j].height*0.5);
					int radius = cvRound((eyes[j].width + eyes[j].height)*0.25);


					circle(cap_img, center, radius, Scalar(255, 0, 0), 2, 8, 0);
				}
				rectangle(cap_img, pt1, pt2, cvScalar(0, 255, 0), 2, 8, 0);
			}
			
				if (eye + openeye == 0)
				{
					jo = 0;
				}
				if (eye * openeye == 1 && jo)
				{
			
					
					
					count++;
				}


		
			if(!(start_or_stop))
			{
				break;
			}



			imshow("protect your eyes", cap_img);
			waitKey(3);
			char c = waitKey(20);

			if (c == 27)
				break;

			timer = time(NULL);
			t = localtime(&timer);
			}
			

			break;
			



		}
			

		
		// 시작 버튼
	}
private: System::Void TxtStatus_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	
	
	
	// 카메라 상태 메세지
}
private: System::Void LblStatus_Click(System::Object^  sender, System::EventArgs^  e) {
	// 카메라 상태 표시줄
}
private: System::Void min3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	
	min = 3;
}
private: System::Void min5_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	min = 5;
}
private: System::Void min7_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	min = 7;
}
private: System::Void blinknum_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	
	// 기준 횟수
	blinkingnum = (int)blinknum->Value;
	
}

private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	//카메라 이미지
}
private: System::Void LblCount_Click(System::Object^  sender, System::EventArgs^  e) {
	//기준횟수 텍스트
	
}
private: System::Void Time_Enter(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void LblCameraState_Click(System::Object^  sender, System::EventArgs^  e) {
	
}
};
}