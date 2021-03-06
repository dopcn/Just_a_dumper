//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LTMBaseView.h"

@class UIButton, UIImageView, UILabel;
@protocol NMCarConnectionStartViewDelegate;

@interface NMCarConnectionStartView : LTMBaseView
{
    unsigned long long _currentUIStatus;
    id <NMCarConnectionStartViewDelegate> _delegate;
    UILabel *_title;
    UILabel *_subTitle;
    UIImageView *_carImageView;
    UIButton *_operateButton;
}

@property(retain, nonatomic) UIButton *operateButton; // @synthesize operateButton=_operateButton;
@property(retain, nonatomic) UIImageView *carImageView; // @synthesize carImageView=_carImageView;
@property(retain, nonatomic) UILabel *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(nonatomic) __weak id <NMCarConnectionStartViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long currentUIStatus; // @synthesize currentUIStatus=_currentUIStatus;
- (void).cxx_destruct;
- (void)cancelCarConnect;
- (void)operateButtonTouched:(id)arg1;
- (void)updateToPortraitSize;
- (id)initWithFrame:(struct CGRect)arg1;

@end

