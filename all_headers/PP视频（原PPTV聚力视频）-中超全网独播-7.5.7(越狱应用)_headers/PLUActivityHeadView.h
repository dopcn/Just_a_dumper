//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;
@protocol PLUActivityHeadViewDelegate;

@interface PLUActivityHeadView : UIView
{
    _Bool _horizontalMode;
    id <PLUActivityHeadViewDelegate> _delegate;
    UILabel *_titleLbl;
    UIButton *_closeBtn;
}

@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UILabel *titleLbl; // @synthesize titleLbl=_titleLbl;
@property(nonatomic) _Bool horizontalMode; // @synthesize horizontalMode=_horizontalMode;
@property(nonatomic) __weak id <PLUActivityHeadViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)closeBtnClicked;
- (id)initWithFrame:(struct CGRect)arg1;

@end

