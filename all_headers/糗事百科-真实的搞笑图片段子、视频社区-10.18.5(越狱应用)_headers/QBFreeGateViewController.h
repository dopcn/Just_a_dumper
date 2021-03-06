//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QBPeopleNearbyViewController.h"

#import "QBFreeGateDelegate-Protocol.h"

@class NSDictionary, NSString, NSTimer, QBFreeGateAnimationVC, UIButton;

@interface QBFreeGateViewController : QBPeopleNearbyViewController <QBFreeGateDelegate>
{
    _Bool _isReopen;
    UIButton *_rightBtn;
    QBFreeGateAnimationVC *_qbFreeGateAnimationVC;
    NSString *_positionPlistPath;
    NSDictionary *_randomCityNameAndPosition;
    NSTimer *_updateDoorPlateTimer;
}

@property(nonatomic) _Bool isReopen; // @synthesize isReopen=_isReopen;
@property(retain, nonatomic) NSTimer *updateDoorPlateTimer; // @synthesize updateDoorPlateTimer=_updateDoorPlateTimer;
@property(retain, nonatomic) NSDictionary *randomCityNameAndPosition; // @synthesize randomCityNameAndPosition=_randomCityNameAndPosition;
@property(retain, nonatomic) NSString *positionPlistPath; // @synthesize positionPlistPath=_positionPlistPath;
@property(retain, nonatomic) QBFreeGateAnimationVC *qbFreeGateAnimationVC; // @synthesize qbFreeGateAnimationVC=_qbFreeGateAnimationVC;
- (void)setRightBtn:(id)arg1;
- (void).cxx_destruct;
- (void)themeWillChanged;
- (void)listModel:(id)arg1 moreItemFetchFailed:(id)arg2;
- (void)listModel:(id)arg1 moreItemFetched:(id)arg2;
- (id)listModel:(id)arg1 handleListItems:(id)arg2 isNeedRemoveDuplicated:(_Bool)arg3;
- (void)refreshRandomPosition;
- (void)onClickLeftButton;
- (void)setupNavButtons;
- (void)getNearbyUserListWithHaunt:(id)arg1 longitude:(double)arg2 latitude:(double)arg3 wlng:(double)arg4 wlat:(double)arg5;
- (void)showCannotLoactionView;
- (void)locationUtilOnLocationResult:(id)arg1;
- (void)startLoadQBNearByLocation;
- (id)getViewSnap:(id)arg1 frame:(struct CGRect)arg2;
- (void)closeUserCenterAnimationStart;
- (void)openUserCenterAnimationFinished;
- (void)requestFreePositionFailured;
- (void)openDoorAfter3SecondsDelay;
- (void)requestFreePositionSuccessed;
- (void)startRequestFreePosition;
- (void)setDoorPlateTitleWithDistinationCity;
- (void)updateDoorPlateTitleWithString:(id)arg1;
- (void)updateDoorPlateTitle;
- (id)getPositionPlistDic;
- (id)getPosititionTS;
- (id)getRandomCityNameAndPosition;
- (void)printPositionPlistFile;
- (_Bool)updatePositionPlistFileWithPositionString:(id)arg1;
- (void)updatePositionPlistFile;
- (void)initPositionPlistFile;
- (int)getRandomNumber:(int)arg1 to:(int)arg2;
- (long long)getTimeSp;
- (id)msgSrc;
- (void)popVCwithAnimation;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (id)rightBtn;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

