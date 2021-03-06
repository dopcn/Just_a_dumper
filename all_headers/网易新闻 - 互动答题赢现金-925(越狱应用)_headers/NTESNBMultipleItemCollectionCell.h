//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, NTESNBMultipleItemModel, NTESNBSubscribeButton, UIActivityIndicatorView, UIImageView, UILabel;

@interface NTESNBMultipleItemCollectionCell : UICollectionViewCell
{
    NSString *_imageUrl;
    NSString *_title;
    NTESNBMultipleItemModel *_model;
    UIImageView *_iconView;
    UILabel *_titleLabel;
    UIImageView *_iconPlaceHolder;
    UILabel *_subDetailLabel;
    NTESNBSubscribeButton *_subscribeButton;
    UIActivityIndicatorView *_indicatorView;
}

+ (struct CGSize)cellSizeWithModel:(id)arg1;
@property(retain, nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) NTESNBSubscribeButton *subscribeButton; // @synthesize subscribeButton=_subscribeButton;
@property(retain, nonatomic) UILabel *subDetailLabel; // @synthesize subDetailLabel=_subDetailLabel;
@property(retain, nonatomic) UIImageView *iconPlaceHolder; // @synthesize iconPlaceHolder=_iconPlaceHolder;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) NTESNBMultipleItemModel *model; // @synthesize model=_model;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
- (void).cxx_destruct;
- (void)subscribeReader;
- (void)subscribeReaderComplete;
- (void)updateSubButtonStatus;
- (void)cellWithModel:(id)arg1;
- (void)buildUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

