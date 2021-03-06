//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CycleScrollViewDelegate-Protocol.h"

@class CycleScrollView, NSMutableArray, NSMutableSet, NSString;
@protocol HULoginTextCardOperationViewDelegate;

@interface HULoginTextCardOperationView : UIView <CycleScrollViewDelegate>
{
    _Bool _hasTextOperate;
    _Bool _bLogin;
    _Bool _isNewLoad;
    _Bool _isViewShowing;
    _Bool _canSee;
    NSString *_objectStr;
    id <HULoginTextCardOperationViewDelegate> _delegate;
    CycleScrollView *_scrollView;
    NSMutableArray *_needShowTextOperateArray;
    NSString *_brokerId;
    NSMutableSet *_showedIds;
}

@property(nonatomic) _Bool canSee; // @synthesize canSee=_canSee;
@property(retain, nonatomic) NSMutableSet *showedIds; // @synthesize showedIds=_showedIds;
@property(nonatomic) _Bool isViewShowing; // @synthesize isViewShowing=_isViewShowing;
@property(nonatomic) _Bool isNewLoad; // @synthesize isNewLoad=_isNewLoad;
@property(nonatomic) _Bool bLogin; // @synthesize bLogin=_bLogin;
@property(copy, nonatomic) NSString *brokerId; // @synthesize brokerId=_brokerId;
@property(retain, nonatomic) NSMutableArray *needShowTextOperateArray; // @synthesize needShowTextOperateArray=_needShowTextOperateArray;
@property(retain, nonatomic) CycleScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak id <HULoginTextCardOperationViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *objectStr; // @synthesize objectStr=_objectStr;
@property(nonatomic) _Bool hasTextOperate; // @synthesize hasTextOperate=_hasTextOperate;
- (void).cxx_destruct;
- (void)statLog:(id)arg1 clickType:(id)arg2;
- (void)cellBtnClick:(id)arg1;
- (id)createTestOperateCellbyIndex:(long long)arg1;
- (void)CycleScrollView:(id)arg1 didSwitchToShowContentView:(id)arg2 atIndex:(long long)arg3 autoSwitch:(_Bool)arg4;
- (id)contentViewShownOnCycleScrollView:(id)arg1 atIndex:(long long)arg2;
- (long long)numberOfViewsShowOnCycleScrollView:(id)arg1;
- (void)setShowTextOperateLogin:(_Bool)arg1 brokerId:(id)arg2;
- (void)reloadTextOperateData;
- (void)getNewTextOperate;
- (void)initComponent;
- (void)willDisappear;
- (void)willAppear;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

