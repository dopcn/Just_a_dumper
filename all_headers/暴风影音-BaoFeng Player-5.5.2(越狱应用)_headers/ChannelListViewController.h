//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FeaturedListViewController.h"

@class NavigationBarView;

@interface ChannelListViewController : FeaturedListViewController
{
    NavigationBarView *_navigationBar;
}

@property(retain, nonatomic) NavigationBarView *navigationBar; // @synthesize navigationBar=_navigationBar;
- (void)backButtonAction;
- (void)showWithInfoDic:(id)arg1;
- (void)requestFeaturedPagesDidSucceed:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

@end

