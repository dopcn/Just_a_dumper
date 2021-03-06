//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BMLWView.h"

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class BMLWHomeBuyBannerView, BMLWHomeBuyHotSaleView, BMLWHomeBuyInfoView, BMLWHomeBuyInputView, BMLWHomeBuyRiderInfoView, BMLWKeyboardActor, NSString, UIScrollView, UITapGestureRecognizer, UIView;
@protocol BMLWHomeBuyViewDelegate;

@interface BMLWHomeBuyView : BMLWView <UIScrollViewDelegate, UIGestureRecognizerDelegate>
{
    id <BMLWHomeBuyViewDelegate> _delegate;
    UIScrollView *_scrollView;
    UIView *_contentView;
    BMLWHomeBuyBannerView *_bannerView;
    BMLWHomeBuyRiderInfoView *_riderInfoView;
    BMLWHomeBuyInputView *_inputView;
    BMLWHomeBuyHotSaleView *_hotSaleView;
    UITapGestureRecognizer *_tap;
    BMLWKeyboardActor *_keyboardActor;
    BMLWHomeBuyInfoView *_serviceInfoView;
}

@property(retain, nonatomic) BMLWHomeBuyInfoView *serviceInfoView; // @synthesize serviceInfoView=_serviceInfoView;
@property(retain, nonatomic) BMLWKeyboardActor *keyboardActor; // @synthesize keyboardActor=_keyboardActor;
@property(retain, nonatomic) UITapGestureRecognizer *tap; // @synthesize tap=_tap;
@property(retain, nonatomic) BMLWHomeBuyHotSaleView *hotSaleView; // @synthesize hotSaleView=_hotSaleView;
@property(retain, nonatomic) BMLWHomeBuyInputView *inputView; // @synthesize inputView=_inputView;
@property(retain, nonatomic) BMLWHomeBuyRiderInfoView *riderInfoView; // @synthesize riderInfoView=_riderInfoView;
@property(retain, nonatomic) BMLWHomeBuyBannerView *bannerView; // @synthesize bannerView=_bannerView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak id <BMLWHomeBuyViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)didClickView;
- (void)setData:(id)arg1;
- (void)submit;
- (void)dealloc;
- (void)bindAction;
- (void)loadSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

