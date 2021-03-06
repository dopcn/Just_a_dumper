//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IGFeedItemPhotoCell.h"

@class CAShapeLayer, UIImageView;
@protocol IGFeedItemAd4AdPhotoCellDelegate;

@interface IGFeedItemAd4AdPhotoCell : IGFeedItemPhotoCell
{
    id <IGFeedItemAd4AdPhotoCellDelegate> _ad4adPDelegate;
    UIImageView *_videoIconImageView;
    CAShapeLayer *_boarderLayer;
}

@property(retain, nonatomic) CAShapeLayer *boarderLayer; // @synthesize boarderLayer=_boarderLayer;
@property(retain, nonatomic) UIImageView *videoIconImageView; // @synthesize videoIconImageView=_videoIconImageView;
@property(nonatomic) __weak id <IGFeedItemAd4AdPhotoCellDelegate> ad4adPDelegate; // @synthesize ad4adPDelegate=_ad4adPDelegate;
- (void).cxx_destruct;
- (void)photoViewTapped:(id)arg1;
- (void)shouldShowVideoIcon:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

