//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface WBZoomAndDragImageView : UIView
{
    UIImageView *_imageView;
    struct CGPoint _imageViewCenter;
    struct CGSize _minSize;
    struct CGSize _maxSize;
    struct CGPoint _touchCenter;
    struct CGRect _originFrame;
}

@property(nonatomic) struct CGRect originFrame; // @synthesize originFrame=_originFrame;
@property(nonatomic) struct CGPoint touchCenter; // @synthesize touchCenter=_touchCenter;
@property(nonatomic) struct CGSize maxSize; // @synthesize maxSize=_maxSize;
@property(nonatomic) struct CGSize minSize; // @synthesize minSize=_minSize;
@property(nonatomic) struct CGPoint imageViewCenter; // @synthesize imageViewCenter=_imageViewCenter;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (struct CGRect)boundsOfImage;
- (struct CGPoint)adjustedImageViewOriginOfFrame:(struct CGRect)arg1;
- (void)processPinchGesture:(id)arg1;
- (void)processPanGesture:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 image:(id)arg2 imageViewCenter:(struct CGPoint)arg3 minimumSize:(struct CGSize)arg4 maximumSize:(struct CGSize)arg5;

@end

