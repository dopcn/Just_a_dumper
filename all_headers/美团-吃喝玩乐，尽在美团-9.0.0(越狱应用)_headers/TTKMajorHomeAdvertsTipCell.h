//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "HTKGCBaseModuleCellProtocol-Protocol.h"

@class NSString, TTKMajorHomeAdvertsTipCellItem, UILabel;

@interface TTKMajorHomeAdvertsTipCell : UITableViewCell <HTKGCBaseModuleCellProtocol>
{
    UILabel *_tipLabel;
    TTKMajorHomeAdvertsTipCellItem *_item;
}

@property(retain, nonatomic) TTKMajorHomeAdvertsTipCellItem *item; // @synthesize item=_item;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

