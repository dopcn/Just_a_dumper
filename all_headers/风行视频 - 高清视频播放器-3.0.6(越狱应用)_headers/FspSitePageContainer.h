//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FspPageContainerScrollDelegate-Protocol.h"
#import "FspSitePageContainerTopBarDelegate-Protocol.h"

@class FspPageContainerScrollController, FspSitePageContainerTopBar, NSArray, NSString;

@interface FspSitePageContainer : UIViewController <FspSitePageContainerTopBarDelegate, FspPageContainerScrollDelegate>
{
    NSArray *_pageItems;
    unsigned long long _defaultSelectedIndex;
    unsigned long long _preSelectedIndex;
    unsigned long long _curSelectedIndex;
    FspSitePageContainerTopBar *_topBar;
    FspPageContainerScrollController *_scrollController;
}

- (void).cxx_destruct;
- (void)pageContainerScrollAtIndex:(unsigned long long)arg1;
- (void)showSelectedPageItem:(unsigned long long)arg1;
- (void)createTopBar;
- (void)createScrollController;
- (void)viewDidLoad;
- (id)initWithFrame:(struct CGRect)arg1 pageItems:(id)arg2 defaultIndex:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

