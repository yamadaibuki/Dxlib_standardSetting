#pragma once

//�V�[��
enum
{
	TITLE,
	PLAY,
	RESULT
};

class SceneManager
{
public:
	SceneManager();
	~SceneManager();

	void reset();	//���Z�b�g����

	int GetsceneType_()const { return sceneType_; }

private:

	int sceneType_;	//�V�[���^�C�v
};