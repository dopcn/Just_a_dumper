//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTTourBaseCell.h"

#import "TYCyclePagerViewDataSource-Protocol.h"
#import "TYCyclePagerViewDelegate-Protocol.h"

@class NSString;

@interface CTTourHomeSpecialCell : CTTourBaseCell <TYCyclePagerViewDataSource, TYCyclePagerViewDelegate>
{
}

+ (double)cellHeight:(id)arg1 extraInfo:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 dataSource:(id)arg4 parentVC:(id)arg5;
- (void)couponAction:(id)arg1;
- (void)advertisementAction:(id)arg1;
- (void)pagerView:(id)arg1 didSelectedItemCell:(id)arg2 atIndex:(long long)arg3;
- (void)pagerView:(id)arg1 didScrollFromIndex:(long long)arg2 toIndex:(long long)arg3;
- (id)pagerView:(id)arg1 cellForItemAtIndex:(long long)arg2;
- (long long)numberOfItemsInPagerView:(id)arg1;
- (void)initUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

