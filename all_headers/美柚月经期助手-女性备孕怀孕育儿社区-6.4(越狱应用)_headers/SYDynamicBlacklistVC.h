//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SYBaseViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class IMYCaptionView, NSMutableArray, NSString, UITableView;

@interface SYDynamicBlacklistVC : SYBaseViewController <UITableViewDelegate, UITableViewDataSource>
{
    IMYCaptionView *_captionView;
    UITableView *_tv_main;
    NSMutableArray *_tvData;
}

+ (void)addAndDelBlacklist:(unsigned long long)arg1 isAdd:(_Bool)arg2 callback:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) NSMutableArray *tvData; // @synthesize tvData=_tvData;
@property(nonatomic) __weak UITableView *tv_main; // @synthesize tv_main=_tv_main;
@property(retain, nonatomic) IMYCaptionView *captionView; // @synthesize captionView=_captionView;
- (void).cxx_destruct;
- (void)delBlackListBtnDo:(id)arg1;
- (void)refreshFinish:(id)arg1;
- (void)reqBlackListData;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

