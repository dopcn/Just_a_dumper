//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class ContactShopBtn, UILabel;

@interface OverseaShopInfoSingleRow : UIView
{
    _Bool _isPhone;
    CDUnknownBlockType _contackBlock;
    UILabel *_titleLabel;
    UILabel *_infoLabel;
    long long _maxInfoLabelLineCount;
    ContactShopBtn *_contactShopBtn;
}

+ (double)standWidth;
+ (double)titleLabelWidth;
+ (double)rowOffset;
@property(retain, nonatomic) ContactShopBtn *contactShopBtn; // @synthesize contactShopBtn=_contactShopBtn;
@property(nonatomic) long long maxInfoLabelLineCount; // @synthesize maxInfoLabelLineCount=_maxInfoLabelLineCount;
@property(retain, nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType contackBlock; // @synthesize contackBlock=_contackBlock;
@property(nonatomic) _Bool isPhone; // @synthesize isPhone=_isPhone;
- (void).cxx_destruct;
- (void)contactShop;
- (double)infoLabelLineSpacing;
- (double)rowHeight;
- (struct CGSize)infoLabelSize;
- (void)layoutSubviews;
- (void)updateContentsWithTitle:(id)arg1 info:(id)arg2 maxInfoLabelLineCount:(long long)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

