//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NLPaySettingsCell.h"

@class UIView;

@interface NLPaySettingBalanceCell : NLPaySettingsCell
{
    UIView *_rightView;
}

+ (struct CGSize)detailLabelSizeWithText:(id)arg1 maxWidth:(double)arg2;
+ (id)detailTextLabelFont;
@property(retain, nonatomic) UIView *rightView; // @synthesize rightView=_rightView;
- (void).cxx_destruct;
- (struct UIEdgeInsets)layoutMargins;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

