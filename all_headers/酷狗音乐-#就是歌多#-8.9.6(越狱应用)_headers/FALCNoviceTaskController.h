//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FALCNoviceTaskViewDelegate-Protocol.h"

@class FALCNoviceTaskView, NSArray, NSString;
@protocol FALCNewNoviceTaskPushProtocol;

@interface FALCNoviceTaskController : NSObject <FALCNoviceTaskViewDelegate>
{
    _Bool _listLoading;
    _Bool _rewardLoading;
    _Bool _redPocketLoading;
    long long _taskId;
    NSString *_taskData;
    NSArray *_taskList;
    unsigned long long _liveRoomType;
    id <FALCNewNoviceTaskPushProtocol> _delegate;
    FALCNoviceTaskView *_taskView;
}

@property(nonatomic) _Bool redPocketLoading; // @synthesize redPocketLoading=_redPocketLoading;
@property(nonatomic) _Bool rewardLoading; // @synthesize rewardLoading=_rewardLoading;
@property(nonatomic) _Bool listLoading; // @synthesize listLoading=_listLoading;
@property(retain, nonatomic) FALCNoviceTaskView *taskView; // @synthesize taskView=_taskView;
@property(nonatomic) __weak id <FALCNewNoviceTaskPushProtocol> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long liveRoomType; // @synthesize liveRoomType=_liveRoomType;
@property(retain, nonatomic) NSArray *taskList; // @synthesize taskList=_taskList;
@property(retain, nonatomic) NSString *taskData; // @synthesize taskData=_taskData;
@property(nonatomic) long long taskId; // @synthesize taskId=_taskId;
- (void).cxx_destruct;
- (void)noviceTaskViewRequestList;
- (void)noviceTaskViewGetRedBagAward:(id)arg1;
- (void)noviceTaskView:(id)arg1 getAwardIndex:(long long)arg2 dataItem:(id)arg3;
- (void)noviceTaskView:(id)arg1 clickCellIndex:(long long)arg2 dataItem:(id)arg3;
- (void)shareSuccess;
- (id)errorMsgWithError:(id)arg1;
- (void)requestReceiveRedBag:(id)arg1;
- (void)requestReceiveItemAward:(long long)arg1;
- (void)changeTaskItemStatusWithTaskId:(long long)arg1 status:(long long)arg2;
- (void)requestTaskList;
- (void)dismissView;
- (void)showInView:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

