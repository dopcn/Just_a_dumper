//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BDPanBaseFileCell.h"

@class UILabel;

@interface BDPanRecycleFileCell : BDPanBaseFileCell
{
    UILabel *_labelDay;
    UILabel *_labelSize;
}

@property(retain, nonatomic) UILabel *labelSize; // @synthesize labelSize=_labelSize;
@property(retain, nonatomic) UILabel *labelDay; // @synthesize labelDay=_labelDay;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupCellWithFileMeta:(id)arg1 isSelected:(_Bool)arg2;
- (id)initWithCellLayout:(id)arg1 isEditing:(_Bool)arg2 reuseIdentifier:(id)arg3 isBeyondTheme:(_Bool)arg4;

@end

