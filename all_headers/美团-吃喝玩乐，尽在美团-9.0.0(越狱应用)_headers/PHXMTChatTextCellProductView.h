//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class PHXMTIMSuggestProductInfo, UIImageView, UILabel;

@interface PHXMTChatTextCellProductView : UIView
{
    PHXMTIMSuggestProductInfo *_productInfo;
    UILabel *_productTitleLabel;
    UILabel *_productSubTitleLabel;
    UILabel *_productDescriptionLabel;
    UILabel *_productPriceLabel;
    UIImageView *_productCoverImageView;
    UILabel *_productTitlelabel;
}

@property(retain, nonatomic) UILabel *productTitlelabel; // @synthesize productTitlelabel=_productTitlelabel;
@property(retain, nonatomic) UIImageView *productCoverImageView; // @synthesize productCoverImageView=_productCoverImageView;
@property(retain, nonatomic) UILabel *productPriceLabel; // @synthesize productPriceLabel=_productPriceLabel;
@property(retain, nonatomic) UILabel *productDescriptionLabel; // @synthesize productDescriptionLabel=_productDescriptionLabel;
@property(retain, nonatomic) UILabel *productSubTitleLabel; // @synthesize productSubTitleLabel=_productSubTitleLabel;
@property(retain, nonatomic) UILabel *productTitleLabel; // @synthesize productTitleLabel=_productTitleLabel;
@property(retain, nonatomic) PHXMTIMSuggestProductInfo *productInfo; // @synthesize productInfo=_productInfo;
- (void).cxx_destruct;
- (id)init;

@end

