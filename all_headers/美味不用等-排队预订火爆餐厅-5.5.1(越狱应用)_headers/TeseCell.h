//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AccessoryDefaultTableCell.h"

@class UILabel;

@interface TeseCell : AccessoryDefaultTableCell
{
    UILabel *_subTitleLabel;
}

+ (_Bool)isGreaterMaxHeightWithContent:(id)arg1;
+ (double)hWithContent:(id)arg1;
+ (double)heightWithContent:(id)arg1;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
- (void).cxx_destruct;
- (void)updateLImg:(id)arg1 title:(id)arg2;
- (void)prepareForReuse;
- (void)makeConstraints;
- (id)initWithReuseIdentifier:(id)arg1;

@end

