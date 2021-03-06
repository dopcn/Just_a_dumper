//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class BDWalletPolymerPayPropertyView, NSString, UIImageView, UILabel, UIView;

@interface BDWalletPolymerPayCellView : UIControl
{
    _Bool _isAvailable;
    int _type;
    NSString *_radioCheckStateImageName;
    UIImageView *_iconImageView;
    UILabel *_titleLabl;
    UILabel *_descLabl;
    UIImageView *_selectImageView;
    UILabel *_rightDescLabel;
    UIImageView *_recommendImageView;
    UIView *_lineView;
    BDWalletPolymerPayPropertyView *_propertyView;
}

@property(retain, nonatomic) BDWalletPolymerPayPropertyView *propertyView; // @synthesize propertyView=_propertyView;
@property(nonatomic) _Bool isAvailable; // @synthesize isAvailable=_isAvailable;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIImageView *recommendImageView; // @synthesize recommendImageView=_recommendImageView;
@property(retain, nonatomic) UILabel *rightDescLabel; // @synthesize rightDescLabel=_rightDescLabel;
@property(retain, nonatomic) UIImageView *selectImageView; // @synthesize selectImageView=_selectImageView;
@property(retain, nonatomic) UILabel *descLabl; // @synthesize descLabl=_descLabl;
@property(retain, nonatomic) UILabel *titleLabl; // @synthesize titleLabl=_titleLabl;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *radioCheckStateImageName; // @synthesize radioCheckStateImageName=_radioCheckStateImageName;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1;
- (id)lineImageView:(struct CGPoint)arg1;
- (void)downloadedWithImage:(id)arg1;
- (void)updateTextFrame;
- (void)setModel:(id)arg1;
- (void)initViews;
- (id)initWithType:(int)arg1;
- (id)initWithFrame:(struct CGRect)arg1 type:(int)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

