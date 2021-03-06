//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, CSHTMLLabel, NSString, UIButton, UIImage, UILabel;
@protocol MKVIPHeaderViewDelegate;

@interface MKVIPHeaderView : UIView
{
    UILabel *_titleLabel;
    CSHTMLLabel *_subLabel;
    UIButton *_button;
    UIView *_insideView;
    UIView *_outsideView;
    CAShapeLayer *_circle1;
    CAShapeLayer *_circle2;
    CAShapeLayer *_circle3;
    double insideCircleRadius;
    double outsideCircleRadius;
    _Bool _isPriority;
    _Bool _isZZB;
    id <MKVIPHeaderViewDelegate> _delegate;
    NSString *_buttonTitle;
    NSString *_labelText;
    UIImage *_imageIcon;
}

@property(nonatomic) _Bool isZZB; // @synthesize isZZB=_isZZB;
@property(retain, nonatomic) UIImage *imageIcon; // @synthesize imageIcon=_imageIcon;
@property(retain, nonatomic) NSString *labelText; // @synthesize labelText=_labelText;
@property(retain, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property(nonatomic) _Bool isPriority; // @synthesize isPriority=_isPriority;
@property(nonatomic) __weak id <MKVIPHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onConfirmButtonClick:(id)arg1;
- (void)animateCicleAlongPath:(long long)arg1 withLayer:(id)arg2;
- (void)animationCircleRotate;
- (id)creatCircleLayer:(struct CGPoint)arg1 radius:(double)arg2;
- (void)addCircle:(struct CGPoint)arg1;
- (void)addSubLabel:(double)arg1;
- (id)createButtonImage:(struct CGSize)arg1;
- (void)refreshView;
- (void)addMainButton;
- (void)addDefaultPhotoImage;
- (void)addMainImageView;
- (void)initHeaderView;
- (id)creatRoundLayer:(double)arg1 fill:(id)arg2 stroke:(id)arg3;
- (void)show;
- (id)initWithFrame:(struct CGRect)arg1;
- (double)getOutsideCircleRadius;
- (double)getInsideCircleRadius;

@end

