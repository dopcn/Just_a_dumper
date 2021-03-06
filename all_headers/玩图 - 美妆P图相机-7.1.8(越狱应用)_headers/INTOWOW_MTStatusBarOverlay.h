//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIWindow.h>

#import "UITableViewDataSource-Protocol.h"

@class NSMutableArray, NSString, UIActivityIndicatorView, UIImage, UIImageView, UILabel, UITableView, UITextView, UIView;
@protocol MTStatusBarOverlayDelegate;

@interface INTOWOW_MTStatusBarOverlay : UIWindow <UITableViewDataSource>
{
    _Bool hidesActivity_;
    _Bool hideInProgress_;
    _Bool active_;
    _Bool canRemoveImmediateMessagesFromQueue_;
    _Bool forcedToHide_;
    int animation_;
    int detailViewMode_;
    UIView *backgroundView_;
    UIView *detailView_;
    UIImageView *statusBarBackgroundImageView_;
    UILabel *statusLabel1_;
    UILabel *statusLabel2_;
    UILabel *hiddenStatusLabel_;
    double progress_;
    UIImageView *progressView_;
    UIActivityIndicatorView *activityIndicator_;
    UILabel *finishedLabel_;
    UIImage *defaultStatusBarImage_;
    UIImage *defaultStatusBarImageShrinked_;
    NSMutableArray *messageQueue_;
    NSString *detailText_;
    UITextView *detailTextView_;
    NSMutableArray *messageHistory_;
    UITableView *historyTableView_;
    id <MTStatusBarOverlayDelegate> delegate_;
    NSString *lastPostedMessage_;
    struct CGRect smallFrame_;
    struct CGRect oldBackgroundViewFrame_;
}

+ (id)sharedOverlay;
+ (id)sharedInstance;
@property(copy, nonatomic) NSString *lastPostedMessage; // @synthesize lastPostedMessage=lastPostedMessage_;
@property(nonatomic) _Bool forcedToHide; // @synthesize forcedToHide=forcedToHide_;
@property(nonatomic) id <MTStatusBarOverlayDelegate> delegate; // @synthesize delegate=delegate_;
@property(retain, nonatomic) UITableView *historyTableView; // @synthesize historyTableView=historyTableView_;
@property(retain, nonatomic) NSMutableArray *messageHistory; // @synthesize messageHistory=messageHistory_;
@property(retain, nonatomic) UITextView *detailTextView; // @synthesize detailTextView=detailTextView_;
@property(copy, nonatomic) NSString *detailText; // @synthesize detailText=detailText_;
@property(nonatomic) int detailViewMode; // @synthesize detailViewMode=detailViewMode_;
@property(nonatomic) _Bool canRemoveImmediateMessagesFromQueue; // @synthesize canRemoveImmediateMessagesFromQueue=canRemoveImmediateMessagesFromQueue_;
@property(retain, nonatomic) NSMutableArray *messageQueue; // @synthesize messageQueue=messageQueue_;
@property(getter=isActive) _Bool active; // @synthesize active=active_;
@property(getter=isHideInProgress) _Bool hideInProgress; // @synthesize hideInProgress=hideInProgress_;
@property(nonatomic) int animation; // @synthesize animation=animation_;
@property(nonatomic) struct CGRect oldBackgroundViewFrame; // @synthesize oldBackgroundViewFrame=oldBackgroundViewFrame_;
@property(nonatomic) struct CGRect smallFrame; // @synthesize smallFrame=smallFrame_;
@property(retain, nonatomic) UIImage *defaultStatusBarImageShrinked; // @synthesize defaultStatusBarImageShrinked=defaultStatusBarImageShrinked_;
@property(retain, nonatomic) UIImage *defaultStatusBarImage; // @synthesize defaultStatusBarImage=defaultStatusBarImage_;
@property(nonatomic) _Bool hidesActivity; // @synthesize hidesActivity=hidesActivity_;
@property(retain, nonatomic) UILabel *finishedLabel; // @synthesize finishedLabel=finishedLabel_;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=activityIndicator_;
@property(retain, nonatomic) UIImageView *progressView; // @synthesize progressView=progressView_;
@property(nonatomic) double progress; // @synthesize progress=progress_;
@property(nonatomic) UILabel *hiddenStatusLabel; // @synthesize hiddenStatusLabel=hiddenStatusLabel_;
@property(retain, nonatomic) UILabel *statusLabel2; // @synthesize statusLabel2=statusLabel2_;
@property(retain, nonatomic) UILabel *statusLabel1; // @synthesize statusLabel1=statusLabel1_;
@property(retain, nonatomic) UIImageView *statusBarBackgroundImageView; // @synthesize statusBarBackgroundImageView=statusBarBackgroundImageView_;
@property(retain, nonatomic) UIView *detailView; // @synthesize detailView=detailView_;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=backgroundView_;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isReallyHidden) _Bool reallyHidden;
- (void)setHidden:(_Bool)arg1 useAlpha:(_Bool)arg2;
- (void)setHiddenUsingAlpha:(_Bool)arg1;
- (void)clearHistory;
- (void)addMessageToHistory:(id)arg1;
@property(nonatomic, getter=isHistoryEnabled) _Bool historyEnabled;
- (struct CGRect)backgroundViewFrameForStatusBarInterfaceOrientation;
- (void)updateProgressViewSizeForLabel:(id)arg1;
- (void)updateDetailTextViewHeight;
- (void)callDelegateWithNewMessage:(id)arg1;
- (void)updateUIForMessageType:(int)arg1 duration:(double)arg2;
- (void)setColorSchemeForStatusBarStyle:(long long)arg1 messageType:(int)arg2;
- (void)setStatusBarBackgroundForStyle:(long long)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)contentViewSwipedDown:(id)arg1;
- (void)contentViewSwipedUp:(id)arg1;
- (void)contentViewClicked:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
@property(readonly, nonatomic) UILabel *visibleStatusLabel;
- (void)setDetailViewHidden:(_Bool)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic, getter=isDetailViewHidden) _Bool detailViewHidden;
- (void)setShrinked:(_Bool)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic, getter=isShrinked) _Bool shrinked;
- (void)rotateToStatusBarFrame:(id)arg1;
- (void)didChangeStatusBarFrame:(id)arg1;
- (void)show;
- (void)hideTemporary;
- (void)hide;
- (void)showNextMessage;
- (void)postImmediateMessage:(id)arg1 type:(int)arg2 duration:(double)arg3 animated:(_Bool)arg4;
- (void)postMessage:(id)arg1 type:(int)arg2 duration:(double)arg3 animated:(_Bool)arg4 immediate:(_Bool)arg5;
- (void)postMessageDictionary:(id)arg1;
- (void)postImmediateErrorMessage:(id)arg1 duration:(double)arg2 animated:(_Bool)arg3;
- (void)postErrorMessage:(id)arg1 duration:(double)arg2 animated:(_Bool)arg3;
- (void)postErrorMessage:(id)arg1 duration:(double)arg2;
- (void)postImmediateFinishMessage:(id)arg1 duration:(double)arg2 animated:(_Bool)arg3;
- (void)postFinishMessage:(id)arg1 duration:(double)arg2 animated:(_Bool)arg3;
- (void)postFinishMessage:(id)arg1 duration:(double)arg2;
- (void)postImmediateMessage:(id)arg1 duration:(double)arg2 animated:(_Bool)arg3;
- (void)postImmediateMessage:(id)arg1 duration:(double)arg2;
- (void)postImmediateMessage:(id)arg1 animated:(_Bool)arg2;
- (void)postMessage:(id)arg1 duration:(double)arg2 animated:(_Bool)arg3;
- (void)postMessage:(id)arg1 duration:(double)arg2;
- (void)postMessage:(id)arg1 animated:(_Bool)arg2;
- (void)postMessage:(id)arg1;
- (void)restoreState;
- (void)saveStateSynchronized:(_Bool)arg1;
- (void)saveState;
- (void)addSubviewToBackgroundView:(id)arg1 atIndex:(long long)arg2;
- (void)addSubviewToBackgroundView:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

