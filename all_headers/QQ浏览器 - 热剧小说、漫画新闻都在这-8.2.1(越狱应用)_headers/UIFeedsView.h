//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UIFeedsBaseView.h"

#import "MttPageLoadingIndicatorPullFreshDelegate-Protocol.h"
#import "MttSkinChangeable-Protocol.h"

@class NSString;
@protocol FeedsViewDelegate;

@interface UIFeedsView : UIFeedsBaseView <MttPageLoadingIndicatorPullFreshDelegate, MttSkinChangeable>
{
    _Bool _bStarupOrSwitchTab;
    id <FeedsViewDelegate> delegate;
    unsigned long long _footerType;
    long long _loadCount;
}

@property(nonatomic) _Bool bStarupOrSwitchTab; // @synthesize bStarupOrSwitchTab=_bStarupOrSwitchTab;
@property(nonatomic) long long loadCount; // @synthesize loadCount=_loadCount;
@property(nonatomic) unsigned long long footerType; // @synthesize footerType=_footerType;
@property(nonatomic) __weak id <FeedsViewDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (Class)refreshFooterClass;
- (void)handleLoadDataSuccess;
- (void)handleLoadMoreDataFail:(long long)arg1;
- (void)handleLoadDataFail:(long long)arg1;
- (void)handleNoNetworkNotification;
- (void)pageDidAppearWithType:(id)arg1;
- (void)pageDidDisappear;
- (void)pageWillDisappear;
- (void)pageWillAppear;
- (void)refreshSkinWithMode:(long long)arg1;
- (void)setupView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)viewForPageIndicatorDidFinishedPullFresh:(id)arg1;
- (void)pageLoadingIndicatorDidStartPullFresh:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

