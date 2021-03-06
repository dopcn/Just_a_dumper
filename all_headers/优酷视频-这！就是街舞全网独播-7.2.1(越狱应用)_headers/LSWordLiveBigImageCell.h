//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LSWordLiveBaseCell.h"

@class UIImageView;

@interface LSWordLiveBigImageCell : LSWordLiveBaseCell
{
    UIImageView *_imageView;
    unsigned long long _type;
    CDUnknownBlockType _tapBlock;
    UIImageView *_iconImageView;
}

@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(copy, nonatomic) CDUnknownBlockType tapBlock; // @synthesize tapBlock=_tapBlock;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)tapGestureEvent:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

