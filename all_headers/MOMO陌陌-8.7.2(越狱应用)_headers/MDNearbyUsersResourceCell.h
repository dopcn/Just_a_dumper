//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MDBaseResourceCell.h"

@class MDNearbyUsersResource, NSMutableArray;

@interface MDNearbyUsersResourceCell : MDBaseResourceCell
{
    NSMutableArray *iconViews;
    MDNearbyUsersResource *_usersResource;
}

+ (double)nearbyUsersResourceCellHeightWithResource:(id)arg1;
@property(retain, nonatomic) MDNearbyUsersResource *usersResource; // @synthesize usersResource=_usersResource;
- (void)dealloc;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)momoUserTableCellClicked:(id)arg1;
- (void)decorateCell:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

