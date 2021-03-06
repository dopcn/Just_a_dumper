//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DRCProductInfoBaseView.h"

@class DRCDetailProductModel, UIImageView, UILabel, UIView;

@interface DRCProductInfoBackView : DRCProductInfoBaseView
{
    UIImageView *_activityImageView;
    UIImageView *_couponImageView;
    UIView *_priceLineView;
    UILabel *_storageLabel;
    UIView *_storageLabelView;
    UIView *_specialsView;
    DRCDetailProductModel *_detailProductModel;
    CDUnknownBlockType _specialsFoldBlock;
}

+ (double)heightNeedIncreasedTitle:(id)arg1 price:(id)arg2;
@property(copy, nonatomic) CDUnknownBlockType specialsFoldBlock; // @synthesize specialsFoldBlock=_specialsFoldBlock;
@property(retain, nonatomic) DRCDetailProductModel *detailProductModel; // @synthesize detailProductModel=_detailProductModel;
@property(retain, nonatomic) UIView *specialsView; // @synthesize specialsView=_specialsView;
@property(retain, nonatomic) UIView *storageLabelView; // @synthesize storageLabelView=_storageLabelView;
@property(retain, nonatomic) UILabel *storageLabel; // @synthesize storageLabel=_storageLabel;
@property(retain, nonatomic) UIView *priceLineView; // @synthesize priceLineView=_priceLineView;
@property(retain, nonatomic) UIImageView *couponImageView; // @synthesize couponImageView=_couponImageView;
@property(retain, nonatomic) UIImageView *activityImageView; // @synthesize activityImageView=_activityImageView;
- (void).cxx_destruct;
- (void)clear;
- (void)setSpecials;
- (void)updateFrame;
- (void)setObject:(id)arg1 isSpecial:(_Bool)arg2 specialsFoldClick:(CDUnknownBlockType)arg3;
- (void)resetSubviewStyles;
- (void)setConstraints;
- (id)init;

@end

