//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTCustomeGroupTableViewCell.h"

@class UIColor, UILabel;

@interface CTTrainPassengerEditingItemCell : CTCustomeGroupTableViewCell
{
    UIColor *_valueColor;
    UILabel *_labelItemTitle;
    UILabel *_labelItemValue;
}

@property(retain, nonatomic) UILabel *labelItemValue; // @synthesize labelItemValue=_labelItemValue;
@property(retain, nonatomic) UILabel *labelItemTitle; // @synthesize labelItemTitle=_labelItemTitle;
@property(retain, nonatomic) UIColor *valueColor; // @synthesize valueColor=_valueColor;
- (void).cxx_destruct;
- (void)setupContentWithTitle:(id)arg1 value:(id)arg2;
- (void)awakeFromNib;

@end

