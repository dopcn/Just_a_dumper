//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class CAGradientLayer, TDEntity, UIImageView, UILabel;

@interface TDThemeVideoView : UICollectionViewCell
{
    UIImageView *_coverImageView;
    UILabel *_desLabel;
    UILabel *_timeMark;
    CAGradientLayer *_maskLayer;
    TDEntity *_itemModel;
}

+ (struct CGSize)cardSize:(id)arg1;
@property(retain, nonatomic) TDEntity *itemModel; // @synthesize itemModel=_itemModel;
@property(retain, nonatomic) CAGradientLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(retain, nonatomic) UILabel *timeMark; // @synthesize timeMark=_timeMark;
@property(retain, nonatomic) UILabel *desLabel; // @synthesize desLabel=_desLabel;
@property(retain, nonatomic) UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)configModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

