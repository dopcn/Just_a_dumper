//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ZDMBaseCollectionViewCell.h"

@class SMGenericThreeLevelTabModel, UILabel;

@interface SMGenericFilterExpandCell : ZDMBaseCollectionViewCell
{
    SMGenericThreeLevelTabModel *_model;
    UILabel *_label_title;
}

@property(retain, nonatomic) UILabel *label_title; // @synthesize label_title=_label_title;
@property(retain, nonatomic) SMGenericThreeLevelTabModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)layer:(id)arg1 Color:(id)arg2 boder:(double)arg3;
- (void)sm_setupView;
- (void)sm_resize;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

