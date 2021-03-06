//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GCPopMask, UIButton, UILabel;

@interface GCLiveErrorAlertView : UIView
{
    UIButton *_operatBtn;
    UILabel *_titleLabel;
    UILabel *_contentLabel;
    GCPopMask *_popMask;
    CDUnknownBlockType _buttonBlock;
}

+ (id)createErrorAlertWithTitle:(id)arg1 content:(id)arg2 btntitle:(id)arg3 btnBlock:(CDUnknownBlockType)arg4;
@property(copy, nonatomic) CDUnknownBlockType buttonBlock; // @synthesize buttonBlock=_buttonBlock;
@property(retain, nonatomic) GCPopMask *popMask; // @synthesize popMask=_popMask;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *operatBtn; // @synthesize operatBtn=_operatBtn;
- (void).cxx_destruct;
- (void)showAlertView;
- (void)dismiss;
- (void)layoutSubviews;
- (id)init;

@end

