//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIWebViewDelegate-Protocol.h"

@class MTRefreshController, MTRefreshHeaderView, NSString;

@interface SAKWebViewPullToRefershProxy : NSObject <UIWebViewDelegate>
{
    _Bool _isWebViewReloadingByPullToRefresh;
    MTRefreshHeaderView *_refreshControl;
    MTRefreshController *_refreshControllor;
    CDUnknownBlockType _partialRefreshBlock;
}

@property(nonatomic) _Bool isWebViewReloadingByPullToRefresh; // @synthesize isWebViewReloadingByPullToRefresh=_isWebViewReloadingByPullToRefresh;
@property(copy, nonatomic) CDUnknownBlockType partialRefreshBlock; // @synthesize partialRefreshBlock=_partialRefreshBlock;
@property(retain, nonatomic) MTRefreshController *refreshControllor; // @synthesize refreshControllor=_refreshControllor;
@property(retain, nonatomic) MTRefreshHeaderView *refreshControl; // @synthesize refreshControl=_refreshControl;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stop;
- (void)unbind;
- (void)bindWithPartialRefershBlock:(CDUnknownBlockType)arg1;
- (void)bind;
- (id)initWithWebViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

