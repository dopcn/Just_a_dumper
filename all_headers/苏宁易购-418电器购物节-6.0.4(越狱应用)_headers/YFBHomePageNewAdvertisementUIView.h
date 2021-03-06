//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "YFBHomePageNewFloorOneTableViewCellDelegate-Protocol.h"

@class NSString, UITableView, UIViewController, YFBAdvertisementDataSource;

@interface YFBHomePageNewAdvertisementUIView : UIView <UITableViewDelegate, UITableViewDataSource, YFBHomePageNewFloorOneTableViewCellDelegate>
{
    UITableView *_bannerUITableView;
    YFBAdvertisementDataSource *_bannerDataSource;
    UIViewController *_bottomIV;
}

@property(retain, nonatomic) UIViewController *bottomIV; // @synthesize bottomIV=_bottomIV;
@property(retain, nonatomic) YFBAdvertisementDataSource *bannerDataSource; // @synthesize bannerDataSource=_bannerDataSource;
@property(retain, nonatomic) UITableView *bannerUITableView; // @synthesize bannerUITableView=_bannerUITableView;
- (void).cxx_destruct;
- (void)reshTable:(id)arg1 heightView:(double)arg2;
- (void)pushDown;
- (void)touchFloorOneAllBtnInput:(id)arg1 currentChoseSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1 viewController:(id)arg2 dto:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

