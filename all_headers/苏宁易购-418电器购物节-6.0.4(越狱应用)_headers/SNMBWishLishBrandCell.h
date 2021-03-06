//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "SNUIButtonDelegate-Protocol.h"

@class NSString, SNMBWishLishLabelDTO, SNUIButton, UILabel, UIView;
@protocol SNMBWishLishBrandCellDelegate;

@interface SNMBWishLishBrandCell : UICollectionViewCell <SNUIButtonDelegate>
{
    id <SNMBWishLishBrandCellDelegate> _brandDelegate;
    SNMBWishLishLabelDTO *_dto;
    SNUIButton *_shadowButton;
    UIView *_shadowView;
    SNUIButton *_imageButton;
    UILabel *_nameLabel;
}

@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) SNUIButton *imageButton; // @synthesize imageButton=_imageButton;
@property(retain, nonatomic) UIView *shadowView; // @synthesize shadowView=_shadowView;
@property(retain, nonatomic) SNUIButton *shadowButton; // @synthesize shadowButton=_shadowButton;
@property(retain, nonatomic) SNMBWishLishLabelDTO *dto; // @synthesize dto=_dto;
@property(nonatomic) __weak id <SNMBWishLishBrandCellDelegate> brandDelegate; // @synthesize brandDelegate=_brandDelegate;
- (void).cxx_destruct;
- (void)selectorLabelButtonClick;
- (void)imageButtonFailedToLoadImage:(id)arg1 error:(id)arg2;
- (void)imageExViewDidOk:(id)arg1;
- (void)setUpdata:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

