//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCBaseModule.h"

@class TPKHPXDeal, TPKHPXNavigationBar;

@interface TPKHPXDealDetailNavigationBarModule : GCBaseModule
{
    TPKHPXNavigationBar *_navigationBar;
    TPKHPXDeal *_deal;
}

@property(retain, nonatomic) TPKHPXDeal *deal; // @synthesize deal=_deal;
@property(retain, nonatomic) TPKHPXNavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)updateNavigationBar:(id)arg1;
- (void)setupModule;

@end

