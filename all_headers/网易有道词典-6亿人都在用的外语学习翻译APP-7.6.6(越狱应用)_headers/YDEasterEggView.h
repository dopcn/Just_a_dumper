//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView;
@protocol YDEasterEggViewDelegate;

@interface YDEasterEggView : UIView
{
    _Bool _isFold;
    _Bool _isClosed;
    UIImageView *_easterEggImageView;
    UIButton *_closeBtn;
    id <YDEasterEggViewDelegate> _delegate;
}

@property(nonatomic) __weak id <YDEasterEggViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isClosed; // @synthesize isClosed=_isClosed;
@property(nonatomic) _Bool isFold; // @synthesize isFold=_isFold;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UIImageView *easterEggImageView; // @synthesize easterEggImageView=_easterEggImageView;
- (void).cxx_destruct;
- (void)closeEasterEgg;
- (void)easterEggTouched:(id)arg1;
- (void)setEasterEggWithUrl:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

