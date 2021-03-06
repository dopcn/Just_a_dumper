//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XViewController.h"

#import "UIScrollViewDelegate-Protocol.h"
#import "XPRLMDelegate-Protocol.h"

@class NSString, UIScrollView, XPRLMWrapper;

@interface XScrollViewController : XViewController <UIScrollViewDelegate, XPRLMDelegate>
{
    XPRLMWrapper *_prlmWrapper;
    UIScrollView *_scrollView;
}

@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(readonly, nonatomic) XPRLMWrapper *prlmWrapper; // @synthesize prlmWrapper=_prlmWrapper;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)enablePullToRefresh;
- (_Bool)enableLoadMore;
- (Class)scrollViewClass;
- (void)createScrollView;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setupPullToRefreshAndLoadMore;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

