//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSString, UIImageView, UILabel;

@interface keyBoardViewTo2 : UIView
{
    NSMutableArray *button_Array;
    id delegate;
    int m_iWidth;
    int m_iHeight;
    NSString *m_sKey;
    _Bool m_bFirstTime;
    int m_iOriginalWidth;
    int m_iOriginalHeight;
    int m_iOriginalXDis1;
    int m_iOriginalXDis2;
    int m_iOriginalXDis3;
    int m_iOriginalYDis;
    int m_iOriginalFunctionPicWidth;
    int m_iOriginalFunctionPicHeight;
    int m_iOriginalShiftPicWidth;
    int m_iOriginalShiftPicHeight;
    int m_iOriginalSetPicWidth;
    int m_iOriginalSetPicHeight;
    int m_iYDis;
    int m_iOneKeyHeight;
    int m_iXSpaceDis;
    int m_iYSpaceDis;
    int m_iOneLineKeyCount;
    int m_iMode;
    UIImageView *m_oNumberPic;
    UIImageView *m_oCharactorPic;
    UIImageView *m_oSignPic;
    UIImageView *m_oShiftPic;
    UIImageView *m_oSetKey;
    UIImageView *m_oExitKey;
    NSMutableArray *m_oaSigns;
    _Bool m_baOrdereds[3];
    NSString *m_sRule;
    NSMutableArray *m_oaSource;
    NSMutableArray *m_oaKey;
    int m_iCurrentPos;
    int m_iMaxLen;
    int m_iSetPicMiddleX;
    UIImageView *m_oSetLayout;
    _Bool m_bIsSettingShow;
    UILabel *m_oSetStatLabel;
    _Bool m_bSettingAnim;
    UILabel *m_oIndicateLabel;
    UIImageView *m_oIndicateBackView;
}

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)getInRectImage:(id)arg1:(struct CGSize)arg2;
- (id)getTypeCode:(id)arg1;
- (id)getChangeMappingCode:(id)arg1:(int)arg2:(int)arg3;
- (id)getChangePosCode:(int)arg1:(int)arg2:(int)arg3;
- (id)getMapping:(int)arg1:(id)arg2;
- (id)divideRules:(id)arg1:(int *)arg2:(int *)arg3:(int *)arg4;
- (_Bool)getRuleByPos:(int)arg1:(int *)arg2:(int *)arg3;
- (void)initSignButtons:(int)arg1;
- (void)initFunctionButtons:(int)arg1;
- (void)initCharactorButtons:(int)arg1;
- (void)initNumberButtons:(int)arg1;
- (void)setSafeDelegate:(id)arg1;
- (void)buttonClicked:(id)arg1;
- (void)setMaxLen:(int)arg1;
- (void)setAnimStat:(_Bool)arg1;
- (void)buttonUp:(id)arg1;
- (void)closeIndicate;
- (void)showInputMethod:(id)arg1;
- (void)showCharactor:(id)arg1;
- (void)showSign:(id)arg1;
- (void)showNumber:(id)arg1;
- (void)exitClicked:(id)arg1;
- (void)settingClicked:(id)arg1;
- (void)showSetting:(id)arg1;
- (_Bool)changeCharactors:(id)arg1;
- (_Bool)cleanButtons;
- (id)getAButton:(struct CGRect)arg1:(id)arg2:(id)arg3:(id)arg4;
- (int)getCodeLenByPos;
- (void)setMappingData:(id)arg1 withKey:(id)arg2;
- (void)setRuls:(id)arg1;
- (void)setShowStyle:(int)arg1;
- (void)setSignArray:(id)arg1;
- (void)setKey:(id)arg1;
- (void)initViews:(_Bool *)arg1;
- (void)initSwitch:(float)arg1:(float)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

