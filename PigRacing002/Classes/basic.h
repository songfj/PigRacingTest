/**
* Date:2014-3-6 22:52:32
* Author:Ѧ��
* Instruction:���ó��������
**/

123123123123



#ifndef __PIGRACING_BASIC_H__
#define __PIGRACING_BASIC_H__

#define PTM_RATIO	32.0
#define PI			3.1415926

enum EStringValues
{
	//�ļ�·��
	MAP_FOLDER_PATH=0,
	PIG_FOLDER_PATH,
	DEFAULT_MAP_PATH,
	PIG_CONFIG_PATH,

	//��Ƭ��ͼ ͼ��
	TMX_LAYER_OBSTACLE,
	TMX_OBJECT_OBSTACLE,
	TMX_OBJECT_SIGN,

	//�����[Dynamotor]ͼƬ
	BTN_DYNAMOTOR_NORMAL,
	BTN_DYNAMOTOR_PRESSED,

	STRING_VALUES_COUNT
};


extern const char *g_StringValues[STRING_VALUES_COUNT];


#endif