//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class MIProductItemView, NSNumber;

@interface MICategoryItemTableViewCell : UITableViewCell
{
    MIProductItemView *_itemViewLeft;
    MIProductItemView *_itemViewRight;
    NSNumber *_leftIid;
    NSNumber *_rightIid;
}

@property(retain, nonatomic) NSNumber *rightIid; // @synthesize rightIid=_rightIid;
@property(retain, nonatomic) NSNumber *leftIid; // @synthesize leftIid=_leftIid;
@property(retain, nonatomic) MIProductItemView *itemViewRight; // @synthesize itemViewRight=_itemViewRight;
@property(retain, nonatomic) MIProductItemView *itemViewLeft; // @synthesize itemViewLeft=_itemViewLeft;
- (void).cxx_destruct;
- (void)updateCell:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;

@end

