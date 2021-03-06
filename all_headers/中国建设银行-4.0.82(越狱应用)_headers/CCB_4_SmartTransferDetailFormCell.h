//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCBFormCell.h"

@class CCBImageView, CCBLabel;

@interface CCB_4_SmartTransferDetailFormCell : CCBFormCell
{
    CCBImageView *_logoImageView;
    CCBLabel *_nameLabel;
    CCBLabel *_accLabel;
    CCBLabel *_dateLabel;
    CCBLabel *_weekLabel;
    CCBLabel *_typeLabel;
    CCBLabel *_amountLabel;
}

+ (double)cellHeightForFormItem:(id)arg1 contentWidth:(double)arg2;
@property(retain, nonatomic) CCBLabel *amountLabel; // @synthesize amountLabel=_amountLabel;
@property(retain, nonatomic) CCBLabel *typeLabel; // @synthesize typeLabel=_typeLabel;
@property(retain, nonatomic) CCBLabel *weekLabel; // @synthesize weekLabel=_weekLabel;
@property(retain, nonatomic) CCBLabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(retain, nonatomic) CCBLabel *accLabel; // @synthesize accLabel=_accLabel;
@property(retain, nonatomic) CCBLabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) CCBImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
- (void).cxx_destruct;
- (id)getWeekday:(id)arg1;
- (id)positiveFormat:(id)arg1;
- (void)setFormItem:(id)arg1;
- (void)addConstraintForSubViews:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

