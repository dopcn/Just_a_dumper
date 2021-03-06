//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDYMUSBView.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class JDYProtocolTree, NSArray, NSString, UITableView, UIView;

@interface QNSelectDefaultPluginView : JDYMUSBView <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _isShowed;
    JDYProtocolTree *_protocolTree;
    NSArray *_pluginArray;
    UIView *_backgroundView;
    UIView *_contentBackView;
    UITableView *_tableView;
    UIView *_tableHeaderView;
    UIView *_tableFooterView;
    UIView *_noPluginView;
    CDUnknownBlockType _completion;
}

+ (id)showSelectDefaultPluginView:(id)arg1 userContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) UIView *noPluginView; // @synthesize noPluginView=_noPluginView;
@property(retain, nonatomic) UIView *tableFooterView; // @synthesize tableFooterView=_tableFooterView;
@property(retain, nonatomic) UIView *tableHeaderView; // @synthesize tableHeaderView=_tableHeaderView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *contentBackView; // @synthesize contentBackView=_contentBackView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) NSArray *pluginArray; // @synthesize pluginArray=_pluginArray;
@property(retain, nonatomic) JDYProtocolTree *protocolTree; // @synthesize protocolTree=_protocolTree;
@property(nonatomic) _Bool isShowed; // @synthesize isShowed=_isShowed;
- (void).cxx_destruct;
- (void)settingDefaultPlugin:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)purchaseButtonClick:(id)arg1;
- (void)cancelButtonClick:(id)arg1;
- (void)showMorePlugin:(id)arg1;
- (void)backgroundViewDidTap:(id)arg1;
- (void)setupViews;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithProtocolTree:(id)arg1 userContext:(id)arg2;
- (void)dismissAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)show;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

