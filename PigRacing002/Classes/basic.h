#ifndef __PIGRACING_BASIC_H__
#define __PIGRACING_BASIC_H__

#define PTM_RATIO	32.0
#define PI			3.1415926

enum EStringValues
{
	//文件路径
	MAP_FOLDER_PATH=0,
	PIG_FOLDER_PATH,
	DEFAULT_MAP_PATH,
	PIG_CONFIG_PATH,

	//瓦片地图 图层
	TMX_LAYER_OBSTACLE,
	TMX_OBJECT_OBSTACLE,
	TMX_OBJECT_SIGN,

	//发电机[Dynamotor]图片
	BTN_DYNAMOTOR_NORMAL,
	BTN_DYNAMOTOR_PRESSED,

	STRING_VALUES_COUNT
};


extern const char *g_StringValues[STRING_VALUES_COUNT];


#endif