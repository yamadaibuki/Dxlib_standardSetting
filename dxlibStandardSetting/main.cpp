#include"DxLib.h"
#include"setting.h" 
#include"routine.h"

int WINAPI WinMain(winmainSetting)
{
    //��ʐݒ�
    ScreenSetting();

    //dxlib��������
    if (DxLib_Init() == -1)
    {
        return -1;
    }

    //���[�`�����C���X�^���X�����ăQ�[���J�n���ďI�������f���[�g
    std::shared_ptr<Routine>routine = std::make_shared<Routine>();
    routine->game();
    routine = nullptr;

    DxLib_End();
    return 0;
}