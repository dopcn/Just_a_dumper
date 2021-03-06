//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIImageView, UILabel;

@interface OTSPackageContentView : UIButton
{
    UIImageView *_product1;
    UIImageView *_product2;
    UIImageView *_product3;
    UILabel *_prodsCountLabel;
    UIButton *_self;
    CDUnknownBlockType _block;
}

+ (double)heightOfView;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain, nonatomic) UIButton *self; // @synthesize self=_self;
@property(retain, nonatomic) UILabel *prodsCountLabel; // @synthesize prodsCountLabel=_prodsCountLabel;
@property(retain, nonatomic) UIImageView *product3; // @synthesize product3=_product3;
@property(retain, nonatomic) UIImageView *product2; // @synthesize product2=_product2;
@property(retain, nonatomic) UIImageView *product1; // @synthesize product1=_product1;
- (void).cxx_destruct;
- (void)btnClick:(id)arg1;
- (void)updateViewWithData:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)setUpView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

