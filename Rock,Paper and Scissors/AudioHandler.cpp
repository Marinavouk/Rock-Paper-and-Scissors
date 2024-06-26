#include "AudioHandler.h"

Mix_Chunk* AudioHandler::CreateAudio(const std::string& fileName)
{
	return nullptr;
}

Mix_Music* AudioHandler::CreateMusic(const std::string& fileName)
{
	return nullptr;
}

void AudioHandler::DestroyAudio(Mix_Chunk* chunk)
{
}

void AudioHandler::DestroyMusic(Mix_Music* music)
{
}
