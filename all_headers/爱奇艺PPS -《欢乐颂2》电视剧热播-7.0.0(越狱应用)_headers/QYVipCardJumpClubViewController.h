//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYCommonViewController.h"

@interface QYVipCardJumpClubViewController : QYCommonViewController
{
    long long _type;
    long long _statusBarStyle;
}

@property(nonatomic) long long statusBarStyle; // @synthesize statusBarStyle=_statusBarStyle;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void)didReceiveMemoryWarning;
- (void)toBack;
- (void)clean;
- (void)loadClubContentView;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithType:(long long)arg1;

@end

