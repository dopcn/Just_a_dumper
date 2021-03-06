//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class CTAutoResizeLabel, CTFlightPickerLabel, NSIndexPath, UIButton, UIImageView, UITextField, UIView;

@interface CTFlightOrderCommonCell : UITableViewCell
{
    CTAutoResizeLabel *_titleLabel;
    CTAutoResizeLabel *_infoLabel;
    CTAutoResizeLabel *_orderTipsLabel;
    UITextField *_commonTextField;
    UIImageView *_imageIV;
    UIImageView *_arrowIV;
    UIImageView *_tickIV;
    UIButton *_commonButton;
    UIButton *_secondCommonButton;
    UIButton *_thirdCommonButton;
    CTFlightPickerLabel *_pickerLabel;
    NSIndexPath *_indexPath;
    CTAutoResizeLabel *_firstCommonLabel;
    CTAutoResizeLabel *_secondCommonLabel;
    CTAutoResizeLabel *_thirdCommonLabel;
    UIView *_viewLine0;
    UIView *_viewLine1;
    UIView *_viewLine2;
    UIView *_fakeSeparateLine;
}

+ (id)cellFromXib:(id)arg1 atIndex:(unsigned long long)arg2;
+ (id)cellFromXib:(id)arg1;
@property(nonatomic) __weak UIView *fakeSeparateLine; // @synthesize fakeSeparateLine=_fakeSeparateLine;
@property(retain, nonatomic) UIView *viewLine2; // @synthesize viewLine2=_viewLine2;
@property(retain, nonatomic) UIView *viewLine1; // @synthesize viewLine1=_viewLine1;
@property(retain, nonatomic) UIView *viewLine0; // @synthesize viewLine0=_viewLine0;
@property(retain, nonatomic) CTAutoResizeLabel *thirdCommonLabel; // @synthesize thirdCommonLabel=_thirdCommonLabel;
@property(retain, nonatomic) CTAutoResizeLabel *secondCommonLabel; // @synthesize secondCommonLabel=_secondCommonLabel;
@property(retain, nonatomic) CTAutoResizeLabel *firstCommonLabel; // @synthesize firstCommonLabel=_firstCommonLabel;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(retain, nonatomic) CTFlightPickerLabel *pickerLabel; // @synthesize pickerLabel=_pickerLabel;
@property(retain, nonatomic) UIButton *thirdCommonButton; // @synthesize thirdCommonButton=_thirdCommonButton;
@property(retain, nonatomic) UIButton *secondCommonButton; // @synthesize secondCommonButton=_secondCommonButton;
@property(retain, nonatomic) UIButton *commonButton; // @synthesize commonButton=_commonButton;
@property(retain, nonatomic) UIImageView *tickIV; // @synthesize tickIV=_tickIV;
@property(retain, nonatomic) UIImageView *arrowIV; // @synthesize arrowIV=_arrowIV;
@property(retain, nonatomic) UIImageView *imageIV; // @synthesize imageIV=_imageIV;
@property(retain, nonatomic) UITextField *commonTextField; // @synthesize commonTextField=_commonTextField;
@property(retain, nonatomic) CTAutoResizeLabel *orderTipsLabel; // @synthesize orderTipsLabel=_orderTipsLabel;
@property(retain, nonatomic) CTAutoResizeLabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(retain, nonatomic) CTAutoResizeLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)initAttributes;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

