//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class MOBILECHATEmotionModelVO, UIButton, UIImageView;

@interface ChooseImageItemCell : UICollectionViewCell
{
    _Bool _isSelected;
    UIButton *_chooseBtn;
    id _data;
    MOBILECHATEmotionModelVO *_emotionModel;
    UIImageView *_itemImageView;
}

@property(retain, nonatomic) UIImageView *itemImageView; // @synthesize itemImageView=_itemImageView;
@property(retain, nonatomic) MOBILECHATEmotionModelVO *emotionModel; // @synthesize emotionModel=_emotionModel;
@property(retain, nonatomic) id data; // @synthesize data=_data;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) UIButton *chooseBtn; // @synthesize chooseBtn=_chooseBtn;
- (void).cxx_destruct;
- (_Bool)isAccessibilityElement;
- (void)prepareForReuse;
- (void)updateConstraints;
- (void)setUpConstraints;
- (void)updateSelectedStatus;
- (id)initWithFrame:(struct CGRect)arg1;

@end

