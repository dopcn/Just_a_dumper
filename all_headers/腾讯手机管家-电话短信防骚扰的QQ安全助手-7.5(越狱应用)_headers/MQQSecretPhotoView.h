//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class MQQENCPhoto, UIImageView;
@protocol MQQSecretPhotoViewDelegate;

@interface MQQSecretPhotoView : UIButton
{
    MQQENCPhoto *photo;
    UIImageView *photoImageView;
    UIImageView *_highlightedView;
    UIImageView *selectedView;
    UIImageView *_videoMaskView;
    id <MQQSecretPhotoViewDelegate> _delegate;
}

@property(nonatomic) id <MQQSecretPhotoViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImageView *selectedView; // @synthesize selectedView;
@property(retain, nonatomic) MQQENCPhoto *photo; // @synthesize photo;
- (void)addPhotoFrameView;
- (void)actionToLoadImage;
- (void)setDeselectedAnimated:(_Bool)arg1;
- (void)setSelectedAnimated:(_Bool)arg1;
- (void)toggleSelection;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 photo:(id)arg2 delegate:(id)arg3;

@end

