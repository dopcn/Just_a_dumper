//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "HTKGCBaseModuleCellProtocol-Protocol.h"

@class MTBInternalFlightBottomTabCellItem, NSMutableArray, NSString;

@interface MTBInternalFlightBottomTabCell : UITableViewCell <HTKGCBaseModuleCellProtocol>
{
    MTBInternalFlightBottomTabCellItem *_item;
    NSMutableArray *_buttons;
}

@property(retain, nonatomic) NSMutableArray *buttons; // @synthesize buttons=_buttons;
@property(retain, nonatomic) MTBInternalFlightBottomTabCellItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)setupConstraints;
- (id)createButtonWith:(id)arg1 index:(unsigned long long)arg2;
- (void)setupUI;
- (void)bindData;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

