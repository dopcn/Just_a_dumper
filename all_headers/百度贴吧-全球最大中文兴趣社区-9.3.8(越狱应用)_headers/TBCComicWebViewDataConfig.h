//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBCBaseMessageDataConfig.h"

@class NSURL, UIViewController;

@interface TBCComicWebViewDataConfig : TBCBaseMessageDataConfig
{
    UIViewController *_viewController;
    NSURL *_comicTown;
}

+ (id)buildWithNavigationController:(id)arg1 comicTown:(id)arg2;
@property(copy, nonatomic) NSURL *comicTown; // @synthesize comicTown=_comicTown;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;

@end

