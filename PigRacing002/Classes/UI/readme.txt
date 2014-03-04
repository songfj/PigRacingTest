说明：以下规则都为初步设想，待修订

1.根据玩家进入游戏到退出游戏的各个场景，分类“*.cpp”和“*.h”文件。
	例如：欢迎场景[GameWelc.h]，菜单选择场景[GameMenu.h]，游戏开始场景[GameStart.h]，游戏结束场景[GameOver.h]等

2.【借鉴cocos2dx示例项目HelloWorldScene.cpp】每个场景文件代码规范：
	例如“GameStart.h”，遵循：a.可以定义多个类；b.代码执行过程只能创建一个CCScene，所有CCLayer都运行与该CCScene中；