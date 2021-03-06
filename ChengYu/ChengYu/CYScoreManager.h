//
//  CYScoreManager.h
//  ChengYu
//
//  Created by ZYVincent on 13-6-17.
//  QQ群:219357847 个人QQ:1003081775
//  github:https://github.com/zyprosoft
//  Copyright (c) 2013年 ZYVincent. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CYScoreManager : NSObject
{
    int  currentPoints;//当前分数
    int  currentDoor;  //当前关卡
    int  currentDiff;  //当前难度
    
    int  currentMistakes; //当前错误数量
    
}

- (void)addPoints:(int)points;
- (void)increaseDoor;
- (void)decreaseDoor;
- (void)chooseDiff:(int)diff;
- (void)addMistakes:(int)mistakes;

- (int)cPoints;
- (int)cDorrs;
- (int)cDiff;
- (int)cMistakes;

@end
