//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class SNBTimeLineFeedback, UILabel;

@interface SNBTimelineFeedbackCell : UICollectionViewCell
{
    _Bool _isSelected;
    SNBTimeLineFeedback *_model;
    CDUnknownBlockType _didTapCellCommand;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(copy, nonatomic) CDUnknownBlockType didTapCellCommand; // @synthesize didTapCellCommand=_didTapCellCommand;
@property(retain, nonatomic) SNBTimeLineFeedback *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)_snb_didTapTopicButton:(id)arg1;
- (void)_snb_configObserver;
- (void)updateTheme:(_Bool)arg1;
- (void)_snb_configConstraints;
- (void)_snb_configSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

