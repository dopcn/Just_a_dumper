//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;

@interface QRAssocatorAlertView : UIView
{
    UILabel *_contentLabel;
    UIButton *_cancelBt;
    UIButton *_sureBt;
    CDUnknownBlockType _click;
}

+ (id)alertInView:(id)arg1 content:(id)arg2 cancelTitle:(id)arg3 sureTitle:(id)arg4 sureClick:(CDUnknownBlockType)arg5;
@property(copy, nonatomic) CDUnknownBlockType click; // @synthesize click=_click;
@property(retain, nonatomic) UIButton *sureBt; // @synthesize sureBt=_sureBt;
@property(retain, nonatomic) UIButton *cancelBt; // @synthesize cancelBt=_cancelBt;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
- (void).cxx_destruct;
- (void)handleSure;
- (void)handleCancle;
- (id)initWithFrame:(struct CGRect)arg1;

@end

