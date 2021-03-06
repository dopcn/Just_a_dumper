//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SYBaseViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class IMYCaptionView, NSArray, NSString, UITableView;

@interface SYHospitalVC : SYBaseViewController <UITableViewDataSource, UITableViewDelegate>
{
    _Bool _isChangeCity;
    _Bool _isFromTTQ;
    int _typeVC;
    long long _selectIndex;
    long long _cityid;
    CDUnknownBlockType _callBack;
    UITableView *_tv_main;
    NSArray *_tvData;
    IMYCaptionView *_captionView;
}

+ (void)registerURIAction;
+ (void)load;
@property(retain, nonatomic) IMYCaptionView *captionView; // @synthesize captionView=_captionView;
@property(retain, nonatomic) NSArray *tvData; // @synthesize tvData=_tvData;
@property(nonatomic) __weak UITableView *tv_main; // @synthesize tv_main=_tv_main;
@property(nonatomic) _Bool isFromTTQ; // @synthesize isFromTTQ=_isFromTTQ;
@property(nonatomic) _Bool isChangeCity; // @synthesize isChangeCity=_isChangeCity;
@property(copy, nonatomic) CDUnknownBlockType callBack; // @synthesize callBack=_callBack;
@property(nonatomic) long long cityid; // @synthesize cityid=_cityid;
@property(nonatomic) long long selectIndex; // @synthesize selectIndex=_selectIndex;
@property(nonatomic) int typeVC; // @synthesize typeVC=_typeVC;
- (void).cxx_destruct;
- (void)changeCity;
- (void)initData;
- (void)popToUserInfoVC;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)requestData;
- (void)initCaptionView;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

