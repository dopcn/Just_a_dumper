//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NMSettingIconCell.h"

@class NMBadgeTextView, NSString;

@interface NMSettingBadgeCell : NMSettingIconCell
{
    NMBadgeTextView *_badgeView;
    struct UIEdgeInsets _textEdgeInsets;
}

@property(nonatomic) struct UIEdgeInsets textEdgeInsets; // @synthesize textEdgeInsets=_textEdgeInsets;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *badgeValue; // @dynamic badgeValue;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

