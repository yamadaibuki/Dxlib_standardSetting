#include"DxLib.h"
#include"setting.h"

//�X�N���[���ݒ�֐�
void ScreenSetting()
{
    ChangeWindowMode(TRUE);				   //�E�B���h�E���[�h�ɂ���
    SetWindowStyleMode(7);				   //�ő剻�{�^�������݂���E�C���h�E���[�h�ɕύX

    // �T�C�Y�ύX���\�ɂ���
    SetWindowSizeChangeEnableFlag(TRUE, FALSE);

    // �E�C���h�E�T�C�Y�̓Q�[����ʂƈ�v������
    SetWindowSize(screenWIDTH, screenHEIGHT);

    SetMainWindowText("gamename");              //�E�B���h�E�i�����Ƃ���j�ɃQ�[����������
    SetDrawScreen(DX_SCREEN_BACK);		        //�w�i���Z�b�g����
    SetGraphMode(screenWIDTH, screenHEIGHT, 32);//�E�B���h�E�̃T�C�Y�ƃJ���[���[�h�����߂�
}