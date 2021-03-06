//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIActionSheetDelegate-Protocol.h"

@class CALayer, CAShapeLayer, CATextLayer, JDImageView, NSMutableAttributedString, NSString, SCShopCartAccessoryModel, UIImage;
@protocol SCShopCartGiftViewDelegate;

@interface SCShopCartGiftView : UIView <UIActionSheetDelegate>
{
    struct CGRect giftIconRect;
    struct CGRect giftNameRect;
    struct CGRect giftPriceRect;
    struct CGRect giftCountRect;
    _Bool isNoStock;
    id <SCShopCartGiftViewDelegate> _delegate;
    CDUnknownBlockType _deleteActionBlock;
    CDUnknownBlockType _pushWareActionBlock;
    JDImageView *_productImageView;
    CALayer *_imageLayer;
    UIImage *_noStockImage;
    NSString *_giftIconString;
    NSMutableAttributedString *_giftNameString;
    NSMutableAttributedString *_priceAttributeString;
    NSString *_giftCountString;
    CAShapeLayer *_bookingLayer;
    CATextLayer *_remainTextLayer;
    SCShopCartAccessoryModel *_gift;
}

@property(retain, nonatomic) SCShopCartAccessoryModel *gift; // @synthesize gift=_gift;
@property(retain, nonatomic) CATextLayer *remainTextLayer; // @synthesize remainTextLayer=_remainTextLayer;
@property(retain, nonatomic) CAShapeLayer *bookingLayer; // @synthesize bookingLayer=_bookingLayer;
@property(copy, nonatomic) NSString *giftCountString; // @synthesize giftCountString=_giftCountString;
@property(retain, nonatomic) NSMutableAttributedString *priceAttributeString; // @synthesize priceAttributeString=_priceAttributeString;
@property(retain, nonatomic) NSMutableAttributedString *giftNameString; // @synthesize giftNameString=_giftNameString;
@property(copy, nonatomic) NSString *giftIconString; // @synthesize giftIconString=_giftIconString;
@property(retain, nonatomic) UIImage *noStockImage; // @synthesize noStockImage=_noStockImage;
@property(retain, nonatomic) CALayer *imageLayer; // @synthesize imageLayer=_imageLayer;
@property(retain, nonatomic) JDImageView *productImageView; // @synthesize productImageView=_productImageView;
@property(copy, nonatomic) CDUnknownBlockType pushWareActionBlock; // @synthesize pushWareActionBlock=_pushWareActionBlock;
@property(copy, nonatomic) CDUnknownBlockType deleteActionBlock; // @synthesize deleteActionBlock=_deleteActionBlock;
@property(nonatomic) __weak id <SCShopCartGiftViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)accessibilityPerformMagicTap;
- (id)accessibilityGiftInfo;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)updateGiftViewWithItem:(id)arg1;
- (id)initUI;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

