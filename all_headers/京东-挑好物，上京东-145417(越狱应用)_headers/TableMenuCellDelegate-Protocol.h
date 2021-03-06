//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSIndexPath, TableMenuCell;

@protocol TableMenuCellDelegate <NSObject>

@optional
- (void)menuChooseWithIndexPath:(NSIndexPath *)arg1 atIndex:(long long)arg2;
- (_Bool)shouldShowMenuOptionsViewInCell:(TableMenuCell *)arg1;
- (void)tableMenuDidHideInCell:(TableMenuCell *)arg1;
- (void)tableMenuWillHideInCell:(TableMenuCell *)arg1;
- (void)tableMenuDidShowInCell:(TableMenuCell *)arg1;
- (void)tableMenuWillShowInCell:(TableMenuCell *)arg1;
- (_Bool)tableMenuShouldShowInCell:(TableMenuCell *)arg1;
@end

