//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LZBaseViewController.h"

#import "PLURoomTaskManagerDelegate-Protocol.h"
#import "PLURoomTaskViewDelegate-Protocol.h"

@class NSString, PLURoomTaskManager, PLUTaskView;

@interface PLUNewbieTaskController : LZBaseViewController <PLURoomTaskManagerDelegate, PLURoomTaskViewDelegate>
{
    PLUTaskView *_taskView;
    PLURoomTaskManager *_roomTaskManager;
}

@property(retain, nonatomic) PLURoomTaskManager *roomTaskManager; // @synthesize roomTaskManager=_roomTaskManager;
@property(retain, nonatomic) PLUTaskView *taskView; // @synthesize taskView=_taskView;
- (void).cxx_destruct;
- (void)showRemberViewWithString:(id)arg1;
- (void)roomTaskManager:(id)arg1 showType:(unsigned long long)arg2;
- (void)roomTaskManagerGotoBindPhone:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

