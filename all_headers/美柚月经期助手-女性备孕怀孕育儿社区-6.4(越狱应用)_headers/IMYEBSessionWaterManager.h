//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYEBSessionViewManager.h"

#import "IMYGridViewDataSource-Protocol.h"
#import "IMYGridViewDelegate-Protocol.h"

@class IMYGridView, NSString;

@interface IMYEBSessionWaterManager : IMYEBSessionViewManager <IMYGridViewDelegate, IMYGridViewDataSource>
{
    IMYGridView *_gridView;
}

@property(retain, nonatomic) IMYGridView *gridView; // @synthesize gridView=_gridView;
- (void).cxx_destruct;
- (struct CGSize)imy_itemSizeWithGridView:(id)arg1;
- (void)imy_gridView:(id)arg1 didClickItemView:(id)arg2 atIndexPath:(id)arg3;
- (void)imy_gridView:(id)arg1 willDisplayItem:(id)arg2 atIndexPath:(id)arg3;
- (id)imy_gridView:(id)arg1 reuseItemView:(id)arg2 atIndexPath:(id)arg3;
- (long long)imy_gridView:(id)arg1 itemCountInSection:(long long)arg2;
- (void)removeAll;
- (void)showMeiyouOnlyView;
- (void)reloadData;
- (void)refreshViewInfo;
- (void)initContentView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

