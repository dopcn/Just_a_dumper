//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTemplateModuleView.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSLayoutConstraint, NSString, UIButton, UITableView, UIView;

@interface YYMobileLiveChannelChoosePanel : YTemplateModuleView <UITableViewDataSource, UITableViewDelegate>
{
    CDUnknownBlockType _bindingChannelButtonTapBlock;
    CDUnknownBlockType _createChannelButtonTapBlock;
    CDUnknownBlockType _closeButtonTapBlock;
    CDUnknownBlockType _dismissBlock;
    UITableView *_channelTableView;
    UIButton *_createChannelButton;
    UIButton *_bindChannelButton;
    NSLayoutConstraint *_bindButtonLeftConstraint;
    UIView *_buttonSeparatorLine;
    long long _checkedIndex;
    NSArray *_channelArray;
    NSLayoutConstraint *_buttonSeparatorWidth;
    NSLayoutConstraint *_buttonTopSeparatorHeight;
}

@property(nonatomic) __weak NSLayoutConstraint *buttonTopSeparatorHeight; // @synthesize buttonTopSeparatorHeight=_buttonTopSeparatorHeight;
@property(nonatomic) __weak NSLayoutConstraint *buttonSeparatorWidth; // @synthesize buttonSeparatorWidth=_buttonSeparatorWidth;
@property(retain, nonatomic) NSArray *channelArray; // @synthesize channelArray=_channelArray;
@property(nonatomic) long long checkedIndex; // @synthesize checkedIndex=_checkedIndex;
@property(nonatomic) __weak UIView *buttonSeparatorLine; // @synthesize buttonSeparatorLine=_buttonSeparatorLine;
@property(nonatomic) __weak NSLayoutConstraint *bindButtonLeftConstraint; // @synthesize bindButtonLeftConstraint=_bindButtonLeftConstraint;
@property(nonatomic) __weak UIButton *bindChannelButton; // @synthesize bindChannelButton=_bindChannelButton;
@property(nonatomic) __weak UIButton *createChannelButton; // @synthesize createChannelButton=_createChannelButton;
@property(nonatomic) __weak UITableView *channelTableView; // @synthesize channelTableView=_channelTableView;
@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
@property(copy, nonatomic) CDUnknownBlockType closeButtonTapBlock; // @synthesize closeButtonTapBlock=_closeButtonTapBlock;
@property(copy, nonatomic) CDUnknownBlockType createChannelButtonTapBlock; // @synthesize createChannelButtonTapBlock=_createChannelButtonTapBlock;
@property(copy, nonatomic) CDUnknownBlockType bindingChannelButtonTapBlock; // @synthesize bindingChannelButtonTapBlock=_bindingChannelButtonTapBlock;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)safeDismissBlock;
- (void)closeButtonTapped:(id)arg1;
- (void)bindChannelButtonTapped:(id)arg1;
- (void)createChannelButtonTapped:(id)arg1;
- (void)dealloc;
- (void)awakeFromNib;
- (void)updateWithChannels:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

