//�o�[�W�����̈قȂ�OpenCV�������Ƃ��A�����̃\�[�X�œ���I�ɃC���N���[�h�A�����N���邽�߂̃w�b�_

#pragma once

//���C�u�����̃p�X�i�C���N���[�h�A���C�u�����j�́A���j���[[�\��]��[�v���p�e�B �}�l�[�W��]��Debug��Release�̒��́AMicrosoft.Cpp.x64.user��Microsoft.Cpp.Win32.user���_�u���N���b�N�A
//�_�C�A���O���̏�̂ق��AVC++�f�B���N�g���A�ɂ��ꂼ��w�肷��B
//���ꃆ�[�U�ł���΁A��x�ݒ肷��΁A���ׂẴ\�����[�V�����ŗL���ƂȂ�B


#include <opencv2/opencv.hpp>
//#include <opencv2/gpu/gpu.hpp>


#ifdef _DEBUG
	//Debug���[�h�̏ꍇ
	#pragma comment(lib,"opencv_world310d.lib")
#else
	//Release���[�h�̏ꍇ
	#pragma comment(lib,"opencv_world310.lib")
#endif


//#define CV_VERSION_NUMBER CVAUX_STR(CV_MAJOR_VERSION) CVAUX_STR(CV_MINOR_VERSION) CVAUX_STR(CV_SUBMINOR_VERSION)
//
//#ifdef _DEBUG
//	//Debug���[�h�̏ꍇ
//	#pragma comment(lib,"opencv_core"CV_VERSION_NUMBER"d.lib")
//	#pragma comment(lib,"opencv_imgproc"CV_VERSION_NUMBER"d.lib")
//	#pragma comment(lib,"opencv_highgui"CV_VERSION_NUMBER"d.lib")
//	#pragma comment(lib,"opencv_gpu"CV_VERSION_NUMBER"d.lib")
//	#pragma comment(lib,"opencv_contrib"CV_VERSION_NUMBER"d.lib")
//	#pragma comment(lib,"opencv_objdetect"CV_VERSION_NUMBER"d.lib")
//#else
//	//Release���[�h�̏ꍇ
//	#pragma comment(lib,"opencv_core"CV_VERSION_NUMBER".lib")
//	#pragma comment(lib,"opencv_imgproc"CV_VERSION_NUMBER".lib")
//	#pragma comment(lib,"opencv_highgui"CV_VERSION_NUMBER".lib")
//	#pragma comment(lib,"opencv_gpu"CV_VERSION_NUMBER".lib")
//	#pragma comment(lib,"opencv_contrib"CV_VERSION_NUMBER".lib")
//	#pragma comment(lib,"opencv_objdetect"CV_VERSION_NUMBER".lib")
//#endif

