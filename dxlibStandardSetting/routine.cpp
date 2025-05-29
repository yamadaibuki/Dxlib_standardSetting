#include"DxLib.h"
#include"routine.h"
#include"setting.h"
#include"sceneManager.h"

/// <summary>
/// �R���X�g���N�^
/// </summary>
Routine::Routine()
{
}

/// <summary>
/// �f�X�g���N�^�F�f���[�g�����B�g�p�������\�[�X�f�[�^��Y�ꂸ�ɏ�����
/// </summary>
Routine::~Routine()
{
}

/// <summary>
/// �Q�[��
/// </summary>
void Routine::game()
{
    //�C���X�^���X��
    std::shared_ptr<SceneManager>sceneManager = std::make_shared<SceneManager>();

    //�Q�[�����[�v�Ăяo��
    gameRoop(sceneManager);

    //�f���[�g
    sceneManager = nullptr;
}

/// <summary>
/// �Q�[�����[�v
/// </summary>
void Routine::gameRoop(shared_ptr<SceneManager> sceneManager)
{
    while (gameRoopSetting)
    {
        //��ʂɕ`���ꂽ��������(�Q�[�����[�v�̍ŏ��ɌĂ�)
        ClearDrawScreen();

        switch (sceneManager->GetsceneType_())
        {
        case TITLE:
            title();
            break;

        case PLAY:
            play();
            break;

        case RESULT:
            result();
            break;

        }

        // ����ʂ̓��e��\��ʂɔ��f(�Q�[�����[�v�̍Ō�ɌĂ�)
        ScreenFlip();
    }
}

void Routine::title()
{

}

void Routine::play()
{

}

void Routine::result()
{

}