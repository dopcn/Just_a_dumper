//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCBCollectionViewCell.h"

@class CCBImageView, CCBLabel;

@interface CCB_6_carouselAreaFixedCell : CCBCollectionViewCell
{
    CCBImageView *_arrowImageView;
    CCBImageView *_imageView;
    CCBLabel *_title;
}

@property(retain, nonatomic) CCBLabel *title; // @synthesize title=_title;
@property(retain, nonatomic) CCBImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) CCBImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
- (void).cxx_destruct;
- (void)setContentWithDic:(id)arg1 showArrow:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

