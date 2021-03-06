//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImage, UIImageView, UIView, YYAnimatedImageView;

@interface FALCPurchaseRichLevelCell : UICollectionViewCell
{
    _Bool _selectionState;
    long long _style;
    UIView *_bgView;
    YYAnimatedImageView *_iconView;
    UIView *_selectionView;
    UIImage *_currentRichImage;
    UIImageView *_rightBottomSelectView;
    long long _currentRichLevel;
}

@property(nonatomic) long long currentRichLevel; // @synthesize currentRichLevel=_currentRichLevel;
@property(retain, nonatomic) UIImageView *rightBottomSelectView; // @synthesize rightBottomSelectView=_rightBottomSelectView;
@property(retain, nonatomic) UIImage *currentRichImage; // @synthesize currentRichImage=_currentRichImage;
@property(retain, nonatomic) UIView *selectionView; // @synthesize selectionView=_selectionView;
@property(retain, nonatomic) YYAnimatedImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) _Bool selectionState; // @synthesize selectionState=_selectionState;
- (void).cxx_destruct;
- (void)updateDataWithRichLevelModel:(id)arg1;
- (void)layoutSubviews;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

