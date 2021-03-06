//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImage, UIImageView, UILabel;
@protocol XSTCircleCoverCropViewDelegate;

@interface XSTCircleCoverCropView : UIView
{
    _Bool _isHideUserShowButton;
    UIImage *_inputImage;
    double _clipImageRate;
    id <XSTCircleCoverCropViewDelegate> _delegate;
    UIView *_topView;
    UIView *_navBar;
    UIView *_bottomView;
    UIButton *_backBtn;
    UIButton *_sureBtn;
    UIView *_clipView;
    UIImageView *_imageView;
    UIButton *_userShowButton;
    UIButton *_userShowSuperButton;
    UILabel *_tipLabel;
    struct CGRect _preFrame;
}

@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UIButton *userShowSuperButton; // @synthesize userShowSuperButton=_userShowSuperButton;
@property(retain, nonatomic) UIButton *userShowButton; // @synthesize userShowButton=_userShowButton;
@property(nonatomic) struct CGRect preFrame; // @synthesize preFrame=_preFrame;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *clipView; // @synthesize clipView=_clipView;
@property(retain, nonatomic) UIButton *sureBtn; // @synthesize sureBtn=_sureBtn;
@property(retain, nonatomic) UIButton *backBtn; // @synthesize backBtn=_backBtn;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UIView *navBar; // @synthesize navBar=_navBar;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
@property(nonatomic) __weak id <XSTCircleCoverCropViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isHideUserShowButton; // @synthesize isHideUserShowButton=_isHideUserShowButton;
@property(nonatomic) double clipImageRate; // @synthesize clipImageRate=_clipImageRate;
@property(retain, nonatomic) UIImage *inputImage; // @synthesize inputImage=_inputImage;
- (void).cxx_destruct;
- (id)outputImage;
- (void)pinchGesture:(id)arg1;
- (void)panGesture:(id)arg1;
- (void)pressUserShowBtn:(id)arg1;
- (void)pressSure:(id)arg1;
- (void)pressBack:(id)arg1;
- (void)pressCancel:(id)arg1;
- (void)pressDown:(id)arg1;
- (void)layoutSubviews;
- (id)init;

@end

